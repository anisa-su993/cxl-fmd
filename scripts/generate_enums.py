#!/usr/bin/env python3
# SPDX-License-Identifier: LGPL-2.1
"""
Generate C enum definitions from DMTF CSDL schema files.

Parses the CSDL (XML) schema files and extracts EnumType and TypeDefinition
elements, then generates C header files with enum definitions and string
conversion functions.

Based on bmcweb's generate_schema_enums.py but generates C (not C++) output.

Usage:
    python3 scripts/generate_enums.py
"""

import os
import re
import shutil
import xml.etree.ElementTree as ET
from collections import defaultdict

SCRIPT_DIR = os.path.dirname(os.path.realpath(__file__))
PROJECT_ROOT = os.path.realpath(os.path.join(SCRIPT_DIR, ".."))

SCHEMA_DIR = os.path.join(PROJECT_ROOT, "schema", "dmtf", "csdl")
OUTPUT_DIR = os.path.join(PROJECT_ROOT, "include", "generated", "enums")

# XML namespaces
EDMX = "{http://docs.oasis-open.org/odata/ns/edmx}"
EDM = "{http://docs.oasis-open.org/odata/ns/edm}"


class Enum:
    """Represents a parsed enum definition."""

    def __init__(self, name, values, namespace, from_file):
        self.name = name
        self.values = values
        self.namespace = namespace
        self.from_file = from_file


# Acronyms that need special handling in CamelCase conversion
# Format: (original, snake_form, upper_form)
ACRONYMS = [
    ("NVMeoF", "Nvmeof", "NVMEOF"),
    ("DHCPv6", "Dhcpv6", "DHCPV6"),
    ("TLSv2", "Tlsv2", "TLSV2"),
    ("TLSv3", "Tlsv3", "TLSV3"),
    ("PCIe", "Pcie", "PCIE"),
    ("CXL", "Cxl", "CXL"),
    ("QoS", "Qos", "QOS"),
    ("IPv4", "Ipv4", "IPV4"),
    ("IPv6", "Ipv6", "IPV6"),
    ("NVMe", "Nvme", "NVME"),
    ("iSCSI", "Iscsi", "ISCSI"),
    ("FCoE", "Fcoe", "FCOE"),
    ("InfiniBand", "Infiniband", "INFINIBAND"),
    ("SRIOV", "Sriov", "SRIOV"),
    ("USB", "Usb", "USB"),
    ("UEFI", "Uefi", "UEFI"),
    ("BIOS", "Bios", "BIOS"),
    ("ACPI", "Acpi", "ACPI"),
    ("IPMI", "Ipmi", "IPMI"),
]


def camel_to_snake(name):
    """Convert CamelCase to snake_case."""
    # Handle common acronyms that don't follow standard camel case
    for orig, snake, _ in ACRONYMS:
        name = name.replace(orig, snake)
    name = re.sub("(.)([A-Z][a-z]+)", r"\1_\2", name)
    return re.sub("([a-z0-9])([A-Z])", r"\1_\2", name).lower()


def camel_to_upper(name):
    """Convert CamelCase to UPPER_SNAKE_CASE for enum values."""
    # Handle common acronyms that don't follow standard camel case
    for orig, _, upper in ACRONYMS:
        name = name.replace(orig, upper)
    name = re.sub("(.)([A-Z][a-z]+)", r"\1_\2", name)
    return re.sub("([a-z0-9])([A-Z])", r"\1_\2", name).upper()


def parse_schema(element, filename):
    """Parse a Schema element for EnumType and TypeDefinition elements."""
    entity_types = []
    namespace = element.attrib.get("Namespace", "")

    for schema_element in element:
        name = schema_element.attrib.get("Name", None)
        if name is None:
            continue

        # Parse EnumType elements
        if schema_element.tag == EDM + "EnumType":
            enums = []
            for member in schema_element.findall(EDM + "Member"):
                enums.append(member.attrib["Name"])
            entity_types.append(Enum(name, enums, namespace, filename))

        # Parse TypeDefinition elements with enum-like annotations
        # (like bmcweb does for certain schema types)
        if schema_element.tag == EDM + "TypeDefinition":
            enums = []
            for annotation in schema_element:
                for collection in annotation:
                    for record in collection.findall(EDM + "Record"):
                        for member in record.findall(EDM + "PropertyValue"):
                            if "String" in member.attrib:
                                enums.append(member.attrib["String"])
            if enums:
                entity_types.append(Enum(name, enums, namespace, filename))

    return entity_types


def parse_file(filename):
    """Parse a CSDL file for enum definitions."""
    try:
        tree = ET.parse(filename)
    except ET.ParseError as e:
        print(f"Warning: Failed to parse {filename}: {e}")
        return []

    root = tree.getroot()
    results = []

    for ds in root.findall(EDMX + "DataServices"):
        for schema in ds.findall(EDM + "Schema"):
            results.extend(parse_schema(schema, filename))

    return results


def sanitize_enum_value(value, enum_name):
    """
    Sanitize an enum value for use in C code.

    Handles numeric values by prefixing with enum name (like bmcweb).
    """
    # If the value is purely numeric, prefix it with the enum name
    if value.isdigit():
        return f"{enum_name}{value}"

    # Remove invalid characters
    sanitized = re.sub(r"[^0-9_a-zA-Z]", "", value)

    # If starts with digit, prefix with underscore
    if sanitized and sanitized[0].isdigit():
        sanitized = f"_{sanitized}"

    return sanitized


def generate_enum_header(namespace, enums):
    """Generate a C header file for enums in a namespace."""
    snake_ns = camel_to_snake(namespace)

    lines = [
        "/* SPDX-License-Identifier: LGPL-2.1 */",
        "/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */",
        "",
        f"#ifndef REDFISH_ENUM_{snake_ns.upper()}_H",
        f"#define REDFISH_ENUM_{snake_ns.upper()}_H",
        "",
        "#include <stddef.h>",
        "",
    ]

    for enum in enums:
        enum_name = f"rf_{camel_to_snake(enum.name)}"
        values = enum.values.copy()

        # Add Invalid as first value if not present
        if "Invalid" not in values:
            values.insert(0, "Invalid")

        lines.append(f"/* {enum.namespace}.{enum.name} */")
        lines.append(f"enum {enum_name} {{")

        prefix = camel_to_upper(enum.name)
        for i, val in enumerate(values):
            c_val = sanitize_enum_value(val, enum.name)
            c_val = camel_to_upper(c_val)
            lines.append(f"\t{prefix}_{c_val} = {i},")

        lines.append("};")
        lines.append("")

        # Generate string conversion function
        lines.append(
            f"static inline const char *{enum_name}_to_str(enum {enum_name} val)"
        )
        lines.append("{")
        lines.append("\tswitch (val) {")

        for val in values:
            c_val = sanitize_enum_value(val, enum.name)
            c_val = camel_to_upper(c_val)
            lines.append(f'\tcase {prefix}_{c_val}: return "{val}";')

        lines.append("\tdefault: return NULL;")
        lines.append("\t}")
        lines.append("}")
        lines.append("")

    lines.append(f"#endif /* REDFISH_ENUM_{snake_ns.upper()}_H */")
    lines.append("")

    return "\n".join(lines)


def main():
    """Main entry point - can be called as module or script."""
    print(f"Generating enums from {SCHEMA_DIR}")

    if not os.path.exists(SCHEMA_DIR):
        print(f"Error: Schema directory not found: {SCHEMA_DIR}")
        print("Run scripts/update_schemas.py first")
        return 1

    # Clear and recreate output directory
    if os.path.exists(OUTPUT_DIR):
        shutil.rmtree(OUTPUT_DIR)
    os.makedirs(OUTPUT_DIR)

    # Collect all schema files
    filepaths = []
    for root, dirs, files in os.walk(SCHEMA_DIR):
        for csdl_file in files:
            filepath = os.path.join(root, csdl_file)
            # Skip symlinks (like bmcweb does)
            if os.path.islink(filepath):
                continue
            if csdl_file.endswith(".xml"):
                filepaths.append(filepath)

    filepaths.sort()

    # Parse all CSDL files
    all_enums = []
    for filepath in filepaths:
        enums = parse_file(filepath)
        all_enums.extend(enums)
        if enums:
            filename = os.path.basename(filepath)
            print(f"  {filename}: {len(enums)} enums")

    print(f"Parsing done: {len(all_enums)} total enums")

    # Group enums by base namespace
    enums_by_namespace = defaultdict(list)
    for enum in all_enums:
        base_ns = enum.namespace.split(".")[0]
        enums_by_namespace[base_ns].append(enum)

    # Generate header files
    for namespace, enums in enums_by_namespace.items():
        snake_ns = camel_to_snake(namespace)
        output_file = os.path.join(OUTPUT_DIR, f"{snake_ns}.h")

        content = generate_enum_header(namespace, enums)
        with open(output_file, "w") as f:
            f.write(content)

        print(f"Generated {output_file}")

    print(
        f"\nGenerated {len(enums_by_namespace)} header files "
        f"with {len(all_enums)} enums"
    )
    return 0


if __name__ == "__main__":
    exit(main())

# SPDX-License-Identifier: LGPL-2.1
# Install DMTF schemas for static hosting

# CSDL (XML) schemas - served at /redfish/v1/schema/
install_subdir(
    'installed',
    install_dir: get_option('datadir') / 'cxl-fmd' / 'schema',
    strip_directory: true,
)

# JSON schemas - served at /redfish/v1/JsonSchemas/
install_subdir(
    'json-schema-installed',
    install_dir: get_option('datadir') / 'cxl-fmd' / 'JsonSchemas',
    strip_directory: true,
)

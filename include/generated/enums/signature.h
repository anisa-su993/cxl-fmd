/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_SIGNATURE_H
#define REDFISH_ENUM_SIGNATURE_H

#include <stddef.h>

/* Signature.SignatureTypeRegistry */
enum rf_signature_type_registry {
	SIGNATURE_TYPE_REGISTRY_INVALID = 0,
	SIGNATURE_TYPE_REGISTRY_UEFI = 1,
};

static inline const char *rf_signature_type_registry_to_str(enum rf_signature_type_registry val)
{
	switch (val) {
	case SIGNATURE_TYPE_REGISTRY_INVALID: return "Invalid";
	case SIGNATURE_TYPE_REGISTRY_UEFI: return "UEFI";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_SIGNATURE_H */

/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_CXL_LOGICAL_DEVICE_H
#define REDFISH_ENUM_CXL_LOGICAL_DEVICE_H

#include <stddef.h>

/* CXLLogicalDevice.v1_0_0.CXLSemantic */
enum rf_cxl_semantic {
	CXL_SEMANTIC_INVALID = 0,
	CXL_SEMANTIC_CX_LIO = 1,
	CXL_SEMANTIC_CX_LCACHE = 2,
	CXL_SEMANTIC_CX_LMEM = 3,
};

static inline const char *rf_cxl_semantic_to_str(enum rf_cxl_semantic val)
{
	switch (val) {
	case CXL_SEMANTIC_INVALID: return "Invalid";
	case CXL_SEMANTIC_CX_LIO: return "CXLio";
	case CXL_SEMANTIC_CX_LCACHE: return "CXLcache";
	case CXL_SEMANTIC_CX_LMEM: return "CXLmem";
	default: return NULL;
	}
}

/* CXLLogicalDevice.v1_3_0.PassphraseType */
enum rf_passphrase_type {
	PASSPHRASE_TYPE_INVALID = 0,
	PASSPHRASE_TYPE_USER = 1,
	PASSPHRASE_TYPE_MASTER = 2,
};

static inline const char *rf_passphrase_type_to_str(enum rf_passphrase_type val)
{
	switch (val) {
	case PASSPHRASE_TYPE_INVALID: return "Invalid";
	case PASSPHRASE_TYPE_USER: return "User";
	case PASSPHRASE_TYPE_MASTER: return "Master";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_CXL_LOGICAL_DEVICE_H */

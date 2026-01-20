/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_SECURE_BOOT_DATABASE_H
#define REDFISH_ENUM_SECURE_BOOT_DATABASE_H

#include <stddef.h>

/* SecureBootDatabase.v1_0_0.ResetKeysType */
enum rf_reset_keys_type {
	RESET_KEYS_TYPE_INVALID = 0,
	RESET_KEYS_TYPE_RESET_ALL_KEYS_TO_DEFAULT = 1,
	RESET_KEYS_TYPE_DELETE_ALL_KEYS = 2,
};

static inline const char *rf_reset_keys_type_to_str(enum rf_reset_keys_type val)
{
	switch (val) {
	case RESET_KEYS_TYPE_INVALID: return "Invalid";
	case RESET_KEYS_TYPE_RESET_ALL_KEYS_TO_DEFAULT: return "ResetAllKeysToDefault";
	case RESET_KEYS_TYPE_DELETE_ALL_KEYS: return "DeleteAllKeys";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_SECURE_BOOT_DATABASE_H */

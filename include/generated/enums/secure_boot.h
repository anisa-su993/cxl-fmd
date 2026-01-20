/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_SECURE_BOOT_H
#define REDFISH_ENUM_SECURE_BOOT_H

#include <stddef.h>

/* SecureBoot.v1_0_0.SecureBootCurrentBootType */
enum rf_secure_boot_current_boot_type {
	SECURE_BOOT_CURRENT_BOOT_TYPE_INVALID = 0,
	SECURE_BOOT_CURRENT_BOOT_TYPE_ENABLED = 1,
	SECURE_BOOT_CURRENT_BOOT_TYPE_DISABLED = 2,
};

static inline const char *rf_secure_boot_current_boot_type_to_str(enum rf_secure_boot_current_boot_type val)
{
	switch (val) {
	case SECURE_BOOT_CURRENT_BOOT_TYPE_INVALID: return "Invalid";
	case SECURE_BOOT_CURRENT_BOOT_TYPE_ENABLED: return "Enabled";
	case SECURE_BOOT_CURRENT_BOOT_TYPE_DISABLED: return "Disabled";
	default: return NULL;
	}
}

/* SecureBoot.v1_0_0.SecureBootModeType */
enum rf_secure_boot_mode_type {
	SECURE_BOOT_MODE_TYPE_INVALID = 0,
	SECURE_BOOT_MODE_TYPE_SETUP_MODE = 1,
	SECURE_BOOT_MODE_TYPE_USER_MODE = 2,
	SECURE_BOOT_MODE_TYPE_AUDIT_MODE = 3,
	SECURE_BOOT_MODE_TYPE_DEPLOYED_MODE = 4,
};

static inline const char *rf_secure_boot_mode_type_to_str(enum rf_secure_boot_mode_type val)
{
	switch (val) {
	case SECURE_BOOT_MODE_TYPE_INVALID: return "Invalid";
	case SECURE_BOOT_MODE_TYPE_SETUP_MODE: return "SetupMode";
	case SECURE_BOOT_MODE_TYPE_USER_MODE: return "UserMode";
	case SECURE_BOOT_MODE_TYPE_AUDIT_MODE: return "AuditMode";
	case SECURE_BOOT_MODE_TYPE_DEPLOYED_MODE: return "DeployedMode";
	default: return NULL;
	}
}

/* SecureBoot.v1_0_0.ResetKeysType */
enum rf_reset_keys_type {
	RESET_KEYS_TYPE_INVALID = 0,
	RESET_KEYS_TYPE_RESET_ALL_KEYS_TO_DEFAULT = 1,
	RESET_KEYS_TYPE_DELETE_ALL_KEYS = 2,
	RESET_KEYS_TYPE_DELETE_PK = 3,
};

static inline const char *rf_reset_keys_type_to_str(enum rf_reset_keys_type val)
{
	switch (val) {
	case RESET_KEYS_TYPE_INVALID: return "Invalid";
	case RESET_KEYS_TYPE_RESET_ALL_KEYS_TO_DEFAULT: return "ResetAllKeysToDefault";
	case RESET_KEYS_TYPE_DELETE_ALL_KEYS: return "DeleteAllKeys";
	case RESET_KEYS_TYPE_DELETE_PK: return "DeletePK";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_SECURE_BOOT_H */

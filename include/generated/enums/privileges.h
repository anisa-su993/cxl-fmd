/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_PRIVILEGES_H
#define REDFISH_ENUM_PRIVILEGES_H

#include <stddef.h>

/* Privileges.PrivilegeType */
enum rf_privilege_type {
	PRIVILEGE_TYPE_INVALID = 0,
	PRIVILEGE_TYPE_LOGIN = 1,
	PRIVILEGE_TYPE_CONFIGURE_MANAGER = 2,
	PRIVILEGE_TYPE_CONFIGURE_USERS = 3,
	PRIVILEGE_TYPE_CONFIGURE_SELF = 4,
	PRIVILEGE_TYPE_CONFIGURE_COMPONENTS = 5,
	PRIVILEGE_TYPE_NO_AUTH = 6,
	PRIVILEGE_TYPE_CONFIGURE_COMPOSITION_INFRASTRUCTURE = 7,
	PRIVILEGE_TYPE_ADMINISTRATE_SYSTEMS = 8,
	PRIVILEGE_TYPE_OPERATE_SYSTEMS = 9,
	PRIVILEGE_TYPE_ADMINISTRATE_STORAGE = 10,
	PRIVILEGE_TYPE_OPERATE_STORAGE_BACKUP = 11,
};

static inline const char *rf_privilege_type_to_str(enum rf_privilege_type val)
{
	switch (val) {
	case PRIVILEGE_TYPE_INVALID: return "Invalid";
	case PRIVILEGE_TYPE_LOGIN: return "Login";
	case PRIVILEGE_TYPE_CONFIGURE_MANAGER: return "ConfigureManager";
	case PRIVILEGE_TYPE_CONFIGURE_USERS: return "ConfigureUsers";
	case PRIVILEGE_TYPE_CONFIGURE_SELF: return "ConfigureSelf";
	case PRIVILEGE_TYPE_CONFIGURE_COMPONENTS: return "ConfigureComponents";
	case PRIVILEGE_TYPE_NO_AUTH: return "NoAuth";
	case PRIVILEGE_TYPE_CONFIGURE_COMPOSITION_INFRASTRUCTURE: return "ConfigureCompositionInfrastructure";
	case PRIVILEGE_TYPE_ADMINISTRATE_SYSTEMS: return "AdministrateSystems";
	case PRIVILEGE_TYPE_OPERATE_SYSTEMS: return "OperateSystems";
	case PRIVILEGE_TYPE_ADMINISTRATE_STORAGE: return "AdministrateStorage";
	case PRIVILEGE_TYPE_OPERATE_STORAGE_BACKUP: return "OperateStorageBackup";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_PRIVILEGES_H */

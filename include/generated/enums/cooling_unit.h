/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_COOLING_UNIT_H
#define REDFISH_ENUM_COOLING_UNIT_H

#include <stddef.h>

/* CoolingUnit.v1_0_0.CoolingEquipmentType */
enum rf_cooling_equipment_type {
	COOLING_EQUIPMENT_TYPE_INVALID = 0,
	COOLING_EQUIPMENT_TYPE_CDU = 1,
	COOLING_EQUIPMENT_TYPE_HEAT_EXCHANGER = 2,
	COOLING_EQUIPMENT_TYPE_IMMERSION_UNIT = 3,
	COOLING_EQUIPMENT_TYPE_RPU = 4,
};

static inline const char *rf_cooling_equipment_type_to_str(enum rf_cooling_equipment_type val)
{
	switch (val) {
	case COOLING_EQUIPMENT_TYPE_INVALID: return "Invalid";
	case COOLING_EQUIPMENT_TYPE_CDU: return "CDU";
	case COOLING_EQUIPMENT_TYPE_HEAT_EXCHANGER: return "HeatExchanger";
	case COOLING_EQUIPMENT_TYPE_IMMERSION_UNIT: return "ImmersionUnit";
	case COOLING_EQUIPMENT_TYPE_RPU: return "RPU";
	default: return NULL;
	}
}

/* CoolingUnit.v1_2_0.CoolingUnitMode */
enum rf_cooling_unit_mode {
	COOLING_UNIT_MODE_INVALID = 0,
	COOLING_UNIT_MODE_ENABLED = 1,
	COOLING_UNIT_MODE_DISABLED = 2,
};

static inline const char *rf_cooling_unit_mode_to_str(enum rf_cooling_unit_mode val)
{
	switch (val) {
	case COOLING_UNIT_MODE_INVALID: return "Invalid";
	case COOLING_UNIT_MODE_ENABLED: return "Enabled";
	case COOLING_UNIT_MODE_DISABLED: return "Disabled";
	default: return NULL;
	}
}

/* CoolingUnit.v1_4_0.ExportType */
enum rf_export_type {
	EXPORT_TYPE_INVALID = 0,
	EXPORT_TYPE_CLONE = 1,
	EXPORT_TYPE_REPLACEMENT = 2,
};

static inline const char *rf_export_type_to_str(enum rf_export_type val)
{
	switch (val) {
	case EXPORT_TYPE_INVALID: return "Invalid";
	case EXPORT_TYPE_CLONE: return "Clone";
	case EXPORT_TYPE_REPLACEMENT: return "Replacement";
	default: return NULL;
	}
}

/* CoolingUnit.v1_4_0.Component */
enum rf_component {
	COMPONENT_INVALID = 0,
	COMPONENT_ALL = 1,
	COMPONENT_MANAGER = 2,
	COMPONENT_MANAGER_ACCOUNTS = 3,
	COMPONENT_COOLING_UNIT = 4,
};

static inline const char *rf_component_to_str(enum rf_component val)
{
	switch (val) {
	case COMPONENT_INVALID: return "Invalid";
	case COMPONENT_ALL: return "All";
	case COMPONENT_MANAGER: return "Manager";
	case COMPONENT_MANAGER_ACCOUNTS: return "ManagerAccounts";
	case COMPONENT_COOLING_UNIT: return "CoolingUnit";
	default: return NULL;
	}
}

/* CoolingUnit.v1_4_0.ExportSecurity */
enum rf_export_security {
	EXPORT_SECURITY_INVALID = 0,
	EXPORT_SECURITY_INCLUDE_SENSITIVE_DATA = 1,
	EXPORT_SECURITY_HASHED_DATA_ONLY = 2,
	EXPORT_SECURITY_EXCLUDE_SENSITIVE_DATA = 3,
};

static inline const char *rf_export_security_to_str(enum rf_export_security val)
{
	switch (val) {
	case EXPORT_SECURITY_INVALID: return "Invalid";
	case EXPORT_SECURITY_INCLUDE_SENSITIVE_DATA: return "IncludeSensitiveData";
	case EXPORT_SECURITY_HASHED_DATA_ONLY: return "HashedDataOnly";
	case EXPORT_SECURITY_EXCLUDE_SENSITIVE_DATA: return "ExcludeSensitiveData";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_COOLING_UNIT_H */

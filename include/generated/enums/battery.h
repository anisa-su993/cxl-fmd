/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_BATTERY_H
#define REDFISH_ENUM_BATTERY_H

#include <stddef.h>

/* Battery.v1_0_0.ChargeState */
enum rf_charge_state {
	CHARGE_STATE_INVALID = 0,
	CHARGE_STATE_IDLE = 1,
	CHARGE_STATE_CHARGING = 2,
	CHARGE_STATE_DISCHARGING = 3,
};

static inline const char *rf_charge_state_to_str(enum rf_charge_state val)
{
	switch (val) {
	case CHARGE_STATE_INVALID: return "Invalid";
	case CHARGE_STATE_IDLE: return "Idle";
	case CHARGE_STATE_CHARGING: return "Charging";
	case CHARGE_STATE_DISCHARGING: return "Discharging";
	default: return NULL;
	}
}

/* Battery.v1_4_0.BatteryChemistryType */
enum rf_battery_chemistry_type {
	BATTERY_CHEMISTRY_TYPE_INVALID = 0,
	BATTERY_CHEMISTRY_TYPE_LEAD_ACID = 1,
	BATTERY_CHEMISTRY_TYPE_LITHIUM_ION = 2,
	BATTERY_CHEMISTRY_TYPE_NICKEL_CADMIUM = 3,
};

static inline const char *rf_battery_chemistry_type_to_str(enum rf_battery_chemistry_type val)
{
	switch (val) {
	case BATTERY_CHEMISTRY_TYPE_INVALID: return "Invalid";
	case BATTERY_CHEMISTRY_TYPE_LEAD_ACID: return "LeadAcid";
	case BATTERY_CHEMISTRY_TYPE_LITHIUM_ION: return "LithiumIon";
	case BATTERY_CHEMISTRY_TYPE_NICKEL_CADMIUM: return "NickelCadmium";
	default: return NULL;
	}
}

/* Battery.v1_4_0.EnergyStorageType */
enum rf_energy_storage_type {
	ENERGY_STORAGE_TYPE_INVALID = 0,
	ENERGY_STORAGE_TYPE_BATTERY = 1,
	ENERGY_STORAGE_TYPE_SUPERCAPACITOR = 2,
};

static inline const char *rf_energy_storage_type_to_str(enum rf_energy_storage_type val)
{
	switch (val) {
	case ENERGY_STORAGE_TYPE_INVALID: return "Invalid";
	case ENERGY_STORAGE_TYPE_BATTERY: return "Battery";
	case ENERGY_STORAGE_TYPE_SUPERCAPACITOR: return "Supercapacitor";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_BATTERY_H */

/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_OUTLET_GROUP_H
#define REDFISH_ENUM_OUTLET_GROUP_H

#include <stddef.h>

/* OutletGroup.PowerState */
enum rf_power_state {
	POWER_STATE_INVALID = 0,
	POWER_STATE_ON = 1,
	POWER_STATE_OFF = 2,
	POWER_STATE_POWER_CYCLE = 3,
};

static inline const char *rf_power_state_to_str(enum rf_power_state val)
{
	switch (val) {
	case POWER_STATE_INVALID: return "Invalid";
	case POWER_STATE_ON: return "On";
	case POWER_STATE_OFF: return "Off";
	case POWER_STATE_POWER_CYCLE: return "PowerCycle";
	default: return NULL;
	}
}

/* OutletGroup.v1_2_0.OutletGroupType */
enum rf_outlet_group_type {
	OUTLET_GROUP_TYPE_INVALID = 0,
	OUTLET_GROUP_TYPE_HARDWARE_DEFINED = 1,
	OUTLET_GROUP_TYPE_USER_DEFINED = 2,
};

static inline const char *rf_outlet_group_type_to_str(enum rf_outlet_group_type val)
{
	switch (val) {
	case OUTLET_GROUP_TYPE_INVALID: return "Invalid";
	case OUTLET_GROUP_TYPE_HARDWARE_DEFINED: return "HardwareDefined";
	case OUTLET_GROUP_TYPE_USER_DEFINED: return "UserDefined";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_OUTLET_GROUP_H */

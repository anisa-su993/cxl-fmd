/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_PUMP_H
#define REDFISH_ENUM_PUMP_H

#include <stddef.h>

/* Pump.v1_0_0.PumpType */
enum rf_pump_type {
	PUMP_TYPE_INVALID = 0,
	PUMP_TYPE_LIQUID = 1,
	PUMP_TYPE_COMPRESSOR = 2,
};

static inline const char *rf_pump_type_to_str(enum rf_pump_type val)
{
	switch (val) {
	case PUMP_TYPE_INVALID: return "Invalid";
	case PUMP_TYPE_LIQUID: return "Liquid";
	case PUMP_TYPE_COMPRESSOR: return "Compressor";
	default: return NULL;
	}
}

/* Pump.v1_2_0.PumpMode */
enum rf_pump_mode {
	PUMP_MODE_INVALID = 0,
	PUMP_MODE_ENABLED = 1,
	PUMP_MODE_DISABLED = 2,
};

static inline const char *rf_pump_mode_to_str(enum rf_pump_mode val)
{
	switch (val) {
	case PUMP_MODE_INVALID: return "Invalid";
	case PUMP_MODE_ENABLED: return "Enabled";
	case PUMP_MODE_DISABLED: return "Disabled";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_PUMP_H */

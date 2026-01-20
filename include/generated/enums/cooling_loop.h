/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_COOLING_LOOP_H
#define REDFISH_ENUM_COOLING_LOOP_H

#include <stddef.h>

/* CoolingLoop.v1_0_0.CoolantType */
enum rf_coolant_type {
	COOLANT_TYPE_INVALID = 0,
	COOLANT_TYPE_WATER = 1,
	COOLANT_TYPE_HYDROCARBON = 2,
	COOLANT_TYPE_FLUOROCARBON = 3,
	COOLANT_TYPE_DIELECTRIC = 4,
};

static inline const char *rf_coolant_type_to_str(enum rf_coolant_type val)
{
	switch (val) {
	case COOLANT_TYPE_INVALID: return "Invalid";
	case COOLANT_TYPE_WATER: return "Water";
	case COOLANT_TYPE_HYDROCARBON: return "Hydrocarbon";
	case COOLANT_TYPE_FLUOROCARBON: return "Fluorocarbon";
	case COOLANT_TYPE_DIELECTRIC: return "Dielectric";
	default: return NULL;
	}
}

/* CoolingLoop.v1_1_0.CoolingLoopType */
enum rf_cooling_loop_type {
	COOLING_LOOP_TYPE_INVALID = 0,
	COOLING_LOOP_TYPE_FWS = 1,
	COOLING_LOOP_TYPE_TCS = 2,
	COOLING_LOOP_TYPE_ROW_TCS = 3,
};

static inline const char *rf_cooling_loop_type_to_str(enum rf_cooling_loop_type val)
{
	switch (val) {
	case COOLING_LOOP_TYPE_INVALID: return "Invalid";
	case COOLING_LOOP_TYPE_FWS: return "FWS";
	case COOLING_LOOP_TYPE_TCS: return "TCS";
	case COOLING_LOOP_TYPE_ROW_TCS: return "RowTCS";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_COOLING_LOOP_H */

/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_THERMAL_H
#define REDFISH_ENUM_THERMAL_H

#include <stddef.h>

/* Thermal.v1_0_1.ReadingUnits */
enum rf_reading_units {
	READING_UNITS_INVALID = 0,
	READING_UNITS_RPM = 1,
	READING_UNITS_PERCENT = 2,
};

static inline const char *rf_reading_units_to_str(enum rf_reading_units val)
{
	switch (val) {
	case READING_UNITS_INVALID: return "Invalid";
	case READING_UNITS_RPM: return "RPM";
	case READING_UNITS_PERCENT: return "Percent";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_THERMAL_H */

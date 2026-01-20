/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_FACILITY_H
#define REDFISH_ENUM_FACILITY_H

#include <stddef.h>

/* Facility.v1_0_0.FacilityType */
enum rf_facility_type {
	FACILITY_TYPE_INVALID = 0,
	FACILITY_TYPE_ROOM = 1,
	FACILITY_TYPE_FLOOR = 2,
	FACILITY_TYPE_BUILDING = 3,
	FACILITY_TYPE_SITE = 4,
};

static inline const char *rf_facility_type_to_str(enum rf_facility_type val)
{
	switch (val) {
	case FACILITY_TYPE_INVALID: return "Invalid";
	case FACILITY_TYPE_ROOM: return "Room";
	case FACILITY_TYPE_FLOOR: return "Floor";
	case FACILITY_TYPE_BUILDING: return "Building";
	case FACILITY_TYPE_SITE: return "Site";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_FACILITY_H */

/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_MEMORY_REGION_H
#define REDFISH_ENUM_MEMORY_REGION_H

#include <stddef.h>

/* MemoryRegion.v1_0_0.RegionType */
enum rf_region_type {
	REGION_TYPE_INVALID = 0,
	REGION_TYPE_STATIC = 1,
	REGION_TYPE_DYNAMIC = 2,
};

static inline const char *rf_region_type_to_str(enum rf_region_type val)
{
	switch (val) {
	case REGION_TYPE_INVALID: return "Invalid";
	case REGION_TYPE_STATIC: return "Static";
	case REGION_TYPE_DYNAMIC: return "Dynamic";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_MEMORY_REGION_H */

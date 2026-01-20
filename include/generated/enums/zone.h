/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_ZONE_H
#define REDFISH_ENUM_ZONE_H

#include <stddef.h>

/* Zone.v1_3_0.ExternalAccessibility */
enum rf_external_accessibility {
	EXTERNAL_ACCESSIBILITY_INVALID = 0,
	EXTERNAL_ACCESSIBILITY_GLOBALLY_ACCESSIBLE = 1,
	EXTERNAL_ACCESSIBILITY_NON_ZONED_ACCESSIBLE = 2,
	EXTERNAL_ACCESSIBILITY_ZONE_ONLY = 3,
	EXTERNAL_ACCESSIBILITY_NO_INTERNAL_ROUTING = 4,
};

static inline const char *rf_external_accessibility_to_str(enum rf_external_accessibility val)
{
	switch (val) {
	case EXTERNAL_ACCESSIBILITY_INVALID: return "Invalid";
	case EXTERNAL_ACCESSIBILITY_GLOBALLY_ACCESSIBLE: return "GloballyAccessible";
	case EXTERNAL_ACCESSIBILITY_NON_ZONED_ACCESSIBLE: return "NonZonedAccessible";
	case EXTERNAL_ACCESSIBILITY_ZONE_ONLY: return "ZoneOnly";
	case EXTERNAL_ACCESSIBILITY_NO_INTERNAL_ROUTING: return "NoInternalRouting";
	default: return NULL;
	}
}

/* Zone.v1_4_0.ZoneType */
enum rf_zone_type {
	ZONE_TYPE_INVALID = 0,
	ZONE_TYPE_DEFAULT = 1,
	ZONE_TYPE_ZONE_OF_ENDPOINTS = 2,
	ZONE_TYPE_ZONE_OF_ZONES = 3,
	ZONE_TYPE_ZONE_OF_RESOURCE_BLOCKS = 4,
};

static inline const char *rf_zone_type_to_str(enum rf_zone_type val)
{
	switch (val) {
	case ZONE_TYPE_INVALID: return "Invalid";
	case ZONE_TYPE_DEFAULT: return "Default";
	case ZONE_TYPE_ZONE_OF_ENDPOINTS: return "ZoneOfEndpoints";
	case ZONE_TYPE_ZONE_OF_ZONES: return "ZoneOfZones";
	case ZONE_TYPE_ZONE_OF_RESOURCE_BLOCKS: return "ZoneOfResourceBlocks";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_ZONE_H */

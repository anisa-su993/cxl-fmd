/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_REDUNDANCY_H
#define REDFISH_ENUM_REDUNDANCY_H

#include <stddef.h>

/* Redundancy.v1_0_0.RedundancyMode */
enum rf_redundancy_mode {
	REDUNDANCY_MODE_INVALID = 0,
	REDUNDANCY_MODE_FAILOVER = 1,
	REDUNDANCY_MODE_NM = 2,
	REDUNDANCY_MODE_SHARING = 3,
	REDUNDANCY_MODE_SPARING = 4,
	REDUNDANCY_MODE_NOT_REDUNDANT = 5,
};

static inline const char *rf_redundancy_mode_to_str(enum rf_redundancy_mode val)
{
	switch (val) {
	case REDUNDANCY_MODE_INVALID: return "Invalid";
	case REDUNDANCY_MODE_FAILOVER: return "Failover";
	case REDUNDANCY_MODE_NM: return "N+m";
	case REDUNDANCY_MODE_SHARING: return "Sharing";
	case REDUNDANCY_MODE_SPARING: return "Sparing";
	case REDUNDANCY_MODE_NOT_REDUNDANT: return "NotRedundant";
	default: return NULL;
	}
}

/* Redundancy.v1_4_0.RedundancyType */
enum rf_redundancy_type {
	REDUNDANCY_TYPE_INVALID = 0,
	REDUNDANCY_TYPE_FAILOVER = 1,
	REDUNDANCY_TYPE_N_PLUS_M = 2,
	REDUNDANCY_TYPE_SHARING = 3,
	REDUNDANCY_TYPE_SPARING = 4,
	REDUNDANCY_TYPE_NOT_REDUNDANT = 5,
};

static inline const char *rf_redundancy_type_to_str(enum rf_redundancy_type val)
{
	switch (val) {
	case REDUNDANCY_TYPE_INVALID: return "Invalid";
	case REDUNDANCY_TYPE_FAILOVER: return "Failover";
	case REDUNDANCY_TYPE_N_PLUS_M: return "NPlusM";
	case REDUNDANCY_TYPE_SHARING: return "Sharing";
	case REDUNDANCY_TYPE_SPARING: return "Sparing";
	case REDUNDANCY_TYPE_NOT_REDUNDANT: return "NotRedundant";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_REDUNDANCY_H */

/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_ENDPOINT_GROUP_H
#define REDFISH_ENUM_ENDPOINT_GROUP_H

#include <stddef.h>

/* EndpointGroup.AccessState */
enum rf_access_state {
	ACCESS_STATE_INVALID = 0,
	ACCESS_STATE_OPTIMIZED = 1,
	ACCESS_STATE_NON_OPTIMIZED = 2,
	ACCESS_STATE_STANDBY = 3,
	ACCESS_STATE_UNAVAILABLE = 4,
	ACCESS_STATE_TRANSITIONING = 5,
};

static inline const char *rf_access_state_to_str(enum rf_access_state val)
{
	switch (val) {
	case ACCESS_STATE_INVALID: return "Invalid";
	case ACCESS_STATE_OPTIMIZED: return "Optimized";
	case ACCESS_STATE_NON_OPTIMIZED: return "NonOptimized";
	case ACCESS_STATE_STANDBY: return "Standby";
	case ACCESS_STATE_UNAVAILABLE: return "Unavailable";
	case ACCESS_STATE_TRANSITIONING: return "Transitioning";
	default: return NULL;
	}
}

/* EndpointGroup.v1_0_0.GroupType */
enum rf_group_type {
	GROUP_TYPE_INVALID = 0,
	GROUP_TYPE_CLIENT = 1,
	GROUP_TYPE_SERVER = 2,
	GROUP_TYPE_INITIATOR = 3,
	GROUP_TYPE_TARGET = 4,
};

static inline const char *rf_group_type_to_str(enum rf_group_type val)
{
	switch (val) {
	case GROUP_TYPE_INVALID: return "Invalid";
	case GROUP_TYPE_CLIENT: return "Client";
	case GROUP_TYPE_SERVER: return "Server";
	case GROUP_TYPE_INITIATOR: return "Initiator";
	case GROUP_TYPE_TARGET: return "Target";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_ENDPOINT_GROUP_H */

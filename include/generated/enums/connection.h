/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_CONNECTION_H
#define REDFISH_ENUM_CONNECTION_H

#include <stddef.h>

/* Connection.v1_0_0.ConnectionType */
enum rf_connection_type {
	CONNECTION_TYPE_INVALID = 0,
	CONNECTION_TYPE_STORAGE = 1,
	CONNECTION_TYPE_MEMORY = 2,
};

static inline const char *rf_connection_type_to_str(enum rf_connection_type val)
{
	switch (val) {
	case CONNECTION_TYPE_INVALID: return "Invalid";
	case CONNECTION_TYPE_STORAGE: return "Storage";
	case CONNECTION_TYPE_MEMORY: return "Memory";
	default: return NULL;
	}
}

/* Connection.v1_0_0.AccessCapability */
enum rf_access_capability {
	ACCESS_CAPABILITY_INVALID = 0,
	ACCESS_CAPABILITY_READ = 1,
	ACCESS_CAPABILITY_WRITE = 2,
};

static inline const char *rf_access_capability_to_str(enum rf_access_capability val)
{
	switch (val) {
	case ACCESS_CAPABILITY_INVALID: return "Invalid";
	case ACCESS_CAPABILITY_READ: return "Read";
	case ACCESS_CAPABILITY_WRITE: return "Write";
	default: return NULL;
	}
}

/* Connection.v1_0_0.AccessState */
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

#endif /* REDFISH_ENUM_CONNECTION_H */

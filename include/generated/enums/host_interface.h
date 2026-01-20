/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_HOST_INTERFACE_H
#define REDFISH_ENUM_HOST_INTERFACE_H

#include <stddef.h>

/* HostInterface.v1_0_0.HostInterfaceType */
enum rf_host_interface_type {
	HOST_INTERFACE_TYPE_INVALID = 0,
	HOST_INTERFACE_TYPE_NETWORK_HOST_INTERFACE = 1,
};

static inline const char *rf_host_interface_type_to_str(enum rf_host_interface_type val)
{
	switch (val) {
	case HOST_INTERFACE_TYPE_INVALID: return "Invalid";
	case HOST_INTERFACE_TYPE_NETWORK_HOST_INTERFACE: return "NetworkHostInterface";
	default: return NULL;
	}
}

/* HostInterface.v1_0_0.AuthenticationMode */
enum rf_authentication_mode {
	AUTHENTICATION_MODE_INVALID = 0,
	AUTHENTICATION_MODE_AUTH_NONE = 1,
	AUTHENTICATION_MODE_BASIC_AUTH = 2,
	AUTHENTICATION_MODE_REDFISH_SESSION_AUTH = 3,
	AUTHENTICATION_MODE_OEM_AUTH = 4,
};

static inline const char *rf_authentication_mode_to_str(enum rf_authentication_mode val)
{
	switch (val) {
	case AUTHENTICATION_MODE_INVALID: return "Invalid";
	case AUTHENTICATION_MODE_AUTH_NONE: return "AuthNone";
	case AUTHENTICATION_MODE_BASIC_AUTH: return "BasicAuth";
	case AUTHENTICATION_MODE_REDFISH_SESSION_AUTH: return "RedfishSessionAuth";
	case AUTHENTICATION_MODE_OEM_AUTH: return "OemAuth";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_HOST_INTERFACE_H */

/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_SESSION_H
#define REDFISH_ENUM_SESSION_H

#include <stddef.h>

/* Session.v1_2_0.SessionTypes */
enum rf_session_types {
	SESSION_TYPES_INVALID = 0,
	SESSION_TYPES_HOST_CONSOLE = 1,
	SESSION_TYPES_MANAGER_CONSOLE = 2,
	SESSION_TYPES_IPMI = 3,
	SESSION_TYPES_KVMIP = 4,
	SESSION_TYPES_OEM = 5,
	SESSION_TYPES_REDFISH = 6,
	SESSION_TYPES_VIRTUAL_MEDIA = 7,
	SESSION_TYPES_WEB_UI = 8,
	SESSION_TYPES_OUTBOUND_CONNECTION = 9,
};

static inline const char *rf_session_types_to_str(enum rf_session_types val)
{
	switch (val) {
	case SESSION_TYPES_INVALID: return "Invalid";
	case SESSION_TYPES_HOST_CONSOLE: return "HostConsole";
	case SESSION_TYPES_MANAGER_CONSOLE: return "ManagerConsole";
	case SESSION_TYPES_IPMI: return "IPMI";
	case SESSION_TYPES_KVMIP: return "KVMIP";
	case SESSION_TYPES_OEM: return "OEM";
	case SESSION_TYPES_REDFISH: return "Redfish";
	case SESSION_TYPES_VIRTUAL_MEDIA: return "VirtualMedia";
	case SESSION_TYPES_WEB_UI: return "WebUI";
	case SESSION_TYPES_OUTBOUND_CONNECTION: return "OutboundConnection";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_SESSION_H */

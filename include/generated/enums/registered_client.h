/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_REGISTERED_CLIENT_H
#define REDFISH_ENUM_REGISTERED_CLIENT_H

#include <stddef.h>

/* RegisteredClient.v1_0_0.ClientType */
enum rf_client_type {
	CLIENT_TYPE_INVALID = 0,
	CLIENT_TYPE_MONITOR = 1,
	CLIENT_TYPE_CONFIGURE = 2,
};

static inline const char *rf_client_type_to_str(enum rf_client_type val)
{
	switch (val) {
	case CLIENT_TYPE_INVALID: return "Invalid";
	case CLIENT_TYPE_MONITOR: return "Monitor";
	case CLIENT_TYPE_CONFIGURE: return "Configure";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_REGISTERED_CLIENT_H */

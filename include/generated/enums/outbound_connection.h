/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_OUTBOUND_CONNECTION_H
#define REDFISH_ENUM_OUTBOUND_CONNECTION_H

#include <stddef.h>

/* OutboundConnection.v1_0_0.OutboundConnectionRetryPolicyType */
enum rf_outbound_connection_retry_policy_type {
	OUTBOUND_CONNECTION_RETRY_POLICY_TYPE_INVALID = 0,
	OUTBOUND_CONNECTION_RETRY_POLICY_TYPE_NONE = 1,
	OUTBOUND_CONNECTION_RETRY_POLICY_TYPE_RETRY_FOREVER = 2,
	OUTBOUND_CONNECTION_RETRY_POLICY_TYPE_RETRY_COUNT = 3,
};

static inline const char *rf_outbound_connection_retry_policy_type_to_str(enum rf_outbound_connection_retry_policy_type val)
{
	switch (val) {
	case OUTBOUND_CONNECTION_RETRY_POLICY_TYPE_INVALID: return "Invalid";
	case OUTBOUND_CONNECTION_RETRY_POLICY_TYPE_NONE: return "None";
	case OUTBOUND_CONNECTION_RETRY_POLICY_TYPE_RETRY_FOREVER: return "RetryForever";
	case OUTBOUND_CONNECTION_RETRY_POLICY_TYPE_RETRY_COUNT: return "RetryCount";
	default: return NULL;
	}
}

/* OutboundConnection.v1_0_0.AuthenticationType */
enum rf_authentication_type {
	AUTHENTICATION_TYPE_INVALID = 0,
	AUTHENTICATION_TYPE_MTLS = 1,
	AUTHENTICATION_TYPE_JWT = 2,
	AUTHENTICATION_TYPE_NONE = 3,
	AUTHENTICATION_TYPE_OEM = 4,
};

static inline const char *rf_authentication_type_to_str(enum rf_authentication_type val)
{
	switch (val) {
	case AUTHENTICATION_TYPE_INVALID: return "Invalid";
	case AUTHENTICATION_TYPE_MTLS: return "MTLS";
	case AUTHENTICATION_TYPE_JWT: return "JWT";
	case AUTHENTICATION_TYPE_NONE: return "None";
	case AUTHENTICATION_TYPE_OEM: return "OEM";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_OUTBOUND_CONNECTION_H */

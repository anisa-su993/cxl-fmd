/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_ALLOW_DENY_H
#define REDFISH_ENUM_ALLOW_DENY_H

#include <stddef.h>

/* AllowDeny.v1_0_0.IPAddressType */
enum rf_ip_address_type {
	IP_ADDRESS_TYPE_INVALID = 0,
	IP_ADDRESS_TYPE_IPV4 = 1,
	IP_ADDRESS_TYPE_IPV6 = 2,
};

static inline const char *rf_ip_address_type_to_str(enum rf_ip_address_type val)
{
	switch (val) {
	case IP_ADDRESS_TYPE_INVALID: return "Invalid";
	case IP_ADDRESS_TYPE_IPV4: return "IPv4";
	case IP_ADDRESS_TYPE_IPV6: return "IPv6";
	default: return NULL;
	}
}

/* AllowDeny.v1_0_0.AllowType */
enum rf_allow_type {
	ALLOW_TYPE_INVALID = 0,
	ALLOW_TYPE_ALLOW = 1,
	ALLOW_TYPE_DENY = 2,
};

static inline const char *rf_allow_type_to_str(enum rf_allow_type val)
{
	switch (val) {
	case ALLOW_TYPE_INVALID: return "Invalid";
	case ALLOW_TYPE_ALLOW: return "Allow";
	case ALLOW_TYPE_DENY: return "Deny";
	default: return NULL;
	}
}

/* AllowDeny.v1_0_0.DataDirection */
enum rf_data_direction {
	DATA_DIRECTION_INVALID = 0,
	DATA_DIRECTION_INGRESS = 1,
	DATA_DIRECTION_EGRESS = 2,
};

static inline const char *rf_data_direction_to_str(enum rf_data_direction val)
{
	switch (val) {
	case DATA_DIRECTION_INVALID: return "Invalid";
	case DATA_DIRECTION_INGRESS: return "Ingress";
	case DATA_DIRECTION_EGRESS: return "Egress";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_ALLOW_DENY_H */

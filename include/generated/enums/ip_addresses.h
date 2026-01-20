/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_IP_ADDRESSES_H
#define REDFISH_ENUM_IP_ADDRESSES_H

#include <stddef.h>

/* IPAddresses.v1_0_0.IPv4AddressOrigin */
enum rf_ipv4_address_origin {
	IPV4_ADDRESS_ORIGIN_INVALID = 0,
	IPV4_ADDRESS_ORIGIN_STATIC = 1,
	IPV4_ADDRESS_ORIGIN_DHCP = 2,
	IPV4_ADDRESS_ORIGIN_BOOTP = 3,
	IPV4_ADDRESS_ORIGIN_IPV4_LINK_LOCAL = 4,
};

static inline const char *rf_ipv4_address_origin_to_str(enum rf_ipv4_address_origin val)
{
	switch (val) {
	case IPV4_ADDRESS_ORIGIN_INVALID: return "Invalid";
	case IPV4_ADDRESS_ORIGIN_STATIC: return "Static";
	case IPV4_ADDRESS_ORIGIN_DHCP: return "DHCP";
	case IPV4_ADDRESS_ORIGIN_BOOTP: return "BOOTP";
	case IPV4_ADDRESS_ORIGIN_IPV4_LINK_LOCAL: return "IPv4LinkLocal";
	default: return NULL;
	}
}

/* IPAddresses.v1_0_0.IPv6AddressOrigin */
enum rf_ipv6_address_origin {
	IPV6_ADDRESS_ORIGIN_INVALID = 0,
	IPV6_ADDRESS_ORIGIN_STATIC = 1,
	IPV6_ADDRESS_ORIGIN_DHCPV6 = 2,
	IPV6_ADDRESS_ORIGIN_LINK_LOCAL = 3,
	IPV6_ADDRESS_ORIGIN_SLAAC = 4,
};

static inline const char *rf_ipv6_address_origin_to_str(enum rf_ipv6_address_origin val)
{
	switch (val) {
	case IPV6_ADDRESS_ORIGIN_INVALID: return "Invalid";
	case IPV6_ADDRESS_ORIGIN_STATIC: return "Static";
	case IPV6_ADDRESS_ORIGIN_DHCPV6: return "DHCPv6";
	case IPV6_ADDRESS_ORIGIN_LINK_LOCAL: return "LinkLocal";
	case IPV6_ADDRESS_ORIGIN_SLAAC: return "SLAAC";
	default: return NULL;
	}
}

/* IPAddresses.v1_0_0.AddressState */
enum rf_address_state {
	ADDRESS_STATE_INVALID = 0,
	ADDRESS_STATE_PREFERRED = 1,
	ADDRESS_STATE_DEPRECATED = 2,
	ADDRESS_STATE_TENTATIVE = 3,
	ADDRESS_STATE_FAILED = 4,
};

static inline const char *rf_address_state_to_str(enum rf_address_state val)
{
	switch (val) {
	case ADDRESS_STATE_INVALID: return "Invalid";
	case ADDRESS_STATE_PREFERRED: return "Preferred";
	case ADDRESS_STATE_DEPRECATED: return "Deprecated";
	case ADDRESS_STATE_TENTATIVE: return "Tentative";
	case ADDRESS_STATE_FAILED: return "Failed";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_IP_ADDRESSES_H */

/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_ETHERNET_INTERFACE_H
#define REDFISH_ENUM_ETHERNET_INTERFACE_H

#include <stddef.h>

/* EthernetInterface.v1_1_0.LinkStatus */
enum rf_link_status {
	LINK_STATUS_INVALID = 0,
	LINK_STATUS_LINK_UP = 1,
	LINK_STATUS_NO_LINK = 2,
	LINK_STATUS_LINK_DOWN = 3,
};

static inline const char *rf_link_status_to_str(enum rf_link_status val)
{
	switch (val) {
	case LINK_STATUS_INVALID: return "Invalid";
	case LINK_STATUS_LINK_UP: return "LinkUp";
	case LINK_STATUS_NO_LINK: return "NoLink";
	case LINK_STATUS_LINK_DOWN: return "LinkDown";
	default: return NULL;
	}
}

/* EthernetInterface.v1_4_0.DHCPv6OperatingMode */
enum rf_dhcpv6_operating_mode {
	DHCPV6_OPERATING_MODE_INVALID = 0,
	DHCPV6_OPERATING_MODE_STATEFUL = 1,
	DHCPV6_OPERATING_MODE_STATELESS = 2,
	DHCPV6_OPERATING_MODE_DISABLED = 3,
	DHCPV6_OPERATING_MODE_ENABLED = 4,
};

static inline const char *rf_dhcpv6_operating_mode_to_str(enum rf_dhcpv6_operating_mode val)
{
	switch (val) {
	case DHCPV6_OPERATING_MODE_INVALID: return "Invalid";
	case DHCPV6_OPERATING_MODE_STATEFUL: return "Stateful";
	case DHCPV6_OPERATING_MODE_STATELESS: return "Stateless";
	case DHCPV6_OPERATING_MODE_DISABLED: return "Disabled";
	case DHCPV6_OPERATING_MODE_ENABLED: return "Enabled";
	default: return NULL;
	}
}

/* EthernetInterface.v1_5_0.DHCPFallback */
enum rf_dhcp_fallback {
	DHCP_FALLBACK_INVALID = 0,
	DHCP_FALLBACK_STATIC = 1,
	DHCP_FALLBACK_AUTO_CONFIG = 2,
	DHCP_FALLBACK_NONE = 3,
};

static inline const char *rf_dhcp_fallback_to_str(enum rf_dhcp_fallback val)
{
	switch (val) {
	case DHCP_FALLBACK_INVALID: return "Invalid";
	case DHCP_FALLBACK_STATIC: return "Static";
	case DHCP_FALLBACK_AUTO_CONFIG: return "AutoConfig";
	case DHCP_FALLBACK_NONE: return "None";
	default: return NULL;
	}
}

/* EthernetInterface.v1_6_0.EthernetDeviceType */
enum rf_ethernet_device_type {
	ETHERNET_DEVICE_TYPE_INVALID = 0,
	ETHERNET_DEVICE_TYPE_PHYSICAL = 1,
	ETHERNET_DEVICE_TYPE_VIRTUAL = 2,
};

static inline const char *rf_ethernet_device_type_to_str(enum rf_ethernet_device_type val)
{
	switch (val) {
	case ETHERNET_DEVICE_TYPE_INVALID: return "Invalid";
	case ETHERNET_DEVICE_TYPE_PHYSICAL: return "Physical";
	case ETHERNET_DEVICE_TYPE_VIRTUAL: return "Virtual";
	default: return NULL;
	}
}

/* EthernetInterface.v1_9_0.TeamMode */
enum rf_team_mode {
	TEAM_MODE_INVALID = 0,
	TEAM_MODE_NONE = 1,
	TEAM_MODE_ROUND_ROBIN = 2,
	TEAM_MODE_ACTIVE_BACKUP = 3,
	TEAM_MODE_XOR = 4,
	TEAM_MODE_BROADCAST = 5,
	TEAM_MODE_IEEE802_3AD = 6,
	TEAM_MODE_ADAPTIVE_TRANSMIT_LOAD_BALANCING = 7,
	TEAM_MODE_ADAPTIVE_LOAD_BALANCING = 8,
};

static inline const char *rf_team_mode_to_str(enum rf_team_mode val)
{
	switch (val) {
	case TEAM_MODE_INVALID: return "Invalid";
	case TEAM_MODE_NONE: return "None";
	case TEAM_MODE_ROUND_ROBIN: return "RoundRobin";
	case TEAM_MODE_ACTIVE_BACKUP: return "ActiveBackup";
	case TEAM_MODE_XOR: return "XOR";
	case TEAM_MODE_BROADCAST: return "Broadcast";
	case TEAM_MODE_IEEE802_3AD: return "IEEE802_3ad";
	case TEAM_MODE_ADAPTIVE_TRANSMIT_LOAD_BALANCING: return "AdaptiveTransmitLoadBalancing";
	case TEAM_MODE_ADAPTIVE_LOAD_BALANCING: return "AdaptiveLoadBalancing";
	default: return NULL;
	}
}

/* EthernetInterface.v1_11_0.RoutingScope */
enum rf_routing_scope {
	ROUTING_SCOPE_INVALID = 0,
	ROUTING_SCOPE_EXTERNAL = 1,
	ROUTING_SCOPE_HOST_ONLY = 2,
	ROUTING_SCOPE_INTERNAL = 3,
	ROUTING_SCOPE_LIMITED = 4,
};

static inline const char *rf_routing_scope_to_str(enum rf_routing_scope val)
{
	switch (val) {
	case ROUTING_SCOPE_INVALID: return "Invalid";
	case ROUTING_SCOPE_EXTERNAL: return "External";
	case ROUTING_SCOPE_HOST_ONLY: return "HostOnly";
	case ROUTING_SCOPE_INTERNAL: return "Internal";
	case ROUTING_SCOPE_LIMITED: return "Limited";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_ETHERNET_INTERFACE_H */

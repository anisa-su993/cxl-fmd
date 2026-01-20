/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_NETWORK_PORT_H
#define REDFISH_ENUM_NETWORK_PORT_H

#include <stddef.h>

/* NetworkPort.v1_0_0.LinkStatus */
enum rf_link_status {
	LINK_STATUS_INVALID = 0,
	LINK_STATUS_DOWN = 1,
	LINK_STATUS_UP = 2,
	LINK_STATUS_STARTING = 3,
	LINK_STATUS_TRAINING = 4,
};

static inline const char *rf_link_status_to_str(enum rf_link_status val)
{
	switch (val) {
	case LINK_STATUS_INVALID: return "Invalid";
	case LINK_STATUS_DOWN: return "Down";
	case LINK_STATUS_UP: return "Up";
	case LINK_STATUS_STARTING: return "Starting";
	case LINK_STATUS_TRAINING: return "Training";
	default: return NULL;
	}
}

/* NetworkPort.v1_0_0.LinkNetworkTechnology */
enum rf_link_network_technology {
	LINK_NETWORK_TECHNOLOGY_INVALID = 0,
	LINK_NETWORK_TECHNOLOGY_ETHERNET = 1,
	LINK_NETWORK_TECHNOLOGY_INFINIBAND = 2,
	LINK_NETWORK_TECHNOLOGY_FIBRE_CHANNEL = 3,
};

static inline const char *rf_link_network_technology_to_str(enum rf_link_network_technology val)
{
	switch (val) {
	case LINK_NETWORK_TECHNOLOGY_INVALID: return "Invalid";
	case LINK_NETWORK_TECHNOLOGY_ETHERNET: return "Ethernet";
	case LINK_NETWORK_TECHNOLOGY_INFINIBAND: return "InfiniBand";
	case LINK_NETWORK_TECHNOLOGY_FIBRE_CHANNEL: return "FibreChannel";
	default: return NULL;
	}
}

/* NetworkPort.v1_0_0.SupportedEthernetCapabilities */
enum rf_supported_ethernet_capabilities {
	SUPPORTED_ETHERNET_CAPABILITIES_INVALID = 0,
	SUPPORTED_ETHERNET_CAPABILITIES_WAKE_ON_LAN = 1,
	SUPPORTED_ETHERNET_CAPABILITIES_EEE = 2,
};

static inline const char *rf_supported_ethernet_capabilities_to_str(enum rf_supported_ethernet_capabilities val)
{
	switch (val) {
	case SUPPORTED_ETHERNET_CAPABILITIES_INVALID: return "Invalid";
	case SUPPORTED_ETHERNET_CAPABILITIES_WAKE_ON_LAN: return "WakeOnLAN";
	case SUPPORTED_ETHERNET_CAPABILITIES_EEE: return "EEE";
	default: return NULL;
	}
}

/* NetworkPort.v1_0_0.FlowControl */
enum rf_flow_control {
	FLOW_CONTROL_INVALID = 0,
	FLOW_CONTROL_NONE = 1,
	FLOW_CONTROL_TX = 2,
	FLOW_CONTROL_RX = 3,
	FLOW_CONTROL_TX_RX = 4,
};

static inline const char *rf_flow_control_to_str(enum rf_flow_control val)
{
	switch (val) {
	case FLOW_CONTROL_INVALID: return "Invalid";
	case FLOW_CONTROL_NONE: return "None";
	case FLOW_CONTROL_TX: return "TX";
	case FLOW_CONTROL_RX: return "RX";
	case FLOW_CONTROL_TX_RX: return "TX_RX";
	default: return NULL;
	}
}

/* NetworkPort.v1_2_0.PortConnectionType */
enum rf_port_connection_type {
	PORT_CONNECTION_TYPE_INVALID = 0,
	PORT_CONNECTION_TYPE_NOT_CONNECTED = 1,
	PORT_CONNECTION_TYPE_N_PORT = 2,
	PORT_CONNECTION_TYPE_POINT_TO_POINT = 3,
	PORT_CONNECTION_TYPE_PRIVATE_LOOP = 4,
	PORT_CONNECTION_TYPE_PUBLIC_LOOP = 5,
	PORT_CONNECTION_TYPE_GENERIC = 6,
	PORT_CONNECTION_TYPE_EXTENDER_FABRIC = 7,
};

static inline const char *rf_port_connection_type_to_str(enum rf_port_connection_type val)
{
	switch (val) {
	case PORT_CONNECTION_TYPE_INVALID: return "Invalid";
	case PORT_CONNECTION_TYPE_NOT_CONNECTED: return "NotConnected";
	case PORT_CONNECTION_TYPE_N_PORT: return "NPort";
	case PORT_CONNECTION_TYPE_POINT_TO_POINT: return "PointToPoint";
	case PORT_CONNECTION_TYPE_PRIVATE_LOOP: return "PrivateLoop";
	case PORT_CONNECTION_TYPE_PUBLIC_LOOP: return "PublicLoop";
	case PORT_CONNECTION_TYPE_GENERIC: return "Generic";
	case PORT_CONNECTION_TYPE_EXTENDER_FABRIC: return "ExtenderFabric";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_NETWORK_PORT_H */

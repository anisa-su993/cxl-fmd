/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_PORT_H
#define REDFISH_ENUM_PORT_H

#include <stddef.h>

/* Port.v1_0_0.PortType */
enum rf_port_type {
	PORT_TYPE_INVALID = 0,
	PORT_TYPE_UPSTREAM_PORT = 1,
	PORT_TYPE_DOWNSTREAM_PORT = 2,
	PORT_TYPE_INTERSWITCH_PORT = 3,
	PORT_TYPE_MANAGEMENT_PORT = 4,
	PORT_TYPE_BIDIRECTIONAL_PORT = 5,
	PORT_TYPE_UNCONFIGURED_PORT = 6,
};

static inline const char *rf_port_type_to_str(enum rf_port_type val)
{
	switch (val) {
	case PORT_TYPE_INVALID: return "Invalid";
	case PORT_TYPE_UPSTREAM_PORT: return "UpstreamPort";
	case PORT_TYPE_DOWNSTREAM_PORT: return "DownstreamPort";
	case PORT_TYPE_INTERSWITCH_PORT: return "InterswitchPort";
	case PORT_TYPE_MANAGEMENT_PORT: return "ManagementPort";
	case PORT_TYPE_BIDIRECTIONAL_PORT: return "BidirectionalPort";
	case PORT_TYPE_UNCONFIGURED_PORT: return "UnconfiguredPort";
	default: return NULL;
	}
}

/* Port.v1_2_0.PortMedium */
enum rf_port_medium {
	PORT_MEDIUM_INVALID = 0,
	PORT_MEDIUM_ELECTRICAL = 1,
	PORT_MEDIUM_OPTICAL = 2,
};

static inline const char *rf_port_medium_to_str(enum rf_port_medium val)
{
	switch (val) {
	case PORT_MEDIUM_INVALID: return "Invalid";
	case PORT_MEDIUM_ELECTRICAL: return "Electrical";
	case PORT_MEDIUM_OPTICAL: return "Optical";
	default: return NULL;
	}
}

/* Port.v1_2_0.LinkState */
enum rf_link_state {
	LINK_STATE_INVALID = 0,
	LINK_STATE_ENABLED = 1,
	LINK_STATE_DISABLED = 2,
};

static inline const char *rf_link_state_to_str(enum rf_link_state val)
{
	switch (val) {
	case LINK_STATE_INVALID: return "Invalid";
	case LINK_STATE_ENABLED: return "Enabled";
	case LINK_STATE_DISABLED: return "Disabled";
	default: return NULL;
	}
}

/* Port.v1_2_0.LinkStatus */
enum rf_link_status {
	LINK_STATUS_INVALID = 0,
	LINK_STATUS_LINK_UP = 1,
	LINK_STATUS_STARTING = 2,
	LINK_STATUS_TRAINING = 3,
	LINK_STATUS_LINK_DOWN = 4,
	LINK_STATUS_NO_LINK = 5,
};

static inline const char *rf_link_status_to_str(enum rf_link_status val)
{
	switch (val) {
	case LINK_STATUS_INVALID: return "Invalid";
	case LINK_STATUS_LINK_UP: return "LinkUp";
	case LINK_STATUS_STARTING: return "Starting";
	case LINK_STATUS_TRAINING: return "Training";
	case LINK_STATUS_LINK_DOWN: return "LinkDown";
	case LINK_STATUS_NO_LINK: return "NoLink";
	default: return NULL;
	}
}

/* Port.v1_2_0.LinkNetworkTechnology */
enum rf_link_network_technology {
	LINK_NETWORK_TECHNOLOGY_INVALID = 0,
	LINK_NETWORK_TECHNOLOGY_ETHERNET = 1,
	LINK_NETWORK_TECHNOLOGY_INFINIBAND = 2,
	LINK_NETWORK_TECHNOLOGY_FIBRE_CHANNEL = 3,
	LINK_NETWORK_TECHNOLOGY_GEN_Z = 4,
	LINK_NETWORK_TECHNOLOGY_PCIE = 5,
};

static inline const char *rf_link_network_technology_to_str(enum rf_link_network_technology val)
{
	switch (val) {
	case LINK_NETWORK_TECHNOLOGY_INVALID: return "Invalid";
	case LINK_NETWORK_TECHNOLOGY_ETHERNET: return "Ethernet";
	case LINK_NETWORK_TECHNOLOGY_INFINIBAND: return "InfiniBand";
	case LINK_NETWORK_TECHNOLOGY_FIBRE_CHANNEL: return "FibreChannel";
	case LINK_NETWORK_TECHNOLOGY_GEN_Z: return "GenZ";
	case LINK_NETWORK_TECHNOLOGY_PCIE: return "PCIe";
	default: return NULL;
	}
}

/* Port.v1_3_0.PortConnectionType */
enum rf_port_connection_type {
	PORT_CONNECTION_TYPE_INVALID = 0,
	PORT_CONNECTION_TYPE_NOT_CONNECTED = 1,
	PORT_CONNECTION_TYPE_N_PORT = 2,
	PORT_CONNECTION_TYPE_POINT_TO_POINT = 3,
	PORT_CONNECTION_TYPE_PRIVATE_LOOP = 4,
	PORT_CONNECTION_TYPE_PUBLIC_LOOP = 5,
	PORT_CONNECTION_TYPE_GENERIC = 6,
	PORT_CONNECTION_TYPE_EXTENDER_FABRIC = 7,
	PORT_CONNECTION_TYPE_F_PORT = 8,
	PORT_CONNECTION_TYPE_E_PORT = 9,
	PORT_CONNECTION_TYPE_TE_PORT = 10,
	PORT_CONNECTION_TYPE_NP_PORT = 11,
	PORT_CONNECTION_TYPE_G_PORT = 12,
	PORT_CONNECTION_TYPE_NL_PORT = 13,
	PORT_CONNECTION_TYPE_FL_PORT = 14,
	PORT_CONNECTION_TYPE_EX_PORT = 15,
	PORT_CONNECTION_TYPE_U_PORT = 16,
	PORT_CONNECTION_TYPE_D_PORT = 17,
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
	case PORT_CONNECTION_TYPE_F_PORT: return "FPort";
	case PORT_CONNECTION_TYPE_E_PORT: return "EPort";
	case PORT_CONNECTION_TYPE_TE_PORT: return "TEPort";
	case PORT_CONNECTION_TYPE_NP_PORT: return "NPPort";
	case PORT_CONNECTION_TYPE_G_PORT: return "GPort";
	case PORT_CONNECTION_TYPE_NL_PORT: return "NLPort";
	case PORT_CONNECTION_TYPE_FL_PORT: return "FLPort";
	case PORT_CONNECTION_TYPE_EX_PORT: return "EXPort";
	case PORT_CONNECTION_TYPE_U_PORT: return "UPort";
	case PORT_CONNECTION_TYPE_D_PORT: return "DPort";
	default: return NULL;
	}
}

/* Port.v1_3_0.SupportedEthernetCapabilities */
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

/* Port.v1_3_0.FlowControl */
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

/* Port.v1_4_0.IEEE802IdSubtype */
enum rf_ieee802_id_subtype {
	IEEE802_ID_SUBTYPE_INVALID = 0,
	IEEE802_ID_SUBTYPE_CHASSIS_COMP = 1,
	IEEE802_ID_SUBTYPE_IF_ALIAS = 2,
	IEEE802_ID_SUBTYPE_PORT_COMP = 3,
	IEEE802_ID_SUBTYPE_MAC_ADDR = 4,
	IEEE802_ID_SUBTYPE_NETWORK_ADDR = 5,
	IEEE802_ID_SUBTYPE_IF_NAME = 6,
	IEEE802_ID_SUBTYPE_AGENT_ID = 7,
	IEEE802_ID_SUBTYPE_LOCAL_ASSIGN = 8,
	IEEE802_ID_SUBTYPE_NOT_TRANSMITTED = 9,
};

static inline const char *rf_ieee802_id_subtype_to_str(enum rf_ieee802_id_subtype val)
{
	switch (val) {
	case IEEE802_ID_SUBTYPE_INVALID: return "Invalid";
	case IEEE802_ID_SUBTYPE_CHASSIS_COMP: return "ChassisComp";
	case IEEE802_ID_SUBTYPE_IF_ALIAS: return "IfAlias";
	case IEEE802_ID_SUBTYPE_PORT_COMP: return "PortComp";
	case IEEE802_ID_SUBTYPE_MAC_ADDR: return "MacAddr";
	case IEEE802_ID_SUBTYPE_NETWORK_ADDR: return "NetworkAddr";
	case IEEE802_ID_SUBTYPE_IF_NAME: return "IfName";
	case IEEE802_ID_SUBTYPE_AGENT_ID: return "AgentId";
	case IEEE802_ID_SUBTYPE_LOCAL_ASSIGN: return "LocalAssign";
	case IEEE802_ID_SUBTYPE_NOT_TRANSMITTED: return "NotTransmitted";
	default: return NULL;
	}
}

/* Port.v1_4_0.SFPType */
enum rf_sfp_type {
	SFP_TYPE_INVALID = 0,
	SFP_TYPE_SFP = 1,
	SFP_TYPE_SFP_PLUS = 2,
	SFP_TYPE_SFP28 = 3,
	SFP_TYPE_C_SFP = 4,
	SFP_TYPE_SFPDD = 5,
	SFP_TYPE_QSFP = 6,
	SFP_TYPE_QSFP_PLUS = 7,
	SFP_TYPE_QSFP14 = 8,
	SFP_TYPE_QSFP28 = 9,
	SFP_TYPE_QSFP56 = 10,
	SFP_TYPE_MINI_SASHD = 11,
	SFP_TYPE_QSFPDD = 12,
	SFP_TYPE_OSFP = 13,
};

static inline const char *rf_sfp_type_to_str(enum rf_sfp_type val)
{
	switch (val) {
	case SFP_TYPE_INVALID: return "Invalid";
	case SFP_TYPE_SFP: return "SFP";
	case SFP_TYPE_SFP_PLUS: return "SFPPlus";
	case SFP_TYPE_SFP28: return "SFP28";
	case SFP_TYPE_C_SFP: return "cSFP";
	case SFP_TYPE_SFPDD: return "SFPDD";
	case SFP_TYPE_QSFP: return "QSFP";
	case SFP_TYPE_QSFP_PLUS: return "QSFPPlus";
	case SFP_TYPE_QSFP14: return "QSFP14";
	case SFP_TYPE_QSFP28: return "QSFP28";
	case SFP_TYPE_QSFP56: return "QSFP56";
	case SFP_TYPE_MINI_SASHD: return "MiniSASHD";
	case SFP_TYPE_QSFPDD: return "QSFPDD";
	case SFP_TYPE_OSFP: return "OSFP";
	default: return NULL;
	}
}

/* Port.v1_4_0.MediumType */
enum rf_medium_type {
	MEDIUM_TYPE_INVALID = 0,
	MEDIUM_TYPE_COPPER = 1,
	MEDIUM_TYPE_FIBER_OPTIC = 2,
};

static inline const char *rf_medium_type_to_str(enum rf_medium_type val)
{
	switch (val) {
	case MEDIUM_TYPE_INVALID: return "Invalid";
	case MEDIUM_TYPE_COPPER: return "Copper";
	case MEDIUM_TYPE_FIBER_OPTIC: return "FiberOptic";
	default: return NULL;
	}
}

/* Port.v1_4_0.FiberConnectionType */
enum rf_fiber_connection_type {
	FIBER_CONNECTION_TYPE_INVALID = 0,
	FIBER_CONNECTION_TYPE_SINGLE_MODE = 1,
	FIBER_CONNECTION_TYPE_MULTI_MODE = 2,
};

static inline const char *rf_fiber_connection_type_to_str(enum rf_fiber_connection_type val)
{
	switch (val) {
	case FIBER_CONNECTION_TYPE_INVALID: return "Invalid";
	case FIBER_CONNECTION_TYPE_SINGLE_MODE: return "SingleMode";
	case FIBER_CONNECTION_TYPE_MULTI_MODE: return "MultiMode";
	default: return NULL;
	}
}

/* Port.v1_8_0.LLDPSystemCapabilities */
enum rf_lldp_system_capabilities {
	LLDP_SYSTEM_CAPABILITIES_INVALID = 0,
	LLDP_SYSTEM_CAPABILITIES_NONE = 1,
	LLDP_SYSTEM_CAPABILITIES_BRIDGE = 2,
	LLDP_SYSTEM_CAPABILITIES_DOCSIS_CABLE_DEVICE = 3,
	LLDP_SYSTEM_CAPABILITIES_OTHER = 4,
	LLDP_SYSTEM_CAPABILITIES_REPEATER = 5,
	LLDP_SYSTEM_CAPABILITIES_ROUTER = 6,
	LLDP_SYSTEM_CAPABILITIES_STATION = 7,
	LLDP_SYSTEM_CAPABILITIES_TELEPHONE = 8,
	LLDP_SYSTEM_CAPABILITIES_WLAN_ACCESS_POINT = 9,
};

static inline const char *rf_lldp_system_capabilities_to_str(enum rf_lldp_system_capabilities val)
{
	switch (val) {
	case LLDP_SYSTEM_CAPABILITIES_INVALID: return "Invalid";
	case LLDP_SYSTEM_CAPABILITIES_NONE: return "None";
	case LLDP_SYSTEM_CAPABILITIES_BRIDGE: return "Bridge";
	case LLDP_SYSTEM_CAPABILITIES_DOCSIS_CABLE_DEVICE: return "DOCSISCableDevice";
	case LLDP_SYSTEM_CAPABILITIES_OTHER: return "Other";
	case LLDP_SYSTEM_CAPABILITIES_REPEATER: return "Repeater";
	case LLDP_SYSTEM_CAPABILITIES_ROUTER: return "Router";
	case LLDP_SYSTEM_CAPABILITIES_STATION: return "Station";
	case LLDP_SYSTEM_CAPABILITIES_TELEPHONE: return "Telephone";
	case LLDP_SYSTEM_CAPABILITIES_WLAN_ACCESS_POINT: return "WLANAccessPoint";
	default: return NULL;
	}
}

/* Port.v1_8_0.CurrentPortConfigurationState */
enum rf_current_port_configuration_state {
	CURRENT_PORT_CONFIGURATION_STATE_INVALID = 0,
	CURRENT_PORT_CONFIGURATION_STATE_DISABLED = 1,
	CURRENT_PORT_CONFIGURATION_STATE_BIND_IN_PROGRESS = 2,
	CURRENT_PORT_CONFIGURATION_STATE_UNBIND_IN_PROGRESS = 3,
	CURRENT_PORT_CONFIGURATION_STATE_DSP = 4,
	CURRENT_PORT_CONFIGURATION_STATE_USP = 5,
	CURRENT_PORT_CONFIGURATION_STATE_RESERVED = 6,
	CURRENT_PORT_CONFIGURATION_STATE_FABRIC_LINK = 7,
};

static inline const char *rf_current_port_configuration_state_to_str(enum rf_current_port_configuration_state val)
{
	switch (val) {
	case CURRENT_PORT_CONFIGURATION_STATE_INVALID: return "Invalid";
	case CURRENT_PORT_CONFIGURATION_STATE_DISABLED: return "Disabled";
	case CURRENT_PORT_CONFIGURATION_STATE_BIND_IN_PROGRESS: return "BindInProgress";
	case CURRENT_PORT_CONFIGURATION_STATE_UNBIND_IN_PROGRESS: return "UnbindInProgress";
	case CURRENT_PORT_CONFIGURATION_STATE_DSP: return "DSP";
	case CURRENT_PORT_CONFIGURATION_STATE_USP: return "USP";
	case CURRENT_PORT_CONFIGURATION_STATE_RESERVED: return "Reserved";
	case CURRENT_PORT_CONFIGURATION_STATE_FABRIC_LINK: return "FabricLink";
	default: return NULL;
	}
}

/* Port.v1_8_0.ConnectedDeviceMode */
enum rf_connected_device_mode {
	CONNECTED_DEVICE_MODE_INVALID = 0,
	CONNECTED_DEVICE_MODE_DISCONNECTED = 1,
	CONNECTED_DEVICE_MODE_RCD = 2,
	CONNECTED_DEVICE_MODE_CXL68_B_FLIT_AND_VH = 3,
	CONNECTED_DEVICE_MODE_STANDARD256_B_FLIT = 4,
	CONNECTED_DEVICE_MODE_CXL_LATENCY_OPTIMIZED256_B_FLIT = 5,
	CONNECTED_DEVICE_MODE_PBR = 6,
};

static inline const char *rf_connected_device_mode_to_str(enum rf_connected_device_mode val)
{
	switch (val) {
	case CONNECTED_DEVICE_MODE_INVALID: return "Invalid";
	case CONNECTED_DEVICE_MODE_DISCONNECTED: return "Disconnected";
	case CONNECTED_DEVICE_MODE_RCD: return "RCD";
	case CONNECTED_DEVICE_MODE_CXL68_B_FLIT_AND_VH: return "CXL68BFlitAndVH";
	case CONNECTED_DEVICE_MODE_STANDARD256_B_FLIT: return "Standard256BFlit";
	case CONNECTED_DEVICE_MODE_CXL_LATENCY_OPTIMIZED256_B_FLIT: return "CXLLatencyOptimized256BFlit";
	case CONNECTED_DEVICE_MODE_PBR: return "PBR";
	default: return NULL;
	}
}

/* Port.v1_8_0.ConnectedDeviceType */
enum rf_connected_device_type {
	CONNECTED_DEVICE_TYPE_INVALID = 0,
	CONNECTED_DEVICE_TYPE_NONE = 1,
	CONNECTED_DEVICE_TYPE_PCIE_DEVICE = 2,
	CONNECTED_DEVICE_TYPE_TYPE1 = 3,
	CONNECTED_DEVICE_TYPE_TYPE2 = 4,
	CONNECTED_DEVICE_TYPE_TYPE3_SLD = 5,
	CONNECTED_DEVICE_TYPE_TYPE3_MLD = 6,
	CONNECTED_DEVICE_TYPE_PBR_COMPONENT = 7,
};

static inline const char *rf_connected_device_type_to_str(enum rf_connected_device_type val)
{
	switch (val) {
	case CONNECTED_DEVICE_TYPE_INVALID: return "Invalid";
	case CONNECTED_DEVICE_TYPE_NONE: return "None";
	case CONNECTED_DEVICE_TYPE_PCIE_DEVICE: return "PCIeDevice";
	case CONNECTED_DEVICE_TYPE_TYPE1: return "Type1";
	case CONNECTED_DEVICE_TYPE_TYPE2: return "Type2";
	case CONNECTED_DEVICE_TYPE_TYPE3_SLD: return "Type3SLD";
	case CONNECTED_DEVICE_TYPE_TYPE3_MLD: return "Type3MLD";
	case CONNECTED_DEVICE_TYPE_PBR_COMPONENT: return "PBRComponent";
	default: return NULL;
	}
}

/* Port.v1_15_0.HostDeviceType */
enum rf_host_device_type {
	HOST_DEVICE_TYPE_INVALID = 0,
	HOST_DEVICE_TYPE_NONE = 1,
	HOST_DEVICE_TYPE_SYSTEM = 2,
	HOST_DEVICE_TYPE_MANAGER = 3,
};

static inline const char *rf_host_device_type_to_str(enum rf_host_device_type val)
{
	switch (val) {
	case HOST_DEVICE_TYPE_INVALID: return "Invalid";
	case HOST_DEVICE_TYPE_NONE: return "None";
	case HOST_DEVICE_TYPE_SYSTEM: return "System";
	case HOST_DEVICE_TYPE_MANAGER: return "Manager";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_PORT_H */

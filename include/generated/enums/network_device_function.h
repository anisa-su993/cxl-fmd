/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_NETWORK_DEVICE_FUNCTION_H
#define REDFISH_ENUM_NETWORK_DEVICE_FUNCTION_H

#include <stddef.h>

/* NetworkDeviceFunction.v1_0_0.NetworkDeviceTechnology */
enum rf_network_device_technology {
	NETWORK_DEVICE_TECHNOLOGY_INVALID = 0,
	NETWORK_DEVICE_TECHNOLOGY_DISABLED = 1,
	NETWORK_DEVICE_TECHNOLOGY_ETHERNET = 2,
	NETWORK_DEVICE_TECHNOLOGY_FIBRE_CHANNEL = 3,
	NETWORK_DEVICE_TECHNOLOGY_ISCSI = 4,
	NETWORK_DEVICE_TECHNOLOGY_FIBRE_CHANNEL_OVER_ETHERNET = 5,
	NETWORK_DEVICE_TECHNOLOGY_INFINIBAND = 6,
};

static inline const char *rf_network_device_technology_to_str(enum rf_network_device_technology val)
{
	switch (val) {
	case NETWORK_DEVICE_TECHNOLOGY_INVALID: return "Invalid";
	case NETWORK_DEVICE_TECHNOLOGY_DISABLED: return "Disabled";
	case NETWORK_DEVICE_TECHNOLOGY_ETHERNET: return "Ethernet";
	case NETWORK_DEVICE_TECHNOLOGY_FIBRE_CHANNEL: return "FibreChannel";
	case NETWORK_DEVICE_TECHNOLOGY_ISCSI: return "iSCSI";
	case NETWORK_DEVICE_TECHNOLOGY_FIBRE_CHANNEL_OVER_ETHERNET: return "FibreChannelOverEthernet";
	case NETWORK_DEVICE_TECHNOLOGY_INFINIBAND: return "InfiniBand";
	default: return NULL;
	}
}

/* NetworkDeviceFunction.v1_0_0.IPAddressType */
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

/* NetworkDeviceFunction.v1_0_0.AuthenticationMethod */
enum rf_authentication_method {
	AUTHENTICATION_METHOD_INVALID = 0,
	AUTHENTICATION_METHOD_NONE = 1,
	AUTHENTICATION_METHOD_CHAP = 2,
	AUTHENTICATION_METHOD_MUTUAL_CHAP = 3,
};

static inline const char *rf_authentication_method_to_str(enum rf_authentication_method val)
{
	switch (val) {
	case AUTHENTICATION_METHOD_INVALID: return "Invalid";
	case AUTHENTICATION_METHOD_NONE: return "None";
	case AUTHENTICATION_METHOD_CHAP: return "CHAP";
	case AUTHENTICATION_METHOD_MUTUAL_CHAP: return "MutualCHAP";
	default: return NULL;
	}
}

/* NetworkDeviceFunction.v1_0_0.WWNSource */
enum rf_wwn_source {
	WWN_SOURCE_INVALID = 0,
	WWN_SOURCE_CONFIGURED_LOCALLY = 1,
	WWN_SOURCE_PROVIDED_BY_FABRIC = 2,
};

static inline const char *rf_wwn_source_to_str(enum rf_wwn_source val)
{
	switch (val) {
	case WWN_SOURCE_INVALID: return "Invalid";
	case WWN_SOURCE_CONFIGURED_LOCALLY: return "ConfiguredLocally";
	case WWN_SOURCE_PROVIDED_BY_FABRIC: return "ProvidedByFabric";
	default: return NULL;
	}
}

/* NetworkDeviceFunction.v1_0_0.BootMode */
enum rf_boot_mode {
	BOOT_MODE_INVALID = 0,
	BOOT_MODE_DISABLED = 1,
	BOOT_MODE_PXE = 2,
	BOOT_MODE_ISCSI = 3,
	BOOT_MODE_FIBRE_CHANNEL = 4,
	BOOT_MODE_FIBRE_CHANNEL_OVER_ETHERNET = 5,
	BOOT_MODE_HTTP = 6,
};

static inline const char *rf_boot_mode_to_str(enum rf_boot_mode val)
{
	switch (val) {
	case BOOT_MODE_INVALID: return "Invalid";
	case BOOT_MODE_DISABLED: return "Disabled";
	case BOOT_MODE_PXE: return "PXE";
	case BOOT_MODE_ISCSI: return "iSCSI";
	case BOOT_MODE_FIBRE_CHANNEL: return "FibreChannel";
	case BOOT_MODE_FIBRE_CHANNEL_OVER_ETHERNET: return "FibreChannelOverEthernet";
	case BOOT_MODE_HTTP: return "HTTP";
	default: return NULL;
	}
}

/* NetworkDeviceFunction.v1_7_0.DataDirection */
enum rf_data_direction {
	DATA_DIRECTION_INVALID = 0,
	DATA_DIRECTION_NONE = 1,
	DATA_DIRECTION_INGRESS = 2,
	DATA_DIRECTION_EGRESS = 3,
};

static inline const char *rf_data_direction_to_str(enum rf_data_direction val)
{
	switch (val) {
	case DATA_DIRECTION_INVALID: return "Invalid";
	case DATA_DIRECTION_NONE: return "None";
	case DATA_DIRECTION_INGRESS: return "Ingress";
	case DATA_DIRECTION_EGRESS: return "Egress";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_NETWORK_DEVICE_FUNCTION_H */

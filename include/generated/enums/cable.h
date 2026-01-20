/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_CABLE_H
#define REDFISH_ENUM_CABLE_H

#include <stddef.h>

/* Cable.v1_0_0.CableClass */
enum rf_cable_class {
	CABLE_CLASS_INVALID = 0,
	CABLE_CLASS_POWER = 1,
	CABLE_CLASS_NETWORK = 2,
	CABLE_CLASS_STORAGE = 3,
	CABLE_CLASS_FAN = 4,
	CABLE_CLASS_PCIE = 5,
	CABLE_CLASS_USB = 6,
	CABLE_CLASS_VIDEO = 7,
	CABLE_CLASS_FABRIC = 8,
	CABLE_CLASS_SERIAL = 9,
	CABLE_CLASS_GENERAL = 10,
};

static inline const char *rf_cable_class_to_str(enum rf_cable_class val)
{
	switch (val) {
	case CABLE_CLASS_INVALID: return "Invalid";
	case CABLE_CLASS_POWER: return "Power";
	case CABLE_CLASS_NETWORK: return "Network";
	case CABLE_CLASS_STORAGE: return "Storage";
	case CABLE_CLASS_FAN: return "Fan";
	case CABLE_CLASS_PCIE: return "PCIe";
	case CABLE_CLASS_USB: return "USB";
	case CABLE_CLASS_VIDEO: return "Video";
	case CABLE_CLASS_FABRIC: return "Fabric";
	case CABLE_CLASS_SERIAL: return "Serial";
	case CABLE_CLASS_GENERAL: return "General";
	default: return NULL;
	}
}

/* Cable.v1_0_0.ConnectorType */
enum rf_connector_type {
	CONNECTOR_TYPE_INVALID = 0,
	CONNECTOR_TYPE_AC_POWER = 1,
	CONNECTOR_TYPE_DB9 = 2,
	CONNECTOR_TYPE_DC_POWER = 3,
	CONNECTOR_TYPE_DISPLAY_PORT = 4,
	CONNECTOR_TYPE_HDMI = 5,
	CONNECTOR_TYPE_ICI = 6,
	CONNECTOR_TYPE_IPASS = 7,
	CONNECTOR_TYPE_PCIE = 8,
	CONNECTOR_TYPE_PROPRIETARY = 9,
	CONNECTOR_TYPE_RJ45 = 10,
	CONNECTOR_TYPE_SATA = 11,
	CONNECTOR_TYPE_SCSI = 12,
	CONNECTOR_TYPE_SLIM_SAS = 13,
	CONNECTOR_TYPE_SFP = 14,
	CONNECTOR_TYPE_SFP_PLUS = 15,
	CONNECTOR_TYPE_USBA = 16,
	CONNECTOR_TYPE_USBC = 17,
	CONNECTOR_TYPE_QSFP = 18,
	CONNECTOR_TYPE_CDFP = 19,
	CONNECTOR_TYPE_OSFP = 20,
};

static inline const char *rf_connector_type_to_str(enum rf_connector_type val)
{
	switch (val) {
	case CONNECTOR_TYPE_INVALID: return "Invalid";
	case CONNECTOR_TYPE_AC_POWER: return "ACPower";
	case CONNECTOR_TYPE_DB9: return "DB9";
	case CONNECTOR_TYPE_DC_POWER: return "DCPower";
	case CONNECTOR_TYPE_DISPLAY_PORT: return "DisplayPort";
	case CONNECTOR_TYPE_HDMI: return "HDMI";
	case CONNECTOR_TYPE_ICI: return "ICI";
	case CONNECTOR_TYPE_IPASS: return "IPASS";
	case CONNECTOR_TYPE_PCIE: return "PCIe";
	case CONNECTOR_TYPE_PROPRIETARY: return "Proprietary";
	case CONNECTOR_TYPE_RJ45: return "RJ45";
	case CONNECTOR_TYPE_SATA: return "SATA";
	case CONNECTOR_TYPE_SCSI: return "SCSI";
	case CONNECTOR_TYPE_SLIM_SAS: return "SlimSAS";
	case CONNECTOR_TYPE_SFP: return "SFP";
	case CONNECTOR_TYPE_SFP_PLUS: return "SFPPlus";
	case CONNECTOR_TYPE_USBA: return "USBA";
	case CONNECTOR_TYPE_USBC: return "USBC";
	case CONNECTOR_TYPE_QSFP: return "QSFP";
	case CONNECTOR_TYPE_CDFP: return "CDFP";
	case CONNECTOR_TYPE_OSFP: return "OSFP";
	default: return NULL;
	}
}

/* Cable.v1_0_0.CableStatus */
enum rf_cable_status {
	CABLE_STATUS_INVALID = 0,
	CABLE_STATUS_NORMAL = 1,
	CABLE_STATUS_DEGRADED = 2,
	CABLE_STATUS_FAILED = 3,
	CABLE_STATUS_TESTING = 4,
	CABLE_STATUS_DISABLED = 5,
	CABLE_STATUS_SET_BY_SERVICE = 6,
};

static inline const char *rf_cable_status_to_str(enum rf_cable_status val)
{
	switch (val) {
	case CABLE_STATUS_INVALID: return "Invalid";
	case CABLE_STATUS_NORMAL: return "Normal";
	case CABLE_STATUS_DEGRADED: return "Degraded";
	case CABLE_STATUS_FAILED: return "Failed";
	case CABLE_STATUS_TESTING: return "Testing";
	case CABLE_STATUS_DISABLED: return "Disabled";
	case CABLE_STATUS_SET_BY_SERVICE: return "SetByService";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_CABLE_H */

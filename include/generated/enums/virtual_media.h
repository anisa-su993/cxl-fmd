/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_VIRTUAL_MEDIA_H
#define REDFISH_ENUM_VIRTUAL_MEDIA_H

#include <stddef.h>

/* VirtualMedia.v1_0_0.MediaType */
enum rf_media_type {
	MEDIA_TYPE_INVALID = 0,
	MEDIA_TYPE_CD = 1,
	MEDIA_TYPE_FLOPPY = 2,
	MEDIA_TYPE_USB_STICK = 3,
	MEDIA_TYPE_DVD = 4,
};

static inline const char *rf_media_type_to_str(enum rf_media_type val)
{
	switch (val) {
	case MEDIA_TYPE_INVALID: return "Invalid";
	case MEDIA_TYPE_CD: return "CD";
	case MEDIA_TYPE_FLOPPY: return "Floppy";
	case MEDIA_TYPE_USB_STICK: return "USBStick";
	case MEDIA_TYPE_DVD: return "DVD";
	default: return NULL;
	}
}

/* VirtualMedia.v1_0_0.ConnectedVia */
enum rf_connected_via {
	CONNECTED_VIA_INVALID = 0,
	CONNECTED_VIA_NOT_CONNECTED = 1,
	CONNECTED_VIA_URI = 2,
	CONNECTED_VIA_APPLET = 3,
	CONNECTED_VIA_OEM = 4,
};

static inline const char *rf_connected_via_to_str(enum rf_connected_via val)
{
	switch (val) {
	case CONNECTED_VIA_INVALID: return "Invalid";
	case CONNECTED_VIA_NOT_CONNECTED: return "NotConnected";
	case CONNECTED_VIA_URI: return "URI";
	case CONNECTED_VIA_APPLET: return "Applet";
	case CONNECTED_VIA_OEM: return "Oem";
	default: return NULL;
	}
}

/* VirtualMedia.v1_3_0.TransferProtocolType */
enum rf_transfer_protocol_type {
	TRANSFER_PROTOCOL_TYPE_INVALID = 0,
	TRANSFER_PROTOCOL_TYPE_CIFS = 1,
	TRANSFER_PROTOCOL_TYPE_FTP = 2,
	TRANSFER_PROTOCOL_TYPE_SFTP = 3,
	TRANSFER_PROTOCOL_TYPE_HTTP = 4,
	TRANSFER_PROTOCOL_TYPE_HTTPS = 5,
	TRANSFER_PROTOCOL_TYPE_NFS = 6,
	TRANSFER_PROTOCOL_TYPE_SCP = 7,
	TRANSFER_PROTOCOL_TYPE_TFTP = 8,
	TRANSFER_PROTOCOL_TYPE_OEM = 9,
};

static inline const char *rf_transfer_protocol_type_to_str(enum rf_transfer_protocol_type val)
{
	switch (val) {
	case TRANSFER_PROTOCOL_TYPE_INVALID: return "Invalid";
	case TRANSFER_PROTOCOL_TYPE_CIFS: return "CIFS";
	case TRANSFER_PROTOCOL_TYPE_FTP: return "FTP";
	case TRANSFER_PROTOCOL_TYPE_SFTP: return "SFTP";
	case TRANSFER_PROTOCOL_TYPE_HTTP: return "HTTP";
	case TRANSFER_PROTOCOL_TYPE_HTTPS: return "HTTPS";
	case TRANSFER_PROTOCOL_TYPE_NFS: return "NFS";
	case TRANSFER_PROTOCOL_TYPE_SCP: return "SCP";
	case TRANSFER_PROTOCOL_TYPE_TFTP: return "TFTP";
	case TRANSFER_PROTOCOL_TYPE_OEM: return "OEM";
	default: return NULL;
	}
}

/* VirtualMedia.v1_3_0.TransferMethod */
enum rf_transfer_method {
	TRANSFER_METHOD_INVALID = 0,
	TRANSFER_METHOD_STREAM = 1,
	TRANSFER_METHOD_UPLOAD = 2,
};

static inline const char *rf_transfer_method_to_str(enum rf_transfer_method val)
{
	switch (val) {
	case TRANSFER_METHOD_INVALID: return "Invalid";
	case TRANSFER_METHOD_STREAM: return "Stream";
	case TRANSFER_METHOD_UPLOAD: return "Upload";
	default: return NULL;
	}
}

/* VirtualMedia.v1_6_0.EjectPolicy */
enum rf_eject_policy {
	EJECT_POLICY_INVALID = 0,
	EJECT_POLICY_ON_POWER_OFF = 1,
	EJECT_POLICY_SESSION = 2,
	EJECT_POLICY_TIMED = 3,
	EJECT_POLICY_AFTER_USE = 4,
	EJECT_POLICY_PERSISTENT = 5,
};

static inline const char *rf_eject_policy_to_str(enum rf_eject_policy val)
{
	switch (val) {
	case EJECT_POLICY_INVALID: return "Invalid";
	case EJECT_POLICY_ON_POWER_OFF: return "OnPowerOff";
	case EJECT_POLICY_SESSION: return "Session";
	case EJECT_POLICY_TIMED: return "Timed";
	case EJECT_POLICY_AFTER_USE: return "AfterUse";
	case EJECT_POLICY_PERSISTENT: return "Persistent";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_VIRTUAL_MEDIA_H */

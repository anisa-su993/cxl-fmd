/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_LICENSE_SERVICE_H
#define REDFISH_ENUM_LICENSE_SERVICE_H

#include <stddef.h>

/* LicenseService.v1_0_0.TransferProtocolType */
enum rf_transfer_protocol_type {
	TRANSFER_PROTOCOL_TYPE_INVALID = 0,
	TRANSFER_PROTOCOL_TYPE_CIFS = 1,
	TRANSFER_PROTOCOL_TYPE_FTP = 2,
	TRANSFER_PROTOCOL_TYPE_SFTP = 3,
	TRANSFER_PROTOCOL_TYPE_HTTP = 4,
	TRANSFER_PROTOCOL_TYPE_HTTPS = 5,
	TRANSFER_PROTOCOL_TYPE_SCP = 6,
	TRANSFER_PROTOCOL_TYPE_TFTP = 7,
	TRANSFER_PROTOCOL_TYPE_OEM = 8,
	TRANSFER_PROTOCOL_TYPE_NFS = 9,
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
	case TRANSFER_PROTOCOL_TYPE_SCP: return "SCP";
	case TRANSFER_PROTOCOL_TYPE_TFTP: return "TFTP";
	case TRANSFER_PROTOCOL_TYPE_OEM: return "OEM";
	case TRANSFER_PROTOCOL_TYPE_NFS: return "NFS";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_LICENSE_SERVICE_H */

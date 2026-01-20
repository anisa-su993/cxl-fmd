/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_UPDATE_SERVICE_H
#define REDFISH_ENUM_UPDATE_SERVICE_H

#include <stddef.h>

/* UpdateService.v1_0_0.TransferProtocolType */
enum rf_transfer_protocol_type {
	TRANSFER_PROTOCOL_TYPE_INVALID = 0,
	TRANSFER_PROTOCOL_TYPE_CIFS = 1,
	TRANSFER_PROTOCOL_TYPE_FTP = 2,
	TRANSFER_PROTOCOL_TYPE_SFTP = 3,
	TRANSFER_PROTOCOL_TYPE_HTTP = 4,
	TRANSFER_PROTOCOL_TYPE_HTTPS = 5,
	TRANSFER_PROTOCOL_TYPE_NSF = 6,
	TRANSFER_PROTOCOL_TYPE_SCP = 7,
	TRANSFER_PROTOCOL_TYPE_TFTP = 8,
	TRANSFER_PROTOCOL_TYPE_OEM = 9,
	TRANSFER_PROTOCOL_TYPE_NFS = 10,
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
	case TRANSFER_PROTOCOL_TYPE_NSF: return "NSF";
	case TRANSFER_PROTOCOL_TYPE_SCP: return "SCP";
	case TRANSFER_PROTOCOL_TYPE_TFTP: return "TFTP";
	case TRANSFER_PROTOCOL_TYPE_OEM: return "OEM";
	case TRANSFER_PROTOCOL_TYPE_NFS: return "NFS";
	default: return NULL;
	}
}

/* UpdateService.v1_4_0.ApplyTime */
enum rf_apply_time {
	APPLY_TIME_INVALID = 0,
	APPLY_TIME_IMMEDIATE = 1,
	APPLY_TIME_ON_RESET = 2,
	APPLY_TIME_AT_MAINTENANCE_WINDOW_START = 3,
	APPLY_TIME_IN_MAINTENANCE_WINDOW_ON_RESET = 4,
	APPLY_TIME_ON_START_UPDATE_REQUEST = 5,
	APPLY_TIME_ON_TARGET_RESET = 6,
};

static inline const char *rf_apply_time_to_str(enum rf_apply_time val)
{
	switch (val) {
	case APPLY_TIME_INVALID: return "Invalid";
	case APPLY_TIME_IMMEDIATE: return "Immediate";
	case APPLY_TIME_ON_RESET: return "OnReset";
	case APPLY_TIME_AT_MAINTENANCE_WINDOW_START: return "AtMaintenanceWindowStart";
	case APPLY_TIME_IN_MAINTENANCE_WINDOW_ON_RESET: return "InMaintenanceWindowOnReset";
	case APPLY_TIME_ON_START_UPDATE_REQUEST: return "OnStartUpdateRequest";
	case APPLY_TIME_ON_TARGET_RESET: return "OnTargetReset";
	default: return NULL;
	}
}

/* UpdateService.v1_13_0.SupportedUpdateImageFormatType */
enum rf_supported_update_image_format_type {
	SUPPORTED_UPDATE_IMAGE_FORMAT_TYPE_INVALID = 0,
	SUPPORTED_UPDATE_IMAGE_FORMAT_TYPE_PLD_MV1_0 = 1,
	SUPPORTED_UPDATE_IMAGE_FORMAT_TYPE_PLD_MV1_1 = 2,
	SUPPORTED_UPDATE_IMAGE_FORMAT_TYPE_PLD_MV1_2 = 3,
	SUPPORTED_UPDATE_IMAGE_FORMAT_TYPE_PLD_MV1_3 = 4,
	SUPPORTED_UPDATE_IMAGE_FORMAT_TYPE_UEFI_CAPSULE = 5,
	SUPPORTED_UPDATE_IMAGE_FORMAT_TYPE_VENDOR_DEFINED = 6,
};

static inline const char *rf_supported_update_image_format_type_to_str(enum rf_supported_update_image_format_type val)
{
	switch (val) {
	case SUPPORTED_UPDATE_IMAGE_FORMAT_TYPE_INVALID: return "Invalid";
	case SUPPORTED_UPDATE_IMAGE_FORMAT_TYPE_PLD_MV1_0: return "PLDMv1_0";
	case SUPPORTED_UPDATE_IMAGE_FORMAT_TYPE_PLD_MV1_1: return "PLDMv1_1";
	case SUPPORTED_UPDATE_IMAGE_FORMAT_TYPE_PLD_MV1_2: return "PLDMv1_2";
	case SUPPORTED_UPDATE_IMAGE_FORMAT_TYPE_PLD_MV1_3: return "PLDMv1_3";
	case SUPPORTED_UPDATE_IMAGE_FORMAT_TYPE_UEFI_CAPSULE: return "UEFICapsule";
	case SUPPORTED_UPDATE_IMAGE_FORMAT_TYPE_VENDOR_DEFINED: return "VendorDefined";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_UPDATE_SERVICE_H */

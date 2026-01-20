/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_STORAGE_CONTROLLER_H
#define REDFISH_ENUM_STORAGE_CONTROLLER_H

#include <stddef.h>

/* StorageController.v1_0_0.NVMeControllerType */
enum rf_nvme_controller_type {
	NVME_CONTROLLER_TYPE_INVALID = 0,
	NVME_CONTROLLER_TYPE_ADMIN = 1,
	NVME_CONTROLLER_TYPE_DISCOVERY = 2,
	NVME_CONTROLLER_TYPE_IO = 3,
};

static inline const char *rf_nvme_controller_type_to_str(enum rf_nvme_controller_type val)
{
	switch (val) {
	case NVME_CONTROLLER_TYPE_INVALID: return "Invalid";
	case NVME_CONTROLLER_TYPE_ADMIN: return "Admin";
	case NVME_CONTROLLER_TYPE_DISCOVERY: return "Discovery";
	case NVME_CONTROLLER_TYPE_IO: return "IO";
	default: return NULL;
	}
}

/* StorageController.v1_0_0.ANAAccessState */
enum rf_ana_access_state {
	ANA_ACCESS_STATE_INVALID = 0,
	ANA_ACCESS_STATE_OPTIMIZED = 1,
	ANA_ACCESS_STATE_NON_OPTIMIZED = 2,
	ANA_ACCESS_STATE_INACCESSIBLE = 3,
	ANA_ACCESS_STATE_PERSISTENT_LOSS = 4,
};

static inline const char *rf_ana_access_state_to_str(enum rf_ana_access_state val)
{
	switch (val) {
	case ANA_ACCESS_STATE_INVALID: return "Invalid";
	case ANA_ACCESS_STATE_OPTIMIZED: return "Optimized";
	case ANA_ACCESS_STATE_NON_OPTIMIZED: return "NonOptimized";
	case ANA_ACCESS_STATE_INACCESSIBLE: return "Inaccessible";
	case ANA_ACCESS_STATE_PERSISTENT_LOSS: return "PersistentLoss";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_STORAGE_CONTROLLER_H */

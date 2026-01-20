/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_ENDPOINT_H
#define REDFISH_ENUM_ENDPOINT_H

#include <stddef.h>

/* Endpoint.v1_0_0.EntityType */
enum rf_entity_type {
	ENTITY_TYPE_INVALID = 0,
	ENTITY_TYPE_STORAGE_INITIATOR = 1,
	ENTITY_TYPE_ROOT_COMPLEX = 2,
	ENTITY_TYPE_NETWORK_CONTROLLER = 3,
	ENTITY_TYPE_DRIVE = 4,
	ENTITY_TYPE_STORAGE_EXPANDER = 5,
	ENTITY_TYPE_DISPLAY_CONTROLLER = 6,
	ENTITY_TYPE_BRIDGE = 7,
	ENTITY_TYPE_PROCESSOR = 8,
	ENTITY_TYPE_VOLUME = 9,
	ENTITY_TYPE_ACCELERATION_FUNCTION = 10,
	ENTITY_TYPE_MEDIA_CONTROLLER = 11,
	ENTITY_TYPE_MEMORY_CHUNK = 12,
	ENTITY_TYPE_SWITCH = 13,
	ENTITY_TYPE_FABRIC_BRIDGE = 14,
	ENTITY_TYPE_MANAGER = 15,
	ENTITY_TYPE_STORAGE_SUBSYSTEM = 16,
	ENTITY_TYPE_MEMORY = 17,
	ENTITY_TYPE_CXL_DEVICE = 18,
};

static inline const char *rf_entity_type_to_str(enum rf_entity_type val)
{
	switch (val) {
	case ENTITY_TYPE_INVALID: return "Invalid";
	case ENTITY_TYPE_STORAGE_INITIATOR: return "StorageInitiator";
	case ENTITY_TYPE_ROOT_COMPLEX: return "RootComplex";
	case ENTITY_TYPE_NETWORK_CONTROLLER: return "NetworkController";
	case ENTITY_TYPE_DRIVE: return "Drive";
	case ENTITY_TYPE_STORAGE_EXPANDER: return "StorageExpander";
	case ENTITY_TYPE_DISPLAY_CONTROLLER: return "DisplayController";
	case ENTITY_TYPE_BRIDGE: return "Bridge";
	case ENTITY_TYPE_PROCESSOR: return "Processor";
	case ENTITY_TYPE_VOLUME: return "Volume";
	case ENTITY_TYPE_ACCELERATION_FUNCTION: return "AccelerationFunction";
	case ENTITY_TYPE_MEDIA_CONTROLLER: return "MediaController";
	case ENTITY_TYPE_MEMORY_CHUNK: return "MemoryChunk";
	case ENTITY_TYPE_SWITCH: return "Switch";
	case ENTITY_TYPE_FABRIC_BRIDGE: return "FabricBridge";
	case ENTITY_TYPE_MANAGER: return "Manager";
	case ENTITY_TYPE_STORAGE_SUBSYSTEM: return "StorageSubsystem";
	case ENTITY_TYPE_MEMORY: return "Memory";
	case ENTITY_TYPE_CXL_DEVICE: return "CXLDevice";
	default: return NULL;
	}
}

/* Endpoint.v1_0_0.EntityRole */
enum rf_entity_role {
	ENTITY_ROLE_INVALID = 0,
	ENTITY_ROLE_INITIATOR = 1,
	ENTITY_ROLE_TARGET = 2,
	ENTITY_ROLE_BOTH = 3,
};

static inline const char *rf_entity_role_to_str(enum rf_entity_role val)
{
	switch (val) {
	case ENTITY_ROLE_INVALID: return "Invalid";
	case ENTITY_ROLE_INITIATOR: return "Initiator";
	case ENTITY_ROLE_TARGET: return "Target";
	case ENTITY_ROLE_BOTH: return "Both";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_ENDPOINT_H */

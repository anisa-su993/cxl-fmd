/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_RESOURCE_BLOCK_H
#define REDFISH_ENUM_RESOURCE_BLOCK_H

#include <stddef.h>

/* ResourceBlock.v1_0_0.ResourceBlockType */
enum rf_resource_block_type {
	RESOURCE_BLOCK_TYPE_INVALID = 0,
	RESOURCE_BLOCK_TYPE_COMPUTE = 1,
	RESOURCE_BLOCK_TYPE_PROCESSOR = 2,
	RESOURCE_BLOCK_TYPE_MEMORY = 3,
	RESOURCE_BLOCK_TYPE_NETWORK = 4,
	RESOURCE_BLOCK_TYPE_STORAGE = 5,
	RESOURCE_BLOCK_TYPE_COMPUTER_SYSTEM = 6,
	RESOURCE_BLOCK_TYPE_EXPANSION = 7,
	RESOURCE_BLOCK_TYPE_INDEPENDENT_RESOURCE = 8,
};

static inline const char *rf_resource_block_type_to_str(enum rf_resource_block_type val)
{
	switch (val) {
	case RESOURCE_BLOCK_TYPE_INVALID: return "Invalid";
	case RESOURCE_BLOCK_TYPE_COMPUTE: return "Compute";
	case RESOURCE_BLOCK_TYPE_PROCESSOR: return "Processor";
	case RESOURCE_BLOCK_TYPE_MEMORY: return "Memory";
	case RESOURCE_BLOCK_TYPE_NETWORK: return "Network";
	case RESOURCE_BLOCK_TYPE_STORAGE: return "Storage";
	case RESOURCE_BLOCK_TYPE_COMPUTER_SYSTEM: return "ComputerSystem";
	case RESOURCE_BLOCK_TYPE_EXPANSION: return "Expansion";
	case RESOURCE_BLOCK_TYPE_INDEPENDENT_RESOURCE: return "IndependentResource";
	default: return NULL;
	}
}

/* ResourceBlock.v1_0_0.CompositionState */
enum rf_composition_state {
	COMPOSITION_STATE_INVALID = 0,
	COMPOSITION_STATE_COMPOSING = 1,
	COMPOSITION_STATE_COMPOSED_AND_AVAILABLE = 2,
	COMPOSITION_STATE_COMPOSED = 3,
	COMPOSITION_STATE_UNUSED = 4,
	COMPOSITION_STATE_FAILED = 5,
	COMPOSITION_STATE_UNAVAILABLE = 6,
};

static inline const char *rf_composition_state_to_str(enum rf_composition_state val)
{
	switch (val) {
	case COMPOSITION_STATE_INVALID: return "Invalid";
	case COMPOSITION_STATE_COMPOSING: return "Composing";
	case COMPOSITION_STATE_COMPOSED_AND_AVAILABLE: return "ComposedAndAvailable";
	case COMPOSITION_STATE_COMPOSED: return "Composed";
	case COMPOSITION_STATE_UNUSED: return "Unused";
	case COMPOSITION_STATE_FAILED: return "Failed";
	case COMPOSITION_STATE_UNAVAILABLE: return "Unavailable";
	default: return NULL;
	}
}

/* ResourceBlock.v1_4_0.PoolType */
enum rf_pool_type {
	POOL_TYPE_INVALID = 0,
	POOL_TYPE_FREE = 1,
	POOL_TYPE_ACTIVE = 2,
	POOL_TYPE_UNASSIGNED = 3,
};

static inline const char *rf_pool_type_to_str(enum rf_pool_type val)
{
	switch (val) {
	case POOL_TYPE_INVALID: return "Invalid";
	case POOL_TYPE_FREE: return "Free";
	case POOL_TYPE_ACTIVE: return "Active";
	case POOL_TYPE_UNASSIGNED: return "Unassigned";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_RESOURCE_BLOCK_H */

/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_COLLECTION_CAPABILITIES_H
#define REDFISH_ENUM_COLLECTION_CAPABILITIES_H

#include <stddef.h>

/* CollectionCapabilities.v1_0_0.UseCase */
enum rf_use_case {
	USE_CASE_INVALID = 0,
	USE_CASE_COMPUTER_SYSTEM_COMPOSITION = 1,
	USE_CASE_COMPUTER_SYSTEM_CONSTRAINED_COMPOSITION = 2,
	USE_CASE_VOLUME_CREATION = 3,
	USE_CASE_RESOURCE_BLOCK_COMPOSITION = 4,
	USE_CASE_RESOURCE_BLOCK_CONSTRAINED_COMPOSITION = 5,
	USE_CASE_REGISTER_RESOURCE_BLOCK = 6,
};

static inline const char *rf_use_case_to_str(enum rf_use_case val)
{
	switch (val) {
	case USE_CASE_INVALID: return "Invalid";
	case USE_CASE_COMPUTER_SYSTEM_COMPOSITION: return "ComputerSystemComposition";
	case USE_CASE_COMPUTER_SYSTEM_CONSTRAINED_COMPOSITION: return "ComputerSystemConstrainedComposition";
	case USE_CASE_VOLUME_CREATION: return "VolumeCreation";
	case USE_CASE_RESOURCE_BLOCK_COMPOSITION: return "ResourceBlockComposition";
	case USE_CASE_RESOURCE_BLOCK_CONSTRAINED_COMPOSITION: return "ResourceBlockConstrainedComposition";
	case USE_CASE_REGISTER_RESOURCE_BLOCK: return "RegisterResourceBlock";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_COLLECTION_CAPABILITIES_H */

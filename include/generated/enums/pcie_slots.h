/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_PCIE_SLOTS_H
#define REDFISH_ENUM_PCIE_SLOTS_H

#include <stddef.h>

/* PCIeSlots.v1_0_0.SlotTypes */
enum rf_slot_types {
	SLOT_TYPES_INVALID = 0,
	SLOT_TYPES_FULL_LENGTH = 1,
	SLOT_TYPES_HALF_LENGTH = 2,
	SLOT_TYPES_LOW_PROFILE = 3,
	SLOT_TYPES_MINI = 4,
	SLOT_TYPES_M2 = 5,
	SLOT_TYPES_OEM = 6,
	SLOT_TYPES_OCP3_SMALL = 7,
	SLOT_TYPES_OCP3_LARGE = 8,
	SLOT_TYPES_U2 = 9,
};

static inline const char *rf_slot_types_to_str(enum rf_slot_types val)
{
	switch (val) {
	case SLOT_TYPES_INVALID: return "Invalid";
	case SLOT_TYPES_FULL_LENGTH: return "FullLength";
	case SLOT_TYPES_HALF_LENGTH: return "HalfLength";
	case SLOT_TYPES_LOW_PROFILE: return "LowProfile";
	case SLOT_TYPES_MINI: return "Mini";
	case SLOT_TYPES_M2: return "M2";
	case SLOT_TYPES_OEM: return "OEM";
	case SLOT_TYPES_OCP3_SMALL: return "OCP3Small";
	case SLOT_TYPES_OCP3_LARGE: return "OCP3Large";
	case SLOT_TYPES_U2: return "U2";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_PCIE_SLOTS_H */

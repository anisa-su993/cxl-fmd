/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_RESERVOIR_H
#define REDFISH_ENUM_RESERVOIR_H

#include <stddef.h>

/* Reservoir.v1_0_0.ReservoirType */
enum rf_reservoir_type {
	RESERVOIR_TYPE_INVALID = 0,
	RESERVOIR_TYPE_RESERVE = 1,
	RESERVOIR_TYPE_OVERFLOW = 2,
	RESERVOIR_TYPE_INLINE = 3,
	RESERVOIR_TYPE_IMMERSION = 4,
};

static inline const char *rf_reservoir_type_to_str(enum rf_reservoir_type val)
{
	switch (val) {
	case RESERVOIR_TYPE_INVALID: return "Invalid";
	case RESERVOIR_TYPE_RESERVE: return "Reserve";
	case RESERVOIR_TYPE_OVERFLOW: return "Overflow";
	case RESERVOIR_TYPE_INLINE: return "Inline";
	case RESERVOIR_TYPE_IMMERSION: return "Immersion";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_RESERVOIR_H */

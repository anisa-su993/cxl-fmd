/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_TRUSTED_COMPONENT_H
#define REDFISH_ENUM_TRUSTED_COMPONENT_H

#include <stddef.h>

/* TrustedComponent.v1_0_0.TrustedComponentType */
enum rf_trusted_component_type {
	TRUSTED_COMPONENT_TYPE_INVALID = 0,
	TRUSTED_COMPONENT_TYPE_DISCRETE = 1,
	TRUSTED_COMPONENT_TYPE_INTEGRATED = 2,
};

static inline const char *rf_trusted_component_type_to_str(enum rf_trusted_component_type val)
{
	switch (val) {
	case TRUSTED_COMPONENT_TYPE_INVALID: return "Invalid";
	case TRUSTED_COMPONENT_TYPE_DISCRETE: return "Discrete";
	case TRUSTED_COMPONENT_TYPE_INTEGRATED: return "Integrated";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_TRUSTED_COMPONENT_H */

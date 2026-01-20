/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_MESSAGE_REGISTRY_H
#define REDFISH_ENUM_MESSAGE_REGISTRY_H

#include <stddef.h>

/* MessageRegistry.v1_0_0.ParamType */
enum rf_param_type {
	PARAM_TYPE_INVALID = 0,
	PARAM_TYPE_STRING = 1,
	PARAM_TYPE_NUMBER = 2,
};

static inline const char *rf_param_type_to_str(enum rf_param_type val)
{
	switch (val) {
	case PARAM_TYPE_INVALID: return "Invalid";
	case PARAM_TYPE_STRING: return "string";
	case PARAM_TYPE_NUMBER: return "number";
	default: return NULL;
	}
}

/* MessageRegistry.v1_2_0.ClearingType */
enum rf_clearing_type {
	CLEARING_TYPE_INVALID = 0,
	CLEARING_TYPE_SAME_ORIGIN_OF_CONDITION = 1,
};

static inline const char *rf_clearing_type_to_str(enum rf_clearing_type val)
{
	switch (val) {
	case CLEARING_TYPE_INVALID: return "Invalid";
	case CLEARING_TYPE_SAME_ORIGIN_OF_CONDITION: return "SameOriginOfCondition";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_MESSAGE_REGISTRY_H */

/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_ACTION_INFO_H
#define REDFISH_ENUM_ACTION_INFO_H

#include <stddef.h>

/* ActionInfo.v1_0_0.ParameterTypes */
enum rf_parameter_types {
	PARAMETER_TYPES_INVALID = 0,
	PARAMETER_TYPES_BOOLEAN = 1,
	PARAMETER_TYPES_NUMBER = 2,
	PARAMETER_TYPES_NUMBER_ARRAY = 3,
	PARAMETER_TYPES_STRING = 4,
	PARAMETER_TYPES_STRING_ARRAY = 5,
	PARAMETER_TYPES_OBJECT = 6,
	PARAMETER_TYPES_OBJECT_ARRAY = 7,
};

static inline const char *rf_parameter_types_to_str(enum rf_parameter_types val)
{
	switch (val) {
	case PARAMETER_TYPES_INVALID: return "Invalid";
	case PARAMETER_TYPES_BOOLEAN: return "Boolean";
	case PARAMETER_TYPES_NUMBER: return "Number";
	case PARAMETER_TYPES_NUMBER_ARRAY: return "NumberArray";
	case PARAMETER_TYPES_STRING: return "String";
	case PARAMETER_TYPES_STRING_ARRAY: return "StringArray";
	case PARAMETER_TYPES_OBJECT: return "Object";
	case PARAMETER_TYPES_OBJECT_ARRAY: return "ObjectArray";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_ACTION_INFO_H */

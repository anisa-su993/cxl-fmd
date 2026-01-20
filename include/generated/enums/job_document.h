/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_JOB_DOCUMENT_H
#define REDFISH_ENUM_JOB_DOCUMENT_H

#include <stddef.h>

/* JobDocument.v1_0_0.DataType */
enum rf_data_type {
	DATA_TYPE_INVALID = 0,
	DATA_TYPE_BOOLEAN = 1,
	DATA_TYPE_NUMBER = 2,
	DATA_TYPE_STRING = 3,
};

static inline const char *rf_data_type_to_str(enum rf_data_type val)
{
	switch (val) {
	case DATA_TYPE_INVALID: return "Invalid";
	case DATA_TYPE_BOOLEAN: return "Boolean";
	case DATA_TYPE_NUMBER: return "Number";
	case DATA_TYPE_STRING: return "String";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_JOB_DOCUMENT_H */

/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_TELEMETRY_SERVICE_H
#define REDFISH_ENUM_TELEMETRY_SERVICE_H

#include <stddef.h>

/* TelemetryService.v1_0_0.CollectionFunction */
enum rf_collection_function {
	COLLECTION_FUNCTION_INVALID = 0,
	COLLECTION_FUNCTION_AVERAGE = 1,
	COLLECTION_FUNCTION_MAXIMUM = 2,
	COLLECTION_FUNCTION_MINIMUM = 3,
	COLLECTION_FUNCTION_SUMMATION = 4,
};

static inline const char *rf_collection_function_to_str(enum rf_collection_function val)
{
	switch (val) {
	case COLLECTION_FUNCTION_INVALID: return "Invalid";
	case COLLECTION_FUNCTION_AVERAGE: return "Average";
	case COLLECTION_FUNCTION_MAXIMUM: return "Maximum";
	case COLLECTION_FUNCTION_MINIMUM: return "Minimum";
	case COLLECTION_FUNCTION_SUMMATION: return "Summation";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_TELEMETRY_SERVICE_H */

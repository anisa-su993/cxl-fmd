/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_TELEMETRY_DATA_H
#define REDFISH_ENUM_TELEMETRY_DATA_H

#include <stddef.h>

/* TelemetryData.TelemetryDataTypes */
enum rf_telemetry_data_types {
	TELEMETRY_DATA_TYPES_INVALID = 0,
	TELEMETRY_DATA_TYPES_OEM = 1,
};

static inline const char *rf_telemetry_data_types_to_str(enum rf_telemetry_data_types val)
{
	switch (val) {
	case TELEMETRY_DATA_TYPES_INVALID: return "Invalid";
	case TELEMETRY_DATA_TYPES_OEM: return "OEM";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_TELEMETRY_DATA_H */

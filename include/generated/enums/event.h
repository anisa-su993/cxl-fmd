/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_EVENT_H
#define REDFISH_ENUM_EVENT_H

#include <stddef.h>

/* Event.EventType */
enum rf_event_type {
	EVENT_TYPE_INVALID = 0,
	EVENT_TYPE_STATUS_CHANGE = 1,
	EVENT_TYPE_RESOURCE_UPDATED = 2,
	EVENT_TYPE_RESOURCE_ADDED = 3,
	EVENT_TYPE_RESOURCE_REMOVED = 4,
	EVENT_TYPE_ALERT = 5,
	EVENT_TYPE_METRIC_REPORT = 6,
	EVENT_TYPE_OTHER = 7,
};

static inline const char *rf_event_type_to_str(enum rf_event_type val)
{
	switch (val) {
	case EVENT_TYPE_INVALID: return "Invalid";
	case EVENT_TYPE_STATUS_CHANGE: return "StatusChange";
	case EVENT_TYPE_RESOURCE_UPDATED: return "ResourceUpdated";
	case EVENT_TYPE_RESOURCE_ADDED: return "ResourceAdded";
	case EVENT_TYPE_RESOURCE_REMOVED: return "ResourceRemoved";
	case EVENT_TYPE_ALERT: return "Alert";
	case EVENT_TYPE_METRIC_REPORT: return "MetricReport";
	case EVENT_TYPE_OTHER: return "Other";
	default: return NULL;
	}
}

/* Event.v1_8_0.DiagnosticDataTypes */
enum rf_diagnostic_data_types {
	DIAGNOSTIC_DATA_TYPES_INVALID = 0,
	DIAGNOSTIC_DATA_TYPES_MANAGER = 1,
	DIAGNOSTIC_DATA_TYPES_PRE_OS = 2,
	DIAGNOSTIC_DATA_TYPES_OS = 3,
	DIAGNOSTIC_DATA_TYPES_OEM = 4,
	DIAGNOSTIC_DATA_TYPES_CPER = 5,
	DIAGNOSTIC_DATA_TYPES_CPER_SECTION = 6,
};

static inline const char *rf_diagnostic_data_types_to_str(enum rf_diagnostic_data_types val)
{
	switch (val) {
	case DIAGNOSTIC_DATA_TYPES_INVALID: return "Invalid";
	case DIAGNOSTIC_DATA_TYPES_MANAGER: return "Manager";
	case DIAGNOSTIC_DATA_TYPES_PRE_OS: return "PreOS";
	case DIAGNOSTIC_DATA_TYPES_OS: return "OS";
	case DIAGNOSTIC_DATA_TYPES_OEM: return "OEM";
	case DIAGNOSTIC_DATA_TYPES_CPER: return "CPER";
	case DIAGNOSTIC_DATA_TYPES_CPER_SECTION: return "CPERSection";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_EVENT_H */

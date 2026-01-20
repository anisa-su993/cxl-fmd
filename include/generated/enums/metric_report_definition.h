/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_METRIC_REPORT_DEFINITION_H
#define REDFISH_ENUM_METRIC_REPORT_DEFINITION_H

#include <stddef.h>

/* MetricReportDefinition.v1_0_0.MetricReportDefinitionType */
enum rf_metric_report_definition_type {
	METRIC_REPORT_DEFINITION_TYPE_INVALID = 0,
	METRIC_REPORT_DEFINITION_TYPE_PERIODIC = 1,
	METRIC_REPORT_DEFINITION_TYPE_ON_CHANGE = 2,
	METRIC_REPORT_DEFINITION_TYPE_ON_REQUEST = 3,
};

static inline const char *rf_metric_report_definition_type_to_str(enum rf_metric_report_definition_type val)
{
	switch (val) {
	case METRIC_REPORT_DEFINITION_TYPE_INVALID: return "Invalid";
	case METRIC_REPORT_DEFINITION_TYPE_PERIODIC: return "Periodic";
	case METRIC_REPORT_DEFINITION_TYPE_ON_CHANGE: return "OnChange";
	case METRIC_REPORT_DEFINITION_TYPE_ON_REQUEST: return "OnRequest";
	default: return NULL;
	}
}

/* MetricReportDefinition.v1_0_0.ReportActionsEnum */
enum rf_report_actions_enum {
	REPORT_ACTIONS_ENUM_INVALID = 0,
	REPORT_ACTIONS_ENUM_LOG_TO_METRIC_REPORTS_COLLECTION = 1,
	REPORT_ACTIONS_ENUM_REDFISH_EVENT = 2,
};

static inline const char *rf_report_actions_enum_to_str(enum rf_report_actions_enum val)
{
	switch (val) {
	case REPORT_ACTIONS_ENUM_INVALID: return "Invalid";
	case REPORT_ACTIONS_ENUM_LOG_TO_METRIC_REPORTS_COLLECTION: return "LogToMetricReportsCollection";
	case REPORT_ACTIONS_ENUM_REDFISH_EVENT: return "RedfishEvent";
	default: return NULL;
	}
}

/* MetricReportDefinition.v1_0_0.ReportUpdatesEnum */
enum rf_report_updates_enum {
	REPORT_UPDATES_ENUM_INVALID = 0,
	REPORT_UPDATES_ENUM_OVERWRITE = 1,
	REPORT_UPDATES_ENUM_APPEND_WRAPS_WHEN_FULL = 2,
	REPORT_UPDATES_ENUM_APPEND_STOPS_WHEN_FULL = 3,
	REPORT_UPDATES_ENUM_NEW_REPORT = 4,
};

static inline const char *rf_report_updates_enum_to_str(enum rf_report_updates_enum val)
{
	switch (val) {
	case REPORT_UPDATES_ENUM_INVALID: return "Invalid";
	case REPORT_UPDATES_ENUM_OVERWRITE: return "Overwrite";
	case REPORT_UPDATES_ENUM_APPEND_WRAPS_WHEN_FULL: return "AppendWrapsWhenFull";
	case REPORT_UPDATES_ENUM_APPEND_STOPS_WHEN_FULL: return "AppendStopsWhenFull";
	case REPORT_UPDATES_ENUM_NEW_REPORT: return "NewReport";
	default: return NULL;
	}
}

/* MetricReportDefinition.v1_0_0.CalculationAlgorithmEnum */
enum rf_calculation_algorithm_enum {
	CALCULATION_ALGORITHM_ENUM_INVALID = 0,
	CALCULATION_ALGORITHM_ENUM_AVERAGE = 1,
	CALCULATION_ALGORITHM_ENUM_MAXIMUM = 2,
	CALCULATION_ALGORITHM_ENUM_MINIMUM = 3,
	CALCULATION_ALGORITHM_ENUM_SUMMATION = 4,
};

static inline const char *rf_calculation_algorithm_enum_to_str(enum rf_calculation_algorithm_enum val)
{
	switch (val) {
	case CALCULATION_ALGORITHM_ENUM_INVALID: return "Invalid";
	case CALCULATION_ALGORITHM_ENUM_AVERAGE: return "Average";
	case CALCULATION_ALGORITHM_ENUM_MAXIMUM: return "Maximum";
	case CALCULATION_ALGORITHM_ENUM_MINIMUM: return "Minimum";
	case CALCULATION_ALGORITHM_ENUM_SUMMATION: return "Summation";
	default: return NULL;
	}
}

/* MetricReportDefinition.v1_0_0.CollectionTimeScope */
enum rf_collection_time_scope {
	COLLECTION_TIME_SCOPE_INVALID = 0,
	COLLECTION_TIME_SCOPE_POINT = 1,
	COLLECTION_TIME_SCOPE_INTERVAL = 2,
	COLLECTION_TIME_SCOPE_STARTUP_INTERVAL = 3,
};

static inline const char *rf_collection_time_scope_to_str(enum rf_collection_time_scope val)
{
	switch (val) {
	case COLLECTION_TIME_SCOPE_INVALID: return "Invalid";
	case COLLECTION_TIME_SCOPE_POINT: return "Point";
	case COLLECTION_TIME_SCOPE_INTERVAL: return "Interval";
	case COLLECTION_TIME_SCOPE_STARTUP_INTERVAL: return "StartupInterval";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_METRIC_REPORT_DEFINITION_H */

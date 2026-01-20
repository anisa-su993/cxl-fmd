/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_TRIGGERS_H
#define REDFISH_ENUM_TRIGGERS_H

#include <stddef.h>

/* Triggers.v1_0_0.MetricTypeEnum */
enum rf_metric_type_enum {
	METRIC_TYPE_ENUM_INVALID = 0,
	METRIC_TYPE_ENUM_NUMERIC = 1,
	METRIC_TYPE_ENUM_DISCRETE = 2,
};

static inline const char *rf_metric_type_enum_to_str(enum rf_metric_type_enum val)
{
	switch (val) {
	case METRIC_TYPE_ENUM_INVALID: return "Invalid";
	case METRIC_TYPE_ENUM_NUMERIC: return "Numeric";
	case METRIC_TYPE_ENUM_DISCRETE: return "Discrete";
	default: return NULL;
	}
}

/* Triggers.v1_0_0.TriggerActionEnum */
enum rf_trigger_action_enum {
	TRIGGER_ACTION_ENUM_INVALID = 0,
	TRIGGER_ACTION_ENUM_LOG_TO_LOG_SERVICE = 1,
	TRIGGER_ACTION_ENUM_REDFISH_EVENT = 2,
	TRIGGER_ACTION_ENUM_REDFISH_METRIC_REPORT = 3,
};

static inline const char *rf_trigger_action_enum_to_str(enum rf_trigger_action_enum val)
{
	switch (val) {
	case TRIGGER_ACTION_ENUM_INVALID: return "Invalid";
	case TRIGGER_ACTION_ENUM_LOG_TO_LOG_SERVICE: return "LogToLogService";
	case TRIGGER_ACTION_ENUM_REDFISH_EVENT: return "RedfishEvent";
	case TRIGGER_ACTION_ENUM_REDFISH_METRIC_REPORT: return "RedfishMetricReport";
	default: return NULL;
	}
}

/* Triggers.v1_0_0.DiscreteTriggerConditionEnum */
enum rf_discrete_trigger_condition_enum {
	DISCRETE_TRIGGER_CONDITION_ENUM_INVALID = 0,
	DISCRETE_TRIGGER_CONDITION_ENUM_SPECIFIED = 1,
	DISCRETE_TRIGGER_CONDITION_ENUM_CHANGED = 2,
};

static inline const char *rf_discrete_trigger_condition_enum_to_str(enum rf_discrete_trigger_condition_enum val)
{
	switch (val) {
	case DISCRETE_TRIGGER_CONDITION_ENUM_INVALID: return "Invalid";
	case DISCRETE_TRIGGER_CONDITION_ENUM_SPECIFIED: return "Specified";
	case DISCRETE_TRIGGER_CONDITION_ENUM_CHANGED: return "Changed";
	default: return NULL;
	}
}

/* Triggers.v1_0_0.ThresholdActivation */
enum rf_threshold_activation {
	THRESHOLD_ACTIVATION_INVALID = 0,
	THRESHOLD_ACTIVATION_INCREASING = 1,
	THRESHOLD_ACTIVATION_DECREASING = 2,
	THRESHOLD_ACTIVATION_EITHER = 3,
	THRESHOLD_ACTIVATION_DISABLED = 4,
};

static inline const char *rf_threshold_activation_to_str(enum rf_threshold_activation val)
{
	switch (val) {
	case THRESHOLD_ACTIVATION_INVALID: return "Invalid";
	case THRESHOLD_ACTIVATION_INCREASING: return "Increasing";
	case THRESHOLD_ACTIVATION_DECREASING: return "Decreasing";
	case THRESHOLD_ACTIVATION_EITHER: return "Either";
	case THRESHOLD_ACTIVATION_DISABLED: return "Disabled";
	default: return NULL;
	}
}

/* Triggers.v1_0_0.DirectionOfCrossingEnum */
enum rf_direction_of_crossing_enum {
	DIRECTION_OF_CROSSING_ENUM_INVALID = 0,
	DIRECTION_OF_CROSSING_ENUM_INCREASING = 1,
	DIRECTION_OF_CROSSING_ENUM_DECREASING = 2,
};

static inline const char *rf_direction_of_crossing_enum_to_str(enum rf_direction_of_crossing_enum val)
{
	switch (val) {
	case DIRECTION_OF_CROSSING_ENUM_INVALID: return "Invalid";
	case DIRECTION_OF_CROSSING_ENUM_INCREASING: return "Increasing";
	case DIRECTION_OF_CROSSING_ENUM_DECREASING: return "Decreasing";
	default: return NULL;
	}
}

/* Triggers.v1_4_0.TriggerActionMessage */
enum rf_trigger_action_message {
	TRIGGER_ACTION_MESSAGE_INVALID = 0,
	TRIGGER_ACTION_MESSAGE_TELEMETRY = 1,
	TRIGGER_ACTION_MESSAGE_DRIVE_MEDIA_LIFE = 2,
	TRIGGER_ACTION_MESSAGE_CONNECTION_SPEED = 3,
};

static inline const char *rf_trigger_action_message_to_str(enum rf_trigger_action_message val)
{
	switch (val) {
	case TRIGGER_ACTION_MESSAGE_INVALID: return "Invalid";
	case TRIGGER_ACTION_MESSAGE_TELEMETRY: return "Telemetry";
	case TRIGGER_ACTION_MESSAGE_DRIVE_MEDIA_LIFE: return "DriveMediaLife";
	case TRIGGER_ACTION_MESSAGE_CONNECTION_SPEED: return "ConnectionSpeed";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_TRIGGERS_H */

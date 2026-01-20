/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_LEAK_DETECTOR_H
#define REDFISH_ENUM_LEAK_DETECTOR_H

#include <stddef.h>

/* LeakDetector.v1_0_0.LeakDetectorType */
enum rf_leak_detector_type {
	LEAK_DETECTOR_TYPE_INVALID = 0,
	LEAK_DETECTOR_TYPE_MOISTURE = 1,
	LEAK_DETECTOR_TYPE_FLOAT_SWITCH = 2,
};

static inline const char *rf_leak_detector_type_to_str(enum rf_leak_detector_type val)
{
	switch (val) {
	case LEAK_DETECTOR_TYPE_INVALID: return "Invalid";
	case LEAK_DETECTOR_TYPE_MOISTURE: return "Moisture";
	case LEAK_DETECTOR_TYPE_FLOAT_SWITCH: return "FloatSwitch";
	default: return NULL;
	}
}

/* LeakDetector.v1_0_0.DetectorState */
enum rf_detector_state {
	DETECTOR_STATE_INVALID = 0,
	DETECTOR_STATE_OK = 1,
	DETECTOR_STATE_WARNING = 2,
	DETECTOR_STATE_CRITICAL = 3,
	DETECTOR_STATE_UNAVAILABLE = 4,
	DETECTOR_STATE_ABSENT = 5,
};

static inline const char *rf_detector_state_to_str(enum rf_detector_state val)
{
	switch (val) {
	case DETECTOR_STATE_INVALID: return "Invalid";
	case DETECTOR_STATE_OK: return "OK";
	case DETECTOR_STATE_WARNING: return "Warning";
	case DETECTOR_STATE_CRITICAL: return "Critical";
	case DETECTOR_STATE_UNAVAILABLE: return "Unavailable";
	case DETECTOR_STATE_ABSENT: return "Absent";
	default: return NULL;
	}
}

/* LeakDetector.v1_4_0.ReactionType */
enum rf_reaction_type {
	REACTION_TYPE_INVALID = 0,
	REACTION_TYPE_NONE = 1,
	REACTION_TYPE_FORCE_OFF = 2,
	REACTION_TYPE_GRACEFUL_SHUTDOWN = 3,
};

static inline const char *rf_reaction_type_to_str(enum rf_reaction_type val)
{
	switch (val) {
	case REACTION_TYPE_INVALID: return "Invalid";
	case REACTION_TYPE_NONE: return "None";
	case REACTION_TYPE_FORCE_OFF: return "ForceOff";
	case REACTION_TYPE_GRACEFUL_SHUTDOWN: return "GracefulShutdown";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_LEAK_DETECTOR_H */

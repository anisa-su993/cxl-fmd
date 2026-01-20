/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_AUTOMATION_NODE_H
#define REDFISH_ENUM_AUTOMATION_NODE_H

#include <stddef.h>

/* AutomationNode.NodeState */
enum rf_node_state {
	NODE_STATE_INVALID = 0,
	NODE_STATE_IDLE = 1,
	NODE_STATE_DONE = 2,
	NODE_STATE_WAITING = 3,
	NODE_STATE_CONDITION_STOP = 4,
	NODE_STATE_ERROR_STOP = 5,
	NODE_STATE_RUNNING = 6,
};

static inline const char *rf_node_state_to_str(enum rf_node_state val)
{
	switch (val) {
	case NODE_STATE_INVALID: return "Invalid";
	case NODE_STATE_IDLE: return "Idle";
	case NODE_STATE_DONE: return "Done";
	case NODE_STATE_WAITING: return "Waiting";
	case NODE_STATE_CONDITION_STOP: return "ConditionStop";
	case NODE_STATE_ERROR_STOP: return "ErrorStop";
	case NODE_STATE_RUNNING: return "Running";
	default: return NULL;
	}
}

/* AutomationNode.v1_0_0.NodeType */
enum rf_node_type {
	NODE_TYPE_INVALID = 0,
	NODE_TYPE_MOTION_POSITION = 1,
	NODE_TYPE_MOTION_VELOCITY = 2,
	NODE_TYPE_MOTION_POSITION_GROUP = 3,
	NODE_TYPE_PID = 4,
	NODE_TYPE_SIMPLE = 5,
};

static inline const char *rf_node_type_to_str(enum rf_node_type val)
{
	switch (val) {
	case NODE_TYPE_INVALID: return "Invalid";
	case NODE_TYPE_MOTION_POSITION: return "MotionPosition";
	case NODE_TYPE_MOTION_VELOCITY: return "MotionVelocity";
	case NODE_TYPE_MOTION_POSITION_GROUP: return "MotionPositionGroup";
	case NODE_TYPE_PID: return "PID";
	case NODE_TYPE_SIMPLE: return "Simple";
	default: return NULL;
	}
}

/* AutomationNode.v1_0_0.MotionProfileType */
enum rf_motion_profile_type {
	MOTION_PROFILE_TYPE_INVALID = 0,
	MOTION_PROFILE_TYPE_TRAPEZOIDAL = 1,
	MOTION_PROFILE_TYPE_S_CURVE = 2,
	MOTION_PROFILE_TYPE_NONE = 3,
};

static inline const char *rf_motion_profile_type_to_str(enum rf_motion_profile_type val)
{
	switch (val) {
	case MOTION_PROFILE_TYPE_INVALID: return "Invalid";
	case MOTION_PROFILE_TYPE_TRAPEZOIDAL: return "Trapezoidal";
	case MOTION_PROFILE_TYPE_S_CURVE: return "SCurve";
	case MOTION_PROFILE_TYPE_NONE: return "None";
	default: return NULL;
	}
}

/* AutomationNode.v1_0_0.MotionAxisType */
enum rf_motion_axis_type {
	MOTION_AXIS_TYPE_INVALID = 0,
	MOTION_AXIS_TYPE_X = 1,
	MOTION_AXIS_TYPE_Y = 2,
	MOTION_AXIS_TYPE_Z = 3,
	MOTION_AXIS_TYPE_TWO_AXIS = 4,
	MOTION_AXIS_TYPE_THREE_AXIS = 5,
};

static inline const char *rf_motion_axis_type_to_str(enum rf_motion_axis_type val)
{
	switch (val) {
	case MOTION_AXIS_TYPE_INVALID: return "Invalid";
	case MOTION_AXIS_TYPE_X: return "X";
	case MOTION_AXIS_TYPE_Y: return "Y";
	case MOTION_AXIS_TYPE_Z: return "Z";
	case MOTION_AXIS_TYPE_TWO_AXIS: return "TwoAxis";
	case MOTION_AXIS_TYPE_THREE_AXIS: return "ThreeAxis";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_AUTOMATION_NODE_H */

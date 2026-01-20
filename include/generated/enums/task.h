/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_TASK_H
#define REDFISH_ENUM_TASK_H

#include <stddef.h>

/* Task.v1_0_0.TaskState */
enum rf_task_state {
	TASK_STATE_INVALID = 0,
	TASK_STATE_NEW = 1,
	TASK_STATE_STARTING = 2,
	TASK_STATE_RUNNING = 3,
	TASK_STATE_SUSPENDED = 4,
	TASK_STATE_INTERRUPTED = 5,
	TASK_STATE_PENDING = 6,
	TASK_STATE_STOPPING = 7,
	TASK_STATE_COMPLETED = 8,
	TASK_STATE_KILLED = 9,
	TASK_STATE_EXCEPTION = 10,
	TASK_STATE_SERVICE = 11,
	TASK_STATE_CANCELLING = 12,
	TASK_STATE_CANCELLED = 13,
};

static inline const char *rf_task_state_to_str(enum rf_task_state val)
{
	switch (val) {
	case TASK_STATE_INVALID: return "Invalid";
	case TASK_STATE_NEW: return "New";
	case TASK_STATE_STARTING: return "Starting";
	case TASK_STATE_RUNNING: return "Running";
	case TASK_STATE_SUSPENDED: return "Suspended";
	case TASK_STATE_INTERRUPTED: return "Interrupted";
	case TASK_STATE_PENDING: return "Pending";
	case TASK_STATE_STOPPING: return "Stopping";
	case TASK_STATE_COMPLETED: return "Completed";
	case TASK_STATE_KILLED: return "Killed";
	case TASK_STATE_EXCEPTION: return "Exception";
	case TASK_STATE_SERVICE: return "Service";
	case TASK_STATE_CANCELLING: return "Cancelling";
	case TASK_STATE_CANCELLED: return "Cancelled";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_TASK_H */

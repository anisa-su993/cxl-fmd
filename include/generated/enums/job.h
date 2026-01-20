/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_JOB_H
#define REDFISH_ENUM_JOB_H

#include <stddef.h>

/* Job.v1_0_0.JobState */
enum rf_job_state {
	JOB_STATE_NEW = 0,
	JOB_STATE_STARTING = 1,
	JOB_STATE_RUNNING = 2,
	JOB_STATE_SUSPENDED = 3,
	JOB_STATE_INTERRUPTED = 4,
	JOB_STATE_PENDING = 5,
	JOB_STATE_STOPPING = 6,
	JOB_STATE_COMPLETED = 7,
	JOB_STATE_CANCELLED = 8,
	JOB_STATE_EXCEPTION = 9,
	JOB_STATE_SERVICE = 10,
	JOB_STATE_USER_INTERVENTION = 11,
	JOB_STATE_CONTINUE = 12,
	JOB_STATE_VALIDATING = 13,
	JOB_STATE_INVALID = 14,
};

static inline const char *rf_job_state_to_str(enum rf_job_state val)
{
	switch (val) {
	case JOB_STATE_NEW: return "New";
	case JOB_STATE_STARTING: return "Starting";
	case JOB_STATE_RUNNING: return "Running";
	case JOB_STATE_SUSPENDED: return "Suspended";
	case JOB_STATE_INTERRUPTED: return "Interrupted";
	case JOB_STATE_PENDING: return "Pending";
	case JOB_STATE_STOPPING: return "Stopping";
	case JOB_STATE_COMPLETED: return "Completed";
	case JOB_STATE_CANCELLED: return "Cancelled";
	case JOB_STATE_EXCEPTION: return "Exception";
	case JOB_STATE_SERVICE: return "Service";
	case JOB_STATE_USER_INTERVENTION: return "UserIntervention";
	case JOB_STATE_CONTINUE: return "Continue";
	case JOB_STATE_VALIDATING: return "Validating";
	case JOB_STATE_INVALID: return "Invalid";
	default: return NULL;
	}
}

/* Job.v1_3_0.JobType */
enum rf_job_type {
	JOB_TYPE_INVALID = 0,
	JOB_TYPE_DOCUMENT_BASED = 1,
	JOB_TYPE_USER_SPECIFIED = 2,
	JOB_TYPE_SERVICE_GENERATED = 3,
};

static inline const char *rf_job_type_to_str(enum rf_job_type val)
{
	switch (val) {
	case JOB_TYPE_INVALID: return "Invalid";
	case JOB_TYPE_DOCUMENT_BASED: return "DocumentBased";
	case JOB_TYPE_USER_SPECIFIED: return "UserSpecified";
	case JOB_TYPE_SERVICE_GENERATED: return "ServiceGenerated";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_JOB_H */

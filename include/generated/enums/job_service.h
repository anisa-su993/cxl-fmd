/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_JOB_SERVICE_H
#define REDFISH_ENUM_JOB_SERVICE_H

#include <stddef.h>

/* JobService.v1_1_0.ValidationPolicy */
enum rf_validation_policy {
	VALIDATION_POLICY_INVALID = 0,
	VALIDATION_POLICY_AUTOMATIC = 1,
	VALIDATION_POLICY_MANUAL = 2,
	VALIDATION_POLICY_BYPASS = 3,
};

static inline const char *rf_validation_policy_to_str(enum rf_validation_policy val)
{
	switch (val) {
	case VALIDATION_POLICY_INVALID: return "Invalid";
	case VALIDATION_POLICY_AUTOMATIC: return "Automatic";
	case VALIDATION_POLICY_MANUAL: return "Manual";
	case VALIDATION_POLICY_BYPASS: return "Bypass";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_JOB_SERVICE_H */

/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_TASK_SERVICE_H
#define REDFISH_ENUM_TASK_SERVICE_H

#include <stddef.h>

/* TaskService.v1_0_0.OverWritePolicy */
enum rf_over_write_policy {
	OVER_WRITE_POLICY_INVALID = 0,
	OVER_WRITE_POLICY_MANUAL = 1,
	OVER_WRITE_POLICY_OLDEST = 2,
};

static inline const char *rf_over_write_policy_to_str(enum rf_over_write_policy val)
{
	switch (val) {
	case OVER_WRITE_POLICY_INVALID: return "Invalid";
	case OVER_WRITE_POLICY_MANUAL: return "Manual";
	case OVER_WRITE_POLICY_OLDEST: return "Oldest";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_TASK_SERVICE_H */

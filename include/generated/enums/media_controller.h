/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_MEDIA_CONTROLLER_H
#define REDFISH_ENUM_MEDIA_CONTROLLER_H

#include <stddef.h>

/* MediaController.v1_0_0.MediaControllerType */
enum rf_media_controller_type {
	MEDIA_CONTROLLER_TYPE_INVALID = 0,
	MEDIA_CONTROLLER_TYPE_MEMORY = 1,
};

static inline const char *rf_media_controller_type_to_str(enum rf_media_controller_type val)
{
	switch (val) {
	case MEDIA_CONTROLLER_TYPE_INVALID: return "Invalid";
	case MEDIA_CONTROLLER_TYPE_MEMORY: return "Memory";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_MEDIA_CONTROLLER_H */

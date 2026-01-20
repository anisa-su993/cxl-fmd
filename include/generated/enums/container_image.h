/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_CONTAINER_IMAGE_H
#define REDFISH_ENUM_CONTAINER_IMAGE_H

#include <stddef.h>

/* ContainerImage.ImageTypes */
enum rf_image_types {
	IMAGE_TYPES_INVALID = 0,
	IMAGE_TYPES_DOCKER_V1 = 1,
	IMAGE_TYPES_DOCKER_V2 = 2,
	IMAGE_TYPES_OCI = 3,
};

static inline const char *rf_image_types_to_str(enum rf_image_types val)
{
	switch (val) {
	case IMAGE_TYPES_INVALID: return "Invalid";
	case IMAGE_TYPES_DOCKER_V1: return "DockerV1";
	case IMAGE_TYPES_DOCKER_V2: return "DockerV2";
	case IMAGE_TYPES_OCI: return "OCI";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_CONTAINER_IMAGE_H */

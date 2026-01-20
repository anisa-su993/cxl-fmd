/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_COMPOSITION_SERVICE_H
#define REDFISH_ENUM_COMPOSITION_SERVICE_H

#include <stddef.h>

/* CompositionService.v1_2_0.ComposeRequestType */
enum rf_compose_request_type {
	COMPOSE_REQUEST_TYPE_INVALID = 0,
	COMPOSE_REQUEST_TYPE_PREVIEW = 1,
	COMPOSE_REQUEST_TYPE_PREVIEW_RESERVE = 2,
	COMPOSE_REQUEST_TYPE_APPLY = 3,
};

static inline const char *rf_compose_request_type_to_str(enum rf_compose_request_type val)
{
	switch (val) {
	case COMPOSE_REQUEST_TYPE_INVALID: return "Invalid";
	case COMPOSE_REQUEST_TYPE_PREVIEW: return "Preview";
	case COMPOSE_REQUEST_TYPE_PREVIEW_RESERVE: return "PreviewReserve";
	case COMPOSE_REQUEST_TYPE_APPLY: return "Apply";
	default: return NULL;
	}
}

/* CompositionService.v1_2_0.ComposeRequestFormat */
enum rf_compose_request_format {
	COMPOSE_REQUEST_FORMAT_INVALID = 0,
	COMPOSE_REQUEST_FORMAT_MANIFEST = 1,
};

static inline const char *rf_compose_request_format_to_str(enum rf_compose_request_format val)
{
	switch (val) {
	case COMPOSE_REQUEST_FORMAT_INVALID: return "Invalid";
	case COMPOSE_REQUEST_FORMAT_MANIFEST: return "Manifest";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_COMPOSITION_SERVICE_H */

/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_MANIFEST_H
#define REDFISH_ENUM_MANIFEST_H

#include <stddef.h>

/* Manifest.v1_0_0.Expand */
enum rf_expand {
	EXPAND_INVALID = 0,
	EXPAND_NONE = 1,
	EXPAND_ALL = 2,
	EXPAND_RELEVANT = 3,
};

static inline const char *rf_expand_to_str(enum rf_expand val)
{
	switch (val) {
	case EXPAND_INVALID: return "Invalid";
	case EXPAND_NONE: return "None";
	case EXPAND_ALL: return "All";
	case EXPAND_RELEVANT: return "Relevant";
	default: return NULL;
	}
}

/* Manifest.v1_0_0.StanzaType */
enum rf_stanza_type {
	STANZA_TYPE_INVALID = 0,
	STANZA_TYPE_COMPOSE_SYSTEM = 1,
	STANZA_TYPE_DECOMPOSE_SYSTEM = 2,
	STANZA_TYPE_COMPOSE_RESOURCE = 3,
	STANZA_TYPE_DECOMPOSE_RESOURCE = 4,
	STANZA_TYPE_OEM = 5,
	STANZA_TYPE_REGISTER_RESOURCE_BLOCK = 6,
};

static inline const char *rf_stanza_type_to_str(enum rf_stanza_type val)
{
	switch (val) {
	case STANZA_TYPE_INVALID: return "Invalid";
	case STANZA_TYPE_COMPOSE_SYSTEM: return "ComposeSystem";
	case STANZA_TYPE_DECOMPOSE_SYSTEM: return "DecomposeSystem";
	case STANZA_TYPE_COMPOSE_RESOURCE: return "ComposeResource";
	case STANZA_TYPE_DECOMPOSE_RESOURCE: return "DecomposeResource";
	case STANZA_TYPE_OEM: return "OEM";
	case STANZA_TYPE_REGISTER_RESOURCE_BLOCK: return "RegisterResourceBlock";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_MANIFEST_H */

/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_LICENSE_H
#define REDFISH_ENUM_LICENSE_H

#include <stddef.h>

/* License.v1_0_0.LicenseType */
enum rf_license_type {
	LICENSE_TYPE_INVALID = 0,
	LICENSE_TYPE_PRODUCTION = 1,
	LICENSE_TYPE_PROTOTYPE = 2,
	LICENSE_TYPE_TRIAL = 3,
};

static inline const char *rf_license_type_to_str(enum rf_license_type val)
{
	switch (val) {
	case LICENSE_TYPE_INVALID: return "Invalid";
	case LICENSE_TYPE_PRODUCTION: return "Production";
	case LICENSE_TYPE_PROTOTYPE: return "Prototype";
	case LICENSE_TYPE_TRIAL: return "Trial";
	default: return NULL;
	}
}

/* License.v1_0_0.AuthorizationScope */
enum rf_authorization_scope {
	AUTHORIZATION_SCOPE_INVALID = 0,
	AUTHORIZATION_SCOPE_DEVICE = 1,
	AUTHORIZATION_SCOPE_CAPACITY = 2,
	AUTHORIZATION_SCOPE_SERVICE = 3,
};

static inline const char *rf_authorization_scope_to_str(enum rf_authorization_scope val)
{
	switch (val) {
	case AUTHORIZATION_SCOPE_INVALID: return "Invalid";
	case AUTHORIZATION_SCOPE_DEVICE: return "Device";
	case AUTHORIZATION_SCOPE_CAPACITY: return "Capacity";
	case AUTHORIZATION_SCOPE_SERVICE: return "Service";
	default: return NULL;
	}
}

/* License.v1_0_0.LicenseOrigin */
enum rf_license_origin {
	LICENSE_ORIGIN_INVALID = 0,
	LICENSE_ORIGIN_BUILT_IN = 1,
	LICENSE_ORIGIN_INSTALLED = 2,
};

static inline const char *rf_license_origin_to_str(enum rf_license_origin val)
{
	switch (val) {
	case LICENSE_ORIGIN_INVALID: return "Invalid";
	case LICENSE_ORIGIN_BUILT_IN: return "BuiltIn";
	case LICENSE_ORIGIN_INSTALLED: return "Installed";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_LICENSE_H */

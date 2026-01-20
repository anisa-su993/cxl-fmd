/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_AGGREGATION_SOURCE_H
#define REDFISH_ENUM_AGGREGATION_SOURCE_H

#include <stddef.h>

/* AggregationSource.v1_1_0.SNMPAuthenticationProtocols */
enum rf_snmp_authentication_protocols {
	SNMP_AUTHENTICATION_PROTOCOLS_INVALID = 0,
	SNMP_AUTHENTICATION_PROTOCOLS_NONE = 1,
	SNMP_AUTHENTICATION_PROTOCOLS_COMMUNITY_STRING = 2,
	SNMP_AUTHENTICATION_PROTOCOLS_HMAC_MD5 = 3,
	SNMP_AUTHENTICATION_PROTOCOLS_HMAC_SHA96 = 4,
	SNMP_AUTHENTICATION_PROTOCOLS_HMAC128_SHA224 = 5,
	SNMP_AUTHENTICATION_PROTOCOLS_HMAC192_SHA256 = 6,
	SNMP_AUTHENTICATION_PROTOCOLS_HMAC256_SHA384 = 7,
	SNMP_AUTHENTICATION_PROTOCOLS_HMAC384_SHA512 = 8,
};

static inline const char *rf_snmp_authentication_protocols_to_str(enum rf_snmp_authentication_protocols val)
{
	switch (val) {
	case SNMP_AUTHENTICATION_PROTOCOLS_INVALID: return "Invalid";
	case SNMP_AUTHENTICATION_PROTOCOLS_NONE: return "None";
	case SNMP_AUTHENTICATION_PROTOCOLS_COMMUNITY_STRING: return "CommunityString";
	case SNMP_AUTHENTICATION_PROTOCOLS_HMAC_MD5: return "HMAC_MD5";
	case SNMP_AUTHENTICATION_PROTOCOLS_HMAC_SHA96: return "HMAC_SHA96";
	case SNMP_AUTHENTICATION_PROTOCOLS_HMAC128_SHA224: return "HMAC128_SHA224";
	case SNMP_AUTHENTICATION_PROTOCOLS_HMAC192_SHA256: return "HMAC192_SHA256";
	case SNMP_AUTHENTICATION_PROTOCOLS_HMAC256_SHA384: return "HMAC256_SHA384";
	case SNMP_AUTHENTICATION_PROTOCOLS_HMAC384_SHA512: return "HMAC384_SHA512";
	default: return NULL;
	}
}

/* AggregationSource.v1_1_0.SNMPEncryptionProtocols */
enum rf_snmp_encryption_protocols {
	SNMP_ENCRYPTION_PROTOCOLS_INVALID = 0,
	SNMP_ENCRYPTION_PROTOCOLS_NONE = 1,
	SNMP_ENCRYPTION_PROTOCOLS_CBC_DES = 2,
	SNMP_ENCRYPTION_PROTOCOLS_CFB128_AES128 = 3,
	SNMP_ENCRYPTION_PROTOCOLS_CFB128_AES192 = 4,
	SNMP_ENCRYPTION_PROTOCOLS_CFB128_AES256 = 5,
};

static inline const char *rf_snmp_encryption_protocols_to_str(enum rf_snmp_encryption_protocols val)
{
	switch (val) {
	case SNMP_ENCRYPTION_PROTOCOLS_INVALID: return "Invalid";
	case SNMP_ENCRYPTION_PROTOCOLS_NONE: return "None";
	case SNMP_ENCRYPTION_PROTOCOLS_CBC_DES: return "CBC_DES";
	case SNMP_ENCRYPTION_PROTOCOLS_CFB128_AES128: return "CFB128_AES128";
	case SNMP_ENCRYPTION_PROTOCOLS_CFB128_AES192: return "CFB128_AES192";
	case SNMP_ENCRYPTION_PROTOCOLS_CFB128_AES256: return "CFB128_AES256";
	default: return NULL;
	}
}

/* AggregationSource.v1_2_0.AggregationType */
enum rf_aggregation_type {
	AGGREGATION_TYPE_INVALID = 0,
	AGGREGATION_TYPE_NOTIFICATIONS_ONLY = 1,
	AGGREGATION_TYPE_FULL = 2,
};

static inline const char *rf_aggregation_type_to_str(enum rf_aggregation_type val)
{
	switch (val) {
	case AGGREGATION_TYPE_INVALID: return "Invalid";
	case AGGREGATION_TYPE_NOTIFICATIONS_ONLY: return "NotificationsOnly";
	case AGGREGATION_TYPE_FULL: return "Full";
	default: return NULL;
	}
}

/* AggregationSource.v1_3_0.UserAuthenticationMethod */
enum rf_user_authentication_method {
	USER_AUTHENTICATION_METHOD_INVALID = 0,
	USER_AUTHENTICATION_METHOD_PUBLIC_KEY = 1,
	USER_AUTHENTICATION_METHOD_PASSWORD = 2,
};

static inline const char *rf_user_authentication_method_to_str(enum rf_user_authentication_method val)
{
	switch (val) {
	case USER_AUTHENTICATION_METHOD_INVALID: return "Invalid";
	case USER_AUTHENTICATION_METHOD_PUBLIC_KEY: return "PublicKey";
	case USER_AUTHENTICATION_METHOD_PASSWORD: return "Password";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_AGGREGATION_SOURCE_H */

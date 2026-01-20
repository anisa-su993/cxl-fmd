/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_MANAGER_NETWORK_PROTOCOL_H
#define REDFISH_ENUM_MANAGER_NETWORK_PROTOCOL_H

#include <stddef.h>

/* ManagerNetworkProtocol.v1_0_0.NotifyIPv6Scope */
enum rf_notify_ipv6_scope {
	NOTIFY_IPV6_SCOPE_INVALID = 0,
	NOTIFY_IPV6_SCOPE_LINK = 1,
	NOTIFY_IPV6_SCOPE_SITE = 2,
	NOTIFY_IPV6_SCOPE_ORGANIZATION = 3,
};

static inline const char *rf_notify_ipv6_scope_to_str(enum rf_notify_ipv6_scope val)
{
	switch (val) {
	case NOTIFY_IPV6_SCOPE_INVALID: return "Invalid";
	case NOTIFY_IPV6_SCOPE_LINK: return "Link";
	case NOTIFY_IPV6_SCOPE_SITE: return "Site";
	case NOTIFY_IPV6_SCOPE_ORGANIZATION: return "Organization";
	default: return NULL;
	}
}

/* ManagerNetworkProtocol.v1_5_0.SNMPCommunityAccessMode */
enum rf_snmp_community_access_mode {
	SNMP_COMMUNITY_ACCESS_MODE_INVALID = 0,
	SNMP_COMMUNITY_ACCESS_MODE_FULL = 1,
	SNMP_COMMUNITY_ACCESS_MODE_LIMITED = 2,
};

static inline const char *rf_snmp_community_access_mode_to_str(enum rf_snmp_community_access_mode val)
{
	switch (val) {
	case SNMP_COMMUNITY_ACCESS_MODE_INVALID: return "Invalid";
	case SNMP_COMMUNITY_ACCESS_MODE_FULL: return "Full";
	case SNMP_COMMUNITY_ACCESS_MODE_LIMITED: return "Limited";
	default: return NULL;
	}
}

/* ManagerNetworkProtocol.v1_5_0.SNMPAuthenticationProtocols */
enum rf_snmp_authentication_protocols {
	SNMP_AUTHENTICATION_PROTOCOLS_INVALID = 0,
	SNMP_AUTHENTICATION_PROTOCOLS_ACCOUNT = 1,
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
	case SNMP_AUTHENTICATION_PROTOCOLS_ACCOUNT: return "Account";
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

/* ManagerNetworkProtocol.v1_5_0.SNMPEncryptionProtocols */
enum rf_snmp_encryption_protocols {
	SNMP_ENCRYPTION_PROTOCOLS_INVALID = 0,
	SNMP_ENCRYPTION_PROTOCOLS_NONE = 1,
	SNMP_ENCRYPTION_PROTOCOLS_ACCOUNT = 2,
	SNMP_ENCRYPTION_PROTOCOLS_CBC_DES = 3,
	SNMP_ENCRYPTION_PROTOCOLS_CFB128_AES128 = 4,
	SNMP_ENCRYPTION_PROTOCOLS_CFB128_AES192 = 5,
	SNMP_ENCRYPTION_PROTOCOLS_CFB128_AES256 = 6,
};

static inline const char *rf_snmp_encryption_protocols_to_str(enum rf_snmp_encryption_protocols val)
{
	switch (val) {
	case SNMP_ENCRYPTION_PROTOCOLS_INVALID: return "Invalid";
	case SNMP_ENCRYPTION_PROTOCOLS_NONE: return "None";
	case SNMP_ENCRYPTION_PROTOCOLS_ACCOUNT: return "Account";
	case SNMP_ENCRYPTION_PROTOCOLS_CBC_DES: return "CBC_DES";
	case SNMP_ENCRYPTION_PROTOCOLS_CFB128_AES128: return "CFB128_AES128";
	case SNMP_ENCRYPTION_PROTOCOLS_CFB128_AES192: return "CFB128_AES192";
	case SNMP_ENCRYPTION_PROTOCOLS_CFB128_AES256: return "CFB128_AES256";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_MANAGER_NETWORK_PROTOCOL_H */

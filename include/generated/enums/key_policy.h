/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_KEY_POLICY_H
#define REDFISH_ENUM_KEY_POLICY_H

#include <stddef.h>

/* KeyPolicy.v1_0_0.KeyPolicyType */
enum rf_key_policy_type {
	KEY_POLICY_TYPE_INVALID = 0,
	KEY_POLICY_TYPE_NVMEOF = 1,
};

static inline const char *rf_key_policy_type_to_str(enum rf_key_policy_type val)
{
	switch (val) {
	case KEY_POLICY_TYPE_INVALID: return "Invalid";
	case KEY_POLICY_TYPE_NVMEOF: return "NVMeoF";
	default: return NULL;
	}
}

/* KeyPolicy.v1_0_0.NVMeoFSecurityProtocolType */
enum rf_nvmeof_security_protocol_type {
	NVMEOF_SECURITY_PROTOCOL_TYPE_INVALID = 0,
	NVMEOF_SECURITY_PROTOCOL_TYPE_DHHC = 1,
	NVMEOF_SECURITY_PROTOCOL_TYPE_TLS_PSK = 2,
	NVMEOF_SECURITY_PROTOCOL_TYPE_OEM = 3,
};

static inline const char *rf_nvmeof_security_protocol_type_to_str(enum rf_nvmeof_security_protocol_type val)
{
	switch (val) {
	case NVMEOF_SECURITY_PROTOCOL_TYPE_INVALID: return "Invalid";
	case NVMEOF_SECURITY_PROTOCOL_TYPE_DHHC: return "DHHC";
	case NVMEOF_SECURITY_PROTOCOL_TYPE_TLS_PSK: return "TLS_PSK";
	case NVMEOF_SECURITY_PROTOCOL_TYPE_OEM: return "OEM";
	default: return NULL;
	}
}

/* KeyPolicy.v1_0_0.NVMeoFSecureHashType */
enum rf_nvmeof_secure_hash_type {
	NVMEOF_SECURE_HASH_TYPE_INVALID = 0,
	NVMEOF_SECURE_HASH_TYPE_SHA256 = 1,
	NVMEOF_SECURE_HASH_TYPE_SHA384 = 2,
	NVMEOF_SECURE_HASH_TYPE_SHA512 = 3,
};

static inline const char *rf_nvmeof_secure_hash_type_to_str(enum rf_nvmeof_secure_hash_type val)
{
	switch (val) {
	case NVMEOF_SECURE_HASH_TYPE_INVALID: return "Invalid";
	case NVMEOF_SECURE_HASH_TYPE_SHA256: return "SHA256";
	case NVMEOF_SECURE_HASH_TYPE_SHA384: return "SHA384";
	case NVMEOF_SECURE_HASH_TYPE_SHA512: return "SHA512";
	default: return NULL;
	}
}

/* KeyPolicy.v1_0_0.NVMeoFSecurityTransportType */
enum rf_nvmeof_security_transport_type {
	NVMEOF_SECURITY_TRANSPORT_TYPE_INVALID = 0,
	NVMEOF_SECURITY_TRANSPORT_TYPE_TLSV2 = 1,
	NVMEOF_SECURITY_TRANSPORT_TYPE_TLSV3 = 2,
};

static inline const char *rf_nvmeof_security_transport_type_to_str(enum rf_nvmeof_security_transport_type val)
{
	switch (val) {
	case NVMEOF_SECURITY_TRANSPORT_TYPE_INVALID: return "Invalid";
	case NVMEOF_SECURITY_TRANSPORT_TYPE_TLSV2: return "TLSv2";
	case NVMEOF_SECURITY_TRANSPORT_TYPE_TLSV3: return "TLSv3";
	default: return NULL;
	}
}

/* KeyPolicy.v1_0_0.NVMeoFCipherSuiteType */
enum rf_nvmeof_cipher_suite_type {
	NVMEOF_CIPHER_SUITE_TYPE_INVALID = 0,
	NVMEOF_CIPHER_SUITE_TYPE_TLS_AES_128_GCM_SHA256 = 1,
	NVMEOF_CIPHER_SUITE_TYPE_TLS_AES_256_GCM_SHA384 = 2,
};

static inline const char *rf_nvmeof_cipher_suite_type_to_str(enum rf_nvmeof_cipher_suite_type val)
{
	switch (val) {
	case NVMEOF_CIPHER_SUITE_TYPE_INVALID: return "Invalid";
	case NVMEOF_CIPHER_SUITE_TYPE_TLS_AES_128_GCM_SHA256: return "TLS_AES_128_GCM_SHA256";
	case NVMEOF_CIPHER_SUITE_TYPE_TLS_AES_256_GCM_SHA384: return "TLS_AES_256_GCM_SHA384";
	default: return NULL;
	}
}

/* KeyPolicy.v1_0_0.NVMeoFDHGroupType */
enum rf_nvmeof_dh_group_type {
	NVMEOFDH_GROUP_TYPE_INVALID = 0,
	NVMEOFDH_GROUP_TYPE_FFDHE2048 = 1,
	NVMEOFDH_GROUP_TYPE_FFDHE3072 = 2,
	NVMEOFDH_GROUP_TYPE_FFDHE4096 = 3,
	NVMEOFDH_GROUP_TYPE_FFDHE6144 = 4,
	NVMEOFDH_GROUP_TYPE_FFDHE8192 = 5,
};

static inline const char *rf_nvmeof_dh_group_type_to_str(enum rf_nvmeof_dh_group_type val)
{
	switch (val) {
	case NVMEOFDH_GROUP_TYPE_INVALID: return "Invalid";
	case NVMEOFDH_GROUP_TYPE_FFDHE2048: return "FFDHE2048";
	case NVMEOFDH_GROUP_TYPE_FFDHE3072: return "FFDHE3072";
	case NVMEOFDH_GROUP_TYPE_FFDHE4096: return "FFDHE4096";
	case NVMEOFDH_GROUP_TYPE_FFDHE6144: return "FFDHE6144";
	case NVMEOFDH_GROUP_TYPE_FFDHE8192: return "FFDHE8192";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_KEY_POLICY_H */

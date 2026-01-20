/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_KEY_H
#define REDFISH_ENUM_KEY_H

#include <stddef.h>

/* Key.SSHKeyType */
enum rf_ssh_key_type {
	SSH_KEY_TYPE_INVALID = 0,
	SSH_KEY_TYPE_RSA = 1,
	SSH_KEY_TYPE_DSA = 2,
	SSH_KEY_TYPE_ECDSA = 3,
	SSH_KEY_TYPE_ED25519 = 4,
};

static inline const char *rf_ssh_key_type_to_str(enum rf_ssh_key_type val)
{
	switch (val) {
	case SSH_KEY_TYPE_INVALID: return "Invalid";
	case SSH_KEY_TYPE_RSA: return "RSA";
	case SSH_KEY_TYPE_DSA: return "DSA";
	case SSH_KEY_TYPE_ECDSA: return "ECDSA";
	case SSH_KEY_TYPE_ED25519: return "Ed25519";
	default: return NULL;
	}
}

/* Key.ECDSACurveType */
enum rf_ecdsa_curve_type {
	ECDSA_CURVE_TYPE_INVALID = 0,
	ECDSA_CURVE_TYPE_NISTP256 = 1,
	ECDSA_CURVE_TYPE_NISTP384 = 2,
	ECDSA_CURVE_TYPE_NISTP521 = 3,
	ECDSA_CURVE_TYPE_NISTK163 = 4,
	ECDSA_CURVE_TYPE_NISTP192 = 5,
	ECDSA_CURVE_TYPE_NISTP224 = 6,
	ECDSA_CURVE_TYPE_NISTK233 = 7,
	ECDSA_CURVE_TYPE_NISTB233 = 8,
	ECDSA_CURVE_TYPE_NISTK283 = 9,
	ECDSA_CURVE_TYPE_NISTK409 = 10,
	ECDSA_CURVE_TYPE_NISTB409 = 11,
	ECDSA_CURVE_TYPE_NISTT571 = 12,
};

static inline const char *rf_ecdsa_curve_type_to_str(enum rf_ecdsa_curve_type val)
{
	switch (val) {
	case ECDSA_CURVE_TYPE_INVALID: return "Invalid";
	case ECDSA_CURVE_TYPE_NISTP256: return "NISTP256";
	case ECDSA_CURVE_TYPE_NISTP384: return "NISTP384";
	case ECDSA_CURVE_TYPE_NISTP521: return "NISTP521";
	case ECDSA_CURVE_TYPE_NISTK163: return "NISTK163";
	case ECDSA_CURVE_TYPE_NISTP192: return "NISTP192";
	case ECDSA_CURVE_TYPE_NISTP224: return "NISTP224";
	case ECDSA_CURVE_TYPE_NISTK233: return "NISTK233";
	case ECDSA_CURVE_TYPE_NISTB233: return "NISTB233";
	case ECDSA_CURVE_TYPE_NISTK283: return "NISTK283";
	case ECDSA_CURVE_TYPE_NISTK409: return "NISTK409";
	case ECDSA_CURVE_TYPE_NISTB409: return "NISTB409";
	case ECDSA_CURVE_TYPE_NISTT571: return "NISTT571";
	default: return NULL;
	}
}

/* Key.v1_0_0.KeyType */
enum rf_key_type {
	KEY_TYPE_INVALID = 0,
	KEY_TYPE_NVMEOF = 1,
	KEY_TYPE_SSH = 2,
};

static inline const char *rf_key_type_to_str(enum rf_key_type val)
{
	switch (val) {
	case KEY_TYPE_INVALID: return "Invalid";
	case KEY_TYPE_NVMEOF: return "NVMeoF";
	case KEY_TYPE_SSH: return "SSH";
	default: return NULL;
	}
}

/* Key.v1_0_0.NVMeoFSecurityProtocolType */
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

/* Key.v1_0_0.NVMeoFSecureHashType */
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

#endif /* REDFISH_ENUM_KEY_H */

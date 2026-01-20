/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_CERTIFICATE_H
#define REDFISH_ENUM_CERTIFICATE_H

#include <stddef.h>

/* Certificate.CertificateType */
enum rf_certificate_type {
	CERTIFICATE_TYPE_INVALID = 0,
	CERTIFICATE_TYPE_PEM = 1,
	CERTIFICATE_TYPE_PE_MCHAIN = 2,
	CERTIFICATE_TYPE_PKCS7 = 3,
	CERTIFICATE_TYPE_PKCS12 = 4,
};

static inline const char *rf_certificate_type_to_str(enum rf_certificate_type val)
{
	switch (val) {
	case CERTIFICATE_TYPE_INVALID: return "Invalid";
	case CERTIFICATE_TYPE_PEM: return "PEM";
	case CERTIFICATE_TYPE_PE_MCHAIN: return "PEMchain";
	case CERTIFICATE_TYPE_PKCS7: return "PKCS7";
	case CERTIFICATE_TYPE_PKCS12: return "PKCS12";
	default: return NULL;
	}
}

/* Certificate.CertificateUsageType */
enum rf_certificate_usage_type {
	CERTIFICATE_USAGE_TYPE_INVALID = 0,
	CERTIFICATE_USAGE_TYPE_USER = 1,
	CERTIFICATE_USAGE_TYPE_WEB = 2,
	CERTIFICATE_USAGE_TYPE_SSH = 3,
	CERTIFICATE_USAGE_TYPE_DEVICE = 4,
	CERTIFICATE_USAGE_TYPE_PLATFORM = 5,
	CERTIFICATE_USAGE_TYPE_BIOS = 6,
	CERTIFICATE_USAGE_TYPE_I_DEV_ID = 7,
	CERTIFICATE_USAGE_TYPE_L_DEV_ID = 8,
	CERTIFICATE_USAGE_TYPE_IAK = 9,
	CERTIFICATE_USAGE_TYPE_LAK = 10,
	CERTIFICATE_USAGE_TYPE_EK = 11,
};

static inline const char *rf_certificate_usage_type_to_str(enum rf_certificate_usage_type val)
{
	switch (val) {
	case CERTIFICATE_USAGE_TYPE_INVALID: return "Invalid";
	case CERTIFICATE_USAGE_TYPE_USER: return "User";
	case CERTIFICATE_USAGE_TYPE_WEB: return "Web";
	case CERTIFICATE_USAGE_TYPE_SSH: return "SSH";
	case CERTIFICATE_USAGE_TYPE_DEVICE: return "Device";
	case CERTIFICATE_USAGE_TYPE_PLATFORM: return "Platform";
	case CERTIFICATE_USAGE_TYPE_BIOS: return "BIOS";
	case CERTIFICATE_USAGE_TYPE_I_DEV_ID: return "IDevID";
	case CERTIFICATE_USAGE_TYPE_L_DEV_ID: return "LDevID";
	case CERTIFICATE_USAGE_TYPE_IAK: return "IAK";
	case CERTIFICATE_USAGE_TYPE_LAK: return "LAK";
	case CERTIFICATE_USAGE_TYPE_EK: return "EK";
	default: return NULL;
	}
}

/* Certificate.KeyUsage */
enum rf_key_usage {
	KEY_USAGE_INVALID = 0,
	KEY_USAGE_DIGITAL_SIGNATURE = 1,
	KEY_USAGE_NON_REPUDIATION = 2,
	KEY_USAGE_KEY_ENCIPHERMENT = 3,
	KEY_USAGE_DATA_ENCIPHERMENT = 4,
	KEY_USAGE_KEY_AGREEMENT = 5,
	KEY_USAGE_KEY_CERT_SIGN = 6,
	KEY_USAGE_CRL_SIGNING = 7,
	KEY_USAGE_ENCIPHER_ONLY = 8,
	KEY_USAGE_DECIPHER_ONLY = 9,
	KEY_USAGE_SERVER_AUTHENTICATION = 10,
	KEY_USAGE_CLIENT_AUTHENTICATION = 11,
	KEY_USAGE_CODE_SIGNING = 12,
	KEY_USAGE_EMAIL_PROTECTION = 13,
	KEY_USAGE_TIMESTAMPING = 14,
	KEY_USAGE_OCSP_SIGNING = 15,
};

static inline const char *rf_key_usage_to_str(enum rf_key_usage val)
{
	switch (val) {
	case KEY_USAGE_INVALID: return "Invalid";
	case KEY_USAGE_DIGITAL_SIGNATURE: return "DigitalSignature";
	case KEY_USAGE_NON_REPUDIATION: return "NonRepudiation";
	case KEY_USAGE_KEY_ENCIPHERMENT: return "KeyEncipherment";
	case KEY_USAGE_DATA_ENCIPHERMENT: return "DataEncipherment";
	case KEY_USAGE_KEY_AGREEMENT: return "KeyAgreement";
	case KEY_USAGE_KEY_CERT_SIGN: return "KeyCertSign";
	case KEY_USAGE_CRL_SIGNING: return "CRLSigning";
	case KEY_USAGE_ENCIPHER_ONLY: return "EncipherOnly";
	case KEY_USAGE_DECIPHER_ONLY: return "DecipherOnly";
	case KEY_USAGE_SERVER_AUTHENTICATION: return "ServerAuthentication";
	case KEY_USAGE_CLIENT_AUTHENTICATION: return "ClientAuthentication";
	case KEY_USAGE_CODE_SIGNING: return "CodeSigning";
	case KEY_USAGE_EMAIL_PROTECTION: return "EmailProtection";
	case KEY_USAGE_TIMESTAMPING: return "Timestamping";
	case KEY_USAGE_OCSP_SIGNING: return "OCSPSigning";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_CERTIFICATE_H */

/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_ACCOUNT_SERVICE_H
#define REDFISH_ENUM_ACCOUNT_SERVICE_H

#include <stddef.h>

/* AccountService.MFABypassType */
enum rf_mfa_bypass_type {
	MFA_BYPASS_TYPE_INVALID = 0,
	MFA_BYPASS_TYPE_ALL = 1,
	MFA_BYPASS_TYPE_SECUR_ID = 2,
	MFA_BYPASS_TYPE_GOOGLE_AUTHENTICATOR = 3,
	MFA_BYPASS_TYPE_MICROSOFT_AUTHENTICATOR = 4,
	MFA_BYPASS_TYPE_CLIENT_CERTIFICATE = 5,
	MFA_BYPASS_TYPE_ONE_TIME_PASSCODE = 6,
	MFA_BYPASS_TYPE_TIME_BASED_ONE_TIME_PASSWORD = 7,
	MFA_BYPASS_TYPE_OEM = 8,
};

static inline const char *rf_mfa_bypass_type_to_str(enum rf_mfa_bypass_type val)
{
	switch (val) {
	case MFA_BYPASS_TYPE_INVALID: return "Invalid";
	case MFA_BYPASS_TYPE_ALL: return "All";
	case MFA_BYPASS_TYPE_SECUR_ID: return "SecurID";
	case MFA_BYPASS_TYPE_GOOGLE_AUTHENTICATOR: return "GoogleAuthenticator";
	case MFA_BYPASS_TYPE_MICROSOFT_AUTHENTICATOR: return "MicrosoftAuthenticator";
	case MFA_BYPASS_TYPE_CLIENT_CERTIFICATE: return "ClientCertificate";
	case MFA_BYPASS_TYPE_ONE_TIME_PASSCODE: return "OneTimePasscode";
	case MFA_BYPASS_TYPE_TIME_BASED_ONE_TIME_PASSWORD: return "TimeBasedOneTimePassword";
	case MFA_BYPASS_TYPE_OEM: return "OEM";
	default: return NULL;
	}
}

/* AccountService.v1_3_0.LocalAccountAuth */
enum rf_local_account_auth {
	LOCAL_ACCOUNT_AUTH_INVALID = 0,
	LOCAL_ACCOUNT_AUTH_ENABLED = 1,
	LOCAL_ACCOUNT_AUTH_DISABLED = 2,
	LOCAL_ACCOUNT_AUTH_FALLBACK = 3,
	LOCAL_ACCOUNT_AUTH_LOCAL_FIRST = 4,
};

static inline const char *rf_local_account_auth_to_str(enum rf_local_account_auth val)
{
	switch (val) {
	case LOCAL_ACCOUNT_AUTH_INVALID: return "Invalid";
	case LOCAL_ACCOUNT_AUTH_ENABLED: return "Enabled";
	case LOCAL_ACCOUNT_AUTH_DISABLED: return "Disabled";
	case LOCAL_ACCOUNT_AUTH_FALLBACK: return "Fallback";
	case LOCAL_ACCOUNT_AUTH_LOCAL_FIRST: return "LocalFirst";
	default: return NULL;
	}
}

/* AccountService.v1_3_0.AccountProviderTypes */
enum rf_account_provider_types {
	ACCOUNT_PROVIDER_TYPES_INVALID = 0,
	ACCOUNT_PROVIDER_TYPES_REDFISH_SERVICE = 1,
	ACCOUNT_PROVIDER_TYPES_ACTIVE_DIRECTORY_SERVICE = 2,
	ACCOUNT_PROVIDER_TYPES_LDAP_SERVICE = 3,
	ACCOUNT_PROVIDER_TYPES_OEM = 4,
	ACCOUNT_PROVIDER_TYPES_TACAC_SPLUS = 5,
	ACCOUNT_PROVIDER_TYPES_O_AUTH2 = 6,
};

static inline const char *rf_account_provider_types_to_str(enum rf_account_provider_types val)
{
	switch (val) {
	case ACCOUNT_PROVIDER_TYPES_INVALID: return "Invalid";
	case ACCOUNT_PROVIDER_TYPES_REDFISH_SERVICE: return "RedfishService";
	case ACCOUNT_PROVIDER_TYPES_ACTIVE_DIRECTORY_SERVICE: return "ActiveDirectoryService";
	case ACCOUNT_PROVIDER_TYPES_LDAP_SERVICE: return "LDAPService";
	case ACCOUNT_PROVIDER_TYPES_OEM: return "OEM";
	case ACCOUNT_PROVIDER_TYPES_TACAC_SPLUS: return "TACACSplus";
	case ACCOUNT_PROVIDER_TYPES_O_AUTH2: return "OAuth2";
	default: return NULL;
	}
}

/* AccountService.v1_3_0.AuthenticationTypes */
enum rf_authentication_types {
	AUTHENTICATION_TYPES_INVALID = 0,
	AUTHENTICATION_TYPES_TOKEN = 1,
	AUTHENTICATION_TYPES_KERBEROS_KEYTAB = 2,
	AUTHENTICATION_TYPES_USERNAME_AND_PASSWORD = 3,
	AUTHENTICATION_TYPES_OEM = 4,
};

static inline const char *rf_authentication_types_to_str(enum rf_authentication_types val)
{
	switch (val) {
	case AUTHENTICATION_TYPES_INVALID: return "Invalid";
	case AUTHENTICATION_TYPES_TOKEN: return "Token";
	case AUTHENTICATION_TYPES_KERBEROS_KEYTAB: return "KerberosKeytab";
	case AUTHENTICATION_TYPES_USERNAME_AND_PASSWORD: return "UsernameAndPassword";
	case AUTHENTICATION_TYPES_OEM: return "OEM";
	default: return NULL;
	}
}

/* AccountService.v1_8_0.TACACSplusPasswordExchangeProtocol */
enum rf_tacac_splus_password_exchange_protocol {
	TACAC_SPLUS_PASSWORD_EXCHANGE_PROTOCOL_INVALID = 0,
	TACAC_SPLUS_PASSWORD_EXCHANGE_PROTOCOL_ASCII = 1,
	TACAC_SPLUS_PASSWORD_EXCHANGE_PROTOCOL_PAP = 2,
	TACAC_SPLUS_PASSWORD_EXCHANGE_PROTOCOL_CHAP = 3,
	TACAC_SPLUS_PASSWORD_EXCHANGE_PROTOCOL_MSCHA_PV1 = 4,
	TACAC_SPLUS_PASSWORD_EXCHANGE_PROTOCOL_MSCHA_PV2 = 5,
};

static inline const char *rf_tacac_splus_password_exchange_protocol_to_str(enum rf_tacac_splus_password_exchange_protocol val)
{
	switch (val) {
	case TACAC_SPLUS_PASSWORD_EXCHANGE_PROTOCOL_INVALID: return "Invalid";
	case TACAC_SPLUS_PASSWORD_EXCHANGE_PROTOCOL_ASCII: return "ASCII";
	case TACAC_SPLUS_PASSWORD_EXCHANGE_PROTOCOL_PAP: return "PAP";
	case TACAC_SPLUS_PASSWORD_EXCHANGE_PROTOCOL_CHAP: return "CHAP";
	case TACAC_SPLUS_PASSWORD_EXCHANGE_PROTOCOL_MSCHA_PV1: return "MSCHAPv1";
	case TACAC_SPLUS_PASSWORD_EXCHANGE_PROTOCOL_MSCHA_PV2: return "MSCHAPv2";
	default: return NULL;
	}
}

/* AccountService.v1_10_0.OAuth2Mode */
enum rf_o_auth2_mode {
	O_AUTH2_MODE_INVALID = 0,
	O_AUTH2_MODE_DISCOVERY = 1,
	O_AUTH2_MODE_OFFLINE = 2,
};

static inline const char *rf_o_auth2_mode_to_str(enum rf_o_auth2_mode val)
{
	switch (val) {
	case O_AUTH2_MODE_INVALID: return "Invalid";
	case O_AUTH2_MODE_DISCOVERY: return "Discovery";
	case O_AUTH2_MODE_OFFLINE: return "Offline";
	default: return NULL;
	}
}

/* AccountService.v1_12_0.CertificateMappingAttribute */
enum rf_certificate_mapping_attribute {
	CERTIFICATE_MAPPING_ATTRIBUTE_INVALID = 0,
	CERTIFICATE_MAPPING_ATTRIBUTE_WHOLE = 1,
	CERTIFICATE_MAPPING_ATTRIBUTE_COMMON_NAME = 2,
	CERTIFICATE_MAPPING_ATTRIBUTE_USER_PRINCIPAL_NAME = 3,
};

static inline const char *rf_certificate_mapping_attribute_to_str(enum rf_certificate_mapping_attribute val)
{
	switch (val) {
	case CERTIFICATE_MAPPING_ATTRIBUTE_INVALID: return "Invalid";
	case CERTIFICATE_MAPPING_ATTRIBUTE_WHOLE: return "Whole";
	case CERTIFICATE_MAPPING_ATTRIBUTE_COMMON_NAME: return "CommonName";
	case CERTIFICATE_MAPPING_ATTRIBUTE_USER_PRINCIPAL_NAME: return "UserPrincipalName";
	default: return NULL;
	}
}

/* AccountService.v1_15_0.BasicAuthState */
enum rf_basic_auth_state {
	BASIC_AUTH_STATE_INVALID = 0,
	BASIC_AUTH_STATE_ENABLED = 1,
	BASIC_AUTH_STATE_UNADVERTISED = 2,
	BASIC_AUTH_STATE_DISABLED = 3,
};

static inline const char *rf_basic_auth_state_to_str(enum rf_basic_auth_state val)
{
	switch (val) {
	case BASIC_AUTH_STATE_INVALID: return "Invalid";
	case BASIC_AUTH_STATE_ENABLED: return "Enabled";
	case BASIC_AUTH_STATE_UNADVERTISED: return "Unadvertised";
	case BASIC_AUTH_STATE_DISABLED: return "Disabled";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_ACCOUNT_SERVICE_H */

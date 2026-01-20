/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_EXTERNAL_ACCOUNT_PROVIDER_H
#define REDFISH_ENUM_EXTERNAL_ACCOUNT_PROVIDER_H

#include <stddef.h>

/* ExternalAccountProvider.v1_0_0.AccountProviderTypes */
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

/* ExternalAccountProvider.v1_0_0.AuthenticationTypes */
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

/* ExternalAccountProvider.v1_2_0.TACACSplusPasswordExchangeProtocol */
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

/* ExternalAccountProvider.v1_3_0.OAuth2Mode */
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

#endif /* REDFISH_ENUM_EXTERNAL_ACCOUNT_PROVIDER_H */

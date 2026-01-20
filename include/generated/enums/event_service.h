/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_EVENT_SERVICE_H
#define REDFISH_ENUM_EVENT_SERVICE_H

#include <stddef.h>

/* EventService.v1_5_0.SMTPConnectionProtocol */
enum rf_smtp_connection_protocol {
	SMTP_CONNECTION_PROTOCOL_INVALID = 0,
	SMTP_CONNECTION_PROTOCOL_NONE = 1,
	SMTP_CONNECTION_PROTOCOL_AUTO_DETECT = 2,
	SMTP_CONNECTION_PROTOCOL_START_TLS = 3,
	SMTP_CONNECTION_PROTOCOL_TLS_SSL = 4,
};

static inline const char *rf_smtp_connection_protocol_to_str(enum rf_smtp_connection_protocol val)
{
	switch (val) {
	case SMTP_CONNECTION_PROTOCOL_INVALID: return "Invalid";
	case SMTP_CONNECTION_PROTOCOL_NONE: return "None";
	case SMTP_CONNECTION_PROTOCOL_AUTO_DETECT: return "AutoDetect";
	case SMTP_CONNECTION_PROTOCOL_START_TLS: return "StartTLS";
	case SMTP_CONNECTION_PROTOCOL_TLS_SSL: return "TLS_SSL";
	default: return NULL;
	}
}

/* EventService.v1_5_0.SMTPAuthenticationMethods */
enum rf_smtp_authentication_methods {
	SMTP_AUTHENTICATION_METHODS_INVALID = 0,
	SMTP_AUTHENTICATION_METHODS_NONE = 1,
	SMTP_AUTHENTICATION_METHODS_AUTO_DETECT = 2,
	SMTP_AUTHENTICATION_METHODS_PLAIN = 3,
	SMTP_AUTHENTICATION_METHODS_LOGIN = 4,
	SMTP_AUTHENTICATION_METHODS_CRAM_MD5 = 5,
};

static inline const char *rf_smtp_authentication_methods_to_str(enum rf_smtp_authentication_methods val)
{
	switch (val) {
	case SMTP_AUTHENTICATION_METHODS_INVALID: return "Invalid";
	case SMTP_AUTHENTICATION_METHODS_NONE: return "None";
	case SMTP_AUTHENTICATION_METHODS_AUTO_DETECT: return "AutoDetect";
	case SMTP_AUTHENTICATION_METHODS_PLAIN: return "Plain";
	case SMTP_AUTHENTICATION_METHODS_LOGIN: return "Login";
	case SMTP_AUTHENTICATION_METHODS_CRAM_MD5: return "CRAM_MD5";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_EVENT_SERVICE_H */

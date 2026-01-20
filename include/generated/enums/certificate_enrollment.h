/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_CERTIFICATE_ENROLLMENT_H
#define REDFISH_ENUM_CERTIFICATE_ENROLLMENT_H

#include <stddef.h>

/* CertificateEnrollment.EnrollmentProtocolType */
enum rf_enrollment_protocol_type {
	ENROLLMENT_PROTOCOL_TYPE_INVALID = 0,
	ENROLLMENT_PROTOCOL_TYPE_ACME = 1,
	ENROLLMENT_PROTOCOL_TYPE_SCEP = 2,
	ENROLLMENT_PROTOCOL_TYPE_OEM = 3,
};

static inline const char *rf_enrollment_protocol_type_to_str(enum rf_enrollment_protocol_type val)
{
	switch (val) {
	case ENROLLMENT_PROTOCOL_TYPE_INVALID: return "Invalid";
	case ENROLLMENT_PROTOCOL_TYPE_ACME: return "ACME";
	case ENROLLMENT_PROTOCOL_TYPE_SCEP: return "SCEP";
	case ENROLLMENT_PROTOCOL_TYPE_OEM: return "OEM";
	default: return NULL;
	}
}

/* CertificateEnrollment.v1_0_0.LastOperationType */
enum rf_last_operation_type {
	LAST_OPERATION_TYPE_INVALID = 0,
	LAST_OPERATION_TYPE_RENEW = 1,
	LAST_OPERATION_TYPE_UPDATE_ACME_EMAIL = 2,
};

static inline const char *rf_last_operation_type_to_str(enum rf_last_operation_type val)
{
	switch (val) {
	case LAST_OPERATION_TYPE_INVALID: return "Invalid";
	case LAST_OPERATION_TYPE_RENEW: return "Renew";
	case LAST_OPERATION_TYPE_UPDATE_ACME_EMAIL: return "UpdateAcmeEmail";
	default: return NULL;
	}
}

/* CertificateEnrollment.v1_0_0.OperationStatus */
enum rf_operation_status {
	OPERATION_STATUS_INVALID = 0,
	OPERATION_STATUS_SUCCESS = 1,
	OPERATION_STATUS_FAILED = 2,
	OPERATION_STATUS_IN_PROGRESS = 3,
	OPERATION_STATUS_UNKNOWN = 4,
};

static inline const char *rf_operation_status_to_str(enum rf_operation_status val)
{
	switch (val) {
	case OPERATION_STATUS_INVALID: return "Invalid";
	case OPERATION_STATUS_SUCCESS: return "Success";
	case OPERATION_STATUS_FAILED: return "Failed";
	case OPERATION_STATUS_IN_PROGRESS: return "InProgress";
	case OPERATION_STATUS_UNKNOWN: return "Unknown";
	default: return NULL;
	}
}

/* CertificateEnrollment.v1_0_0.ACMEChallengeType */
enum rf_acme_challenge_type {
	ACME_CHALLENGE_TYPE_INVALID = 0,
	ACME_CHALLENGE_TYPE_HTTP01 = 1,
	ACME_CHALLENGE_TYPE_DNS01 = 2,
};

static inline const char *rf_acme_challenge_type_to_str(enum rf_acme_challenge_type val)
{
	switch (val) {
	case ACME_CHALLENGE_TYPE_INVALID: return "Invalid";
	case ACME_CHALLENGE_TYPE_HTTP01: return "Http01";
	case ACME_CHALLENGE_TYPE_DNS01: return "Dns01";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_CERTIFICATE_ENROLLMENT_H */

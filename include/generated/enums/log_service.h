/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_LOG_SERVICE_H
#define REDFISH_ENUM_LOG_SERVICE_H

#include <stddef.h>

/* LogService.v1_0_0.OverWritePolicy */
enum rf_over_write_policy {
	OVER_WRITE_POLICY_INVALID = 0,
	OVER_WRITE_POLICY_UNKNOWN = 1,
	OVER_WRITE_POLICY_WRAPS_WHEN_FULL = 2,
	OVER_WRITE_POLICY_NEVER_OVER_WRITES = 3,
};

static inline const char *rf_over_write_policy_to_str(enum rf_over_write_policy val)
{
	switch (val) {
	case OVER_WRITE_POLICY_INVALID: return "Invalid";
	case OVER_WRITE_POLICY_UNKNOWN: return "Unknown";
	case OVER_WRITE_POLICY_WRAPS_WHEN_FULL: return "WrapsWhenFull";
	case OVER_WRITE_POLICY_NEVER_OVER_WRITES: return "NeverOverWrites";
	default: return NULL;
	}
}

/* LogService.v1_1_0.LogEntryTypes */
enum rf_log_entry_types {
	LOG_ENTRY_TYPES_INVALID = 0,
	LOG_ENTRY_TYPES_EVENT = 1,
	LOG_ENTRY_TYPES_SEL = 2,
	LOG_ENTRY_TYPES_MULTIPLE = 3,
	LOG_ENTRY_TYPES_OEM = 4,
	LOG_ENTRY_TYPES_CXL = 5,
};

static inline const char *rf_log_entry_types_to_str(enum rf_log_entry_types val)
{
	switch (val) {
	case LOG_ENTRY_TYPES_INVALID: return "Invalid";
	case LOG_ENTRY_TYPES_EVENT: return "Event";
	case LOG_ENTRY_TYPES_SEL: return "SEL";
	case LOG_ENTRY_TYPES_MULTIPLE: return "Multiple";
	case LOG_ENTRY_TYPES_OEM: return "OEM";
	case LOG_ENTRY_TYPES_CXL: return "CXL";
	default: return NULL;
	}
}

/* LogService.v1_2_0.SyslogSeverity */
enum rf_syslog_severity {
	SYSLOG_SEVERITY_INVALID = 0,
	SYSLOG_SEVERITY_EMERGENCY = 1,
	SYSLOG_SEVERITY_ALERT = 2,
	SYSLOG_SEVERITY_CRITICAL = 3,
	SYSLOG_SEVERITY_ERROR = 4,
	SYSLOG_SEVERITY_WARNING = 5,
	SYSLOG_SEVERITY_NOTICE = 6,
	SYSLOG_SEVERITY_INFORMATIONAL = 7,
	SYSLOG_SEVERITY_DEBUG = 8,
	SYSLOG_SEVERITY_ALL = 9,
};

static inline const char *rf_syslog_severity_to_str(enum rf_syslog_severity val)
{
	switch (val) {
	case SYSLOG_SEVERITY_INVALID: return "Invalid";
	case SYSLOG_SEVERITY_EMERGENCY: return "Emergency";
	case SYSLOG_SEVERITY_ALERT: return "Alert";
	case SYSLOG_SEVERITY_CRITICAL: return "Critical";
	case SYSLOG_SEVERITY_ERROR: return "Error";
	case SYSLOG_SEVERITY_WARNING: return "Warning";
	case SYSLOG_SEVERITY_NOTICE: return "Notice";
	case SYSLOG_SEVERITY_INFORMATIONAL: return "Informational";
	case SYSLOG_SEVERITY_DEBUG: return "Debug";
	case SYSLOG_SEVERITY_ALL: return "All";
	default: return NULL;
	}
}

/* LogService.v1_2_0.SyslogFacility */
enum rf_syslog_facility {
	SYSLOG_FACILITY_INVALID = 0,
	SYSLOG_FACILITY_KERN = 1,
	SYSLOG_FACILITY_USER = 2,
	SYSLOG_FACILITY_MAIL = 3,
	SYSLOG_FACILITY_DAEMON = 4,
	SYSLOG_FACILITY_AUTH = 5,
	SYSLOG_FACILITY_SYSLOG = 6,
	SYSLOG_FACILITY_LPR = 7,
	SYSLOG_FACILITY_NEWS = 8,
	SYSLOG_FACILITY_UUCP = 9,
	SYSLOG_FACILITY_CRON = 10,
	SYSLOG_FACILITY_AUTHPRIV = 11,
	SYSLOG_FACILITY_FTP = 12,
	SYSLOG_FACILITY_NTP = 13,
	SYSLOG_FACILITY_SECURITY = 14,
	SYSLOG_FACILITY_CONSOLE = 15,
	SYSLOG_FACILITY_SOLARIS_CRON = 16,
	SYSLOG_FACILITY_LOCAL0 = 17,
	SYSLOG_FACILITY_LOCAL1 = 18,
	SYSLOG_FACILITY_LOCAL2 = 19,
	SYSLOG_FACILITY_LOCAL3 = 20,
	SYSLOG_FACILITY_LOCAL4 = 21,
	SYSLOG_FACILITY_LOCAL5 = 22,
	SYSLOG_FACILITY_LOCAL6 = 23,
	SYSLOG_FACILITY_LOCAL7 = 24,
};

static inline const char *rf_syslog_facility_to_str(enum rf_syslog_facility val)
{
	switch (val) {
	case SYSLOG_FACILITY_INVALID: return "Invalid";
	case SYSLOG_FACILITY_KERN: return "Kern";
	case SYSLOG_FACILITY_USER: return "User";
	case SYSLOG_FACILITY_MAIL: return "Mail";
	case SYSLOG_FACILITY_DAEMON: return "Daemon";
	case SYSLOG_FACILITY_AUTH: return "Auth";
	case SYSLOG_FACILITY_SYSLOG: return "Syslog";
	case SYSLOG_FACILITY_LPR: return "LPR";
	case SYSLOG_FACILITY_NEWS: return "News";
	case SYSLOG_FACILITY_UUCP: return "UUCP";
	case SYSLOG_FACILITY_CRON: return "Cron";
	case SYSLOG_FACILITY_AUTHPRIV: return "Authpriv";
	case SYSLOG_FACILITY_FTP: return "FTP";
	case SYSLOG_FACILITY_NTP: return "NTP";
	case SYSLOG_FACILITY_SECURITY: return "Security";
	case SYSLOG_FACILITY_CONSOLE: return "Console";
	case SYSLOG_FACILITY_SOLARIS_CRON: return "SolarisCron";
	case SYSLOG_FACILITY_LOCAL0: return "Local0";
	case SYSLOG_FACILITY_LOCAL1: return "Local1";
	case SYSLOG_FACILITY_LOCAL2: return "Local2";
	case SYSLOG_FACILITY_LOCAL3: return "Local3";
	case SYSLOG_FACILITY_LOCAL4: return "Local4";
	case SYSLOG_FACILITY_LOCAL5: return "Local5";
	case SYSLOG_FACILITY_LOCAL6: return "Local6";
	case SYSLOG_FACILITY_LOCAL7: return "Local7";
	default: return NULL;
	}
}

/* LogService.v1_2_0.LogDiagnosticDataTypes */
enum rf_log_diagnostic_data_types {
	LOG_DIAGNOSTIC_DATA_TYPES_INVALID = 0,
	LOG_DIAGNOSTIC_DATA_TYPES_MANAGER = 1,
	LOG_DIAGNOSTIC_DATA_TYPES_PRE_OS = 2,
	LOG_DIAGNOSTIC_DATA_TYPES_OS = 3,
	LOG_DIAGNOSTIC_DATA_TYPES_OEM = 4,
	LOG_DIAGNOSTIC_DATA_TYPES_DEVICE = 5,
};

static inline const char *rf_log_diagnostic_data_types_to_str(enum rf_log_diagnostic_data_types val)
{
	switch (val) {
	case LOG_DIAGNOSTIC_DATA_TYPES_INVALID: return "Invalid";
	case LOG_DIAGNOSTIC_DATA_TYPES_MANAGER: return "Manager";
	case LOG_DIAGNOSTIC_DATA_TYPES_PRE_OS: return "PreOS";
	case LOG_DIAGNOSTIC_DATA_TYPES_OS: return "OS";
	case LOG_DIAGNOSTIC_DATA_TYPES_OEM: return "OEM";
	case LOG_DIAGNOSTIC_DATA_TYPES_DEVICE: return "Device";
	default: return NULL;
	}
}

/* LogService.v1_4_0.LogPurpose */
enum rf_log_purpose {
	LOG_PURPOSE_INVALID = 0,
	LOG_PURPOSE_DIAGNOSTIC = 1,
	LOG_PURPOSE_OPERATIONS = 2,
	LOG_PURPOSE_SECURITY = 3,
	LOG_PURPOSE_TELEMETRY = 4,
	LOG_PURPOSE_EXTERNAL_ENTITY = 5,
	LOG_PURPOSE_OEM = 6,
};

static inline const char *rf_log_purpose_to_str(enum rf_log_purpose val)
{
	switch (val) {
	case LOG_PURPOSE_INVALID: return "Invalid";
	case LOG_PURPOSE_DIAGNOSTIC: return "Diagnostic";
	case LOG_PURPOSE_OPERATIONS: return "Operations";
	case LOG_PURPOSE_SECURITY: return "Security";
	case LOG_PURPOSE_TELEMETRY: return "Telemetry";
	case LOG_PURPOSE_EXTERNAL_ENTITY: return "ExternalEntity";
	case LOG_PURPOSE_OEM: return "OEM";
	default: return NULL;
	}
}

/* LogService.v1_6_0.TransferProtocolType */
enum rf_transfer_protocol_type {
	TRANSFER_PROTOCOL_TYPE_INVALID = 0,
	TRANSFER_PROTOCOL_TYPE_CIFS = 1,
	TRANSFER_PROTOCOL_TYPE_FTP = 2,
	TRANSFER_PROTOCOL_TYPE_SFTP = 3,
	TRANSFER_PROTOCOL_TYPE_HTTP = 4,
	TRANSFER_PROTOCOL_TYPE_HTTPS = 5,
	TRANSFER_PROTOCOL_TYPE_NFS = 6,
	TRANSFER_PROTOCOL_TYPE_SCP = 7,
	TRANSFER_PROTOCOL_TYPE_TFTP = 8,
	TRANSFER_PROTOCOL_TYPE_OEM = 9,
};

static inline const char *rf_transfer_protocol_type_to_str(enum rf_transfer_protocol_type val)
{
	switch (val) {
	case TRANSFER_PROTOCOL_TYPE_INVALID: return "Invalid";
	case TRANSFER_PROTOCOL_TYPE_CIFS: return "CIFS";
	case TRANSFER_PROTOCOL_TYPE_FTP: return "FTP";
	case TRANSFER_PROTOCOL_TYPE_SFTP: return "SFTP";
	case TRANSFER_PROTOCOL_TYPE_HTTP: return "HTTP";
	case TRANSFER_PROTOCOL_TYPE_HTTPS: return "HTTPS";
	case TRANSFER_PROTOCOL_TYPE_NFS: return "NFS";
	case TRANSFER_PROTOCOL_TYPE_SCP: return "SCP";
	case TRANSFER_PROTOCOL_TYPE_TFTP: return "TFTP";
	case TRANSFER_PROTOCOL_TYPE_OEM: return "OEM";
	default: return NULL;
	}
}

/* LogService.v1_7_0.AutoClearResolvedEntries */
enum rf_auto_clear_resolved_entries {
	AUTO_CLEAR_RESOLVED_ENTRIES_INVALID = 0,
	AUTO_CLEAR_RESOLVED_ENTRIES_CLEAR_EVENT_GROUP = 1,
	AUTO_CLEAR_RESOLVED_ENTRIES_RETAIN_CAUSE_RESOLUTION_ENTRIES = 2,
	AUTO_CLEAR_RESOLVED_ENTRIES_UPDATE_CAUSE_ENTRY = 3,
	AUTO_CLEAR_RESOLVED_ENTRIES_NONE = 4,
};

static inline const char *rf_auto_clear_resolved_entries_to_str(enum rf_auto_clear_resolved_entries val)
{
	switch (val) {
	case AUTO_CLEAR_RESOLVED_ENTRIES_INVALID: return "Invalid";
	case AUTO_CLEAR_RESOLVED_ENTRIES_CLEAR_EVENT_GROUP: return "ClearEventGroup";
	case AUTO_CLEAR_RESOLVED_ENTRIES_RETAIN_CAUSE_RESOLUTION_ENTRIES: return "RetainCauseResolutionEntries";
	case AUTO_CLEAR_RESOLVED_ENTRIES_UPDATE_CAUSE_ENTRY: return "UpdateCauseEntry";
	case AUTO_CLEAR_RESOLVED_ENTRIES_NONE: return "None";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_LOG_SERVICE_H */

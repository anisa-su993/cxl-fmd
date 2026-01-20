/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_METRIC_DEFINITION_H
#define REDFISH_ENUM_METRIC_DEFINITION_H

#include <stddef.h>

/* MetricDefinition.v1_0_0.MetricType */
enum rf_metric_type {
	METRIC_TYPE_INVALID = 0,
	METRIC_TYPE_NUMERIC = 1,
	METRIC_TYPE_DISCRETE = 2,
	METRIC_TYPE_GAUGE = 3,
	METRIC_TYPE_COUNTER = 4,
	METRIC_TYPE_COUNTDOWN = 5,
	METRIC_TYPE_STRING = 6,
};

static inline const char *rf_metric_type_to_str(enum rf_metric_type val)
{
	switch (val) {
	case METRIC_TYPE_INVALID: return "Invalid";
	case METRIC_TYPE_NUMERIC: return "Numeric";
	case METRIC_TYPE_DISCRETE: return "Discrete";
	case METRIC_TYPE_GAUGE: return "Gauge";
	case METRIC_TYPE_COUNTER: return "Counter";
	case METRIC_TYPE_COUNTDOWN: return "Countdown";
	case METRIC_TYPE_STRING: return "String";
	default: return NULL;
	}
}

/* MetricDefinition.v1_0_0.ImplementationType */
enum rf_implementation_type {
	IMPLEMENTATION_TYPE_INVALID = 0,
	IMPLEMENTATION_TYPE_PHYSICAL_SENSOR = 1,
	IMPLEMENTATION_TYPE_CALCULATED = 2,
	IMPLEMENTATION_TYPE_SYNTHESIZED = 3,
	IMPLEMENTATION_TYPE_DIGITAL_METER = 4,
};

static inline const char *rf_implementation_type_to_str(enum rf_implementation_type val)
{
	switch (val) {
	case IMPLEMENTATION_TYPE_INVALID: return "Invalid";
	case IMPLEMENTATION_TYPE_PHYSICAL_SENSOR: return "PhysicalSensor";
	case IMPLEMENTATION_TYPE_CALCULATED: return "Calculated";
	case IMPLEMENTATION_TYPE_SYNTHESIZED: return "Synthesized";
	case IMPLEMENTATION_TYPE_DIGITAL_METER: return "DigitalMeter";
	default: return NULL;
	}
}

/* MetricDefinition.v1_0_0.MetricDataType */
enum rf_metric_data_type {
	METRIC_DATA_TYPE_INVALID = 0,
	METRIC_DATA_TYPE_BOOLEAN = 1,
	METRIC_DATA_TYPE_DATE_TIME = 2,
	METRIC_DATA_TYPE_DECIMAL = 3,
	METRIC_DATA_TYPE_INTEGER = 4,
	METRIC_DATA_TYPE_STRING = 5,
	METRIC_DATA_TYPE_ENUMERATION = 6,
};

static inline const char *rf_metric_data_type_to_str(enum rf_metric_data_type val)
{
	switch (val) {
	case METRIC_DATA_TYPE_INVALID: return "Invalid";
	case METRIC_DATA_TYPE_BOOLEAN: return "Boolean";
	case METRIC_DATA_TYPE_DATE_TIME: return "DateTime";
	case METRIC_DATA_TYPE_DECIMAL: return "Decimal";
	case METRIC_DATA_TYPE_INTEGER: return "Integer";
	case METRIC_DATA_TYPE_STRING: return "String";
	case METRIC_DATA_TYPE_ENUMERATION: return "Enumeration";
	default: return NULL;
	}
}

/* MetricDefinition.v1_0_0.Calculable */
enum rf_calculable {
	CALCULABLE_INVALID = 0,
	CALCULABLE_NON_CALCULATABLE = 1,
	CALCULABLE_SUMMABLE = 2,
	CALCULABLE_NON_SUMMABLE = 3,
};

static inline const char *rf_calculable_to_str(enum rf_calculable val)
{
	switch (val) {
	case CALCULABLE_INVALID: return "Invalid";
	case CALCULABLE_NON_CALCULATABLE: return "NonCalculatable";
	case CALCULABLE_SUMMABLE: return "Summable";
	case CALCULABLE_NON_SUMMABLE: return "NonSummable";
	default: return NULL;
	}
}

/* MetricDefinition.v1_0_0.CalculationAlgorithmEnum */
enum rf_calculation_algorithm_enum {
	CALCULATION_ALGORITHM_ENUM_INVALID = 0,
	CALCULATION_ALGORITHM_ENUM_AVERAGE = 1,
	CALCULATION_ALGORITHM_ENUM_MAXIMUM = 2,
	CALCULATION_ALGORITHM_ENUM_MINIMUM = 3,
	CALCULATION_ALGORITHM_ENUM_OEM = 4,
};

static inline const char *rf_calculation_algorithm_enum_to_str(enum rf_calculation_algorithm_enum val)
{
	switch (val) {
	case CALCULATION_ALGORITHM_ENUM_INVALID: return "Invalid";
	case CALCULATION_ALGORITHM_ENUM_AVERAGE: return "Average";
	case CALCULATION_ALGORITHM_ENUM_MAXIMUM: return "Maximum";
	case CALCULATION_ALGORITHM_ENUM_MINIMUM: return "Minimum";
	case CALCULATION_ALGORITHM_ENUM_OEM: return "OEM";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_METRIC_DEFINITION_H */

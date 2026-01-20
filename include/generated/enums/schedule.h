/* SPDX-License-Identifier: LGPL-2.1 */
/* Auto-generated from DMTF CSDL schemas - DO NOT EDIT */

#ifndef REDFISH_ENUM_SCHEDULE_H
#define REDFISH_ENUM_SCHEDULE_H

#include <stddef.h>

/* Schedule.v1_0_0.DayOfWeek */
enum rf_day_of_week {
	DAY_OF_WEEK_INVALID = 0,
	DAY_OF_WEEK_MONDAY = 1,
	DAY_OF_WEEK_TUESDAY = 2,
	DAY_OF_WEEK_WEDNESDAY = 3,
	DAY_OF_WEEK_THURSDAY = 4,
	DAY_OF_WEEK_FRIDAY = 5,
	DAY_OF_WEEK_SATURDAY = 6,
	DAY_OF_WEEK_SUNDAY = 7,
	DAY_OF_WEEK_EVERY = 8,
};

static inline const char *rf_day_of_week_to_str(enum rf_day_of_week val)
{
	switch (val) {
	case DAY_OF_WEEK_INVALID: return "Invalid";
	case DAY_OF_WEEK_MONDAY: return "Monday";
	case DAY_OF_WEEK_TUESDAY: return "Tuesday";
	case DAY_OF_WEEK_WEDNESDAY: return "Wednesday";
	case DAY_OF_WEEK_THURSDAY: return "Thursday";
	case DAY_OF_WEEK_FRIDAY: return "Friday";
	case DAY_OF_WEEK_SATURDAY: return "Saturday";
	case DAY_OF_WEEK_SUNDAY: return "Sunday";
	case DAY_OF_WEEK_EVERY: return "Every";
	default: return NULL;
	}
}

/* Schedule.v1_0_0.MonthOfYear */
enum rf_month_of_year {
	MONTH_OF_YEAR_INVALID = 0,
	MONTH_OF_YEAR_JANUARY = 1,
	MONTH_OF_YEAR_FEBRUARY = 2,
	MONTH_OF_YEAR_MARCH = 3,
	MONTH_OF_YEAR_APRIL = 4,
	MONTH_OF_YEAR_MAY = 5,
	MONTH_OF_YEAR_JUNE = 6,
	MONTH_OF_YEAR_JULY = 7,
	MONTH_OF_YEAR_AUGUST = 8,
	MONTH_OF_YEAR_SEPTEMBER = 9,
	MONTH_OF_YEAR_OCTOBER = 10,
	MONTH_OF_YEAR_NOVEMBER = 11,
	MONTH_OF_YEAR_DECEMBER = 12,
	MONTH_OF_YEAR_EVERY = 13,
};

static inline const char *rf_month_of_year_to_str(enum rf_month_of_year val)
{
	switch (val) {
	case MONTH_OF_YEAR_INVALID: return "Invalid";
	case MONTH_OF_YEAR_JANUARY: return "January";
	case MONTH_OF_YEAR_FEBRUARY: return "February";
	case MONTH_OF_YEAR_MARCH: return "March";
	case MONTH_OF_YEAR_APRIL: return "April";
	case MONTH_OF_YEAR_MAY: return "May";
	case MONTH_OF_YEAR_JUNE: return "June";
	case MONTH_OF_YEAR_JULY: return "July";
	case MONTH_OF_YEAR_AUGUST: return "August";
	case MONTH_OF_YEAR_SEPTEMBER: return "September";
	case MONTH_OF_YEAR_OCTOBER: return "October";
	case MONTH_OF_YEAR_NOVEMBER: return "November";
	case MONTH_OF_YEAR_DECEMBER: return "December";
	case MONTH_OF_YEAR_EVERY: return "Every";
	default: return NULL;
	}
}

#endif /* REDFISH_ENUM_SCHEDULE_H */

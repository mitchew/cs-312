#include "Month.h"

Month::Month()
{
    initializeMonthNames();

    monthNum = 1;
    monthName = monthNames[monthNum - 1];
}

Month::Month(int month)
{
    monthNum = month;
}

void Month::initializeMonthNames()
{
    std::string monthNames[] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
}
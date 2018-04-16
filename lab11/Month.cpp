#include "Month.h"
Month::Month()
{
    monthNum = 1;
}

Month::Month(int month)
{
    monthNum = month;
}

std::string Month::monthNames[] = {
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
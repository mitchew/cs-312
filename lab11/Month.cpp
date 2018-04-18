#include "Month.h"
#include <iostream>

Month::Month()
{
    initializeMonthNames();

    monthNum = 1;
    setMonthName(monthNum);
}

Month::Month(int month)
{
    initializeMonthNames();
    
    monthNum = month;
    setMonthName(month);
}

void Month::initializeMonthNames()
{
    std::string monthNames[12] = {
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
    };
}

void Month::setMonthName(int a)
{
    monthName = monthNames[a-1];
}

std::string Month::getMonthName()
{
    return monthName;
}

std::ostream &operator<<(std::ostream &out, Month a)
{
    out << a.getMonthName();
}
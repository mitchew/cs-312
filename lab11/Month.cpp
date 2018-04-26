#include "Month.h"
#include <iostream>

Month::Month()
{
    monthNum = 1;
}

Month::Month(int month)
{
    monthNum = month;
}

std::string Month::monthNames[12] = {
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

void Month::setMonthNum(int num)
{
    monthNum = num; 
}

int Month::getMonthNum()
{
    return monthNum;
}

std::string Month::getMonthName()
{
    return monthNames[monthNum - 1];
}

std::ostream &operator<<(std::ostream &out, Month &a)
{
    out << a.getMonthName();
    return out;
}

std::istream &operator>>(std::istream &in, Month &a)
{
    int newMonth = 0;
    std::cout << "Enter:";
    in >> newMonth;
    a.setMonthNum(newMonth);
    return in;
}

Month Month::operator++()
{
    ++monthNum;
    if (monthNum > 12)
    {
        monthNum = 1;
    }    
    return Month(monthNum);
}

Month Month::operator++(int)
{
    Month m(monthNum);
    ++monthNum;
    if (monthNum > 12)
    {
        monthNum = 1;
    } 
    return m;
}


Month Month::operator--()
{
    --monthNum;
    if (monthNum < 1)
    {
        monthNum = 12;
    }
    return Month(monthNum);
}

Month Month::operator--(int)
{
    Month m(monthNum);
    --monthNum;
    if (monthNum < 1)
    {
        monthNum = 12;
    }
    return m;
}
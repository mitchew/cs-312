#ifndef MONTH_H
#define MONTH_H
#include <string>
#include <iostream>
class Month
{
    private:
    int monthNum;
    std::string monthName;
    static std::string monthNames[12];

    public:
    Month();
    Month(int);
    void setMonthNum(int a);
    int getMonthNum();
    std::string getMonthName();
    friend std::ostream & operator<<(std::ostream &out, Month &a);
    friend std::istream & operator>>(std::istream &in, Month &a);
    Month operator++();
    Month operator++(int);
    Month operator--();
    Month operator--(int);
};
#endif
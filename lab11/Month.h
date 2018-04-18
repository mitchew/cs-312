#ifndef MONTH_H
#define MONTH_H
#include <string>
#include <iostream>
class Month
{
    private:
    int monthNum;
    std::string monthName;
    std::string monthNames[12];

    public:
    Month();
    Month(int);
    void initializeMonthNames();
    void setMonthName(int a);
    std::string getMonthName();
    friend std::ostream & operator<<(std::ostream &out, Month a);
};
#endif
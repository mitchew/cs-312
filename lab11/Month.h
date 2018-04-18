#ifndef MONTH_H
#define MONTH_H
#include <string>
class Month
{
    private:
    int monthNum;
    std::string monthName;
    std::string monthNames[];

    public:
    Month();
    Month(int);
    void initializeMonthNames();
};
#endif
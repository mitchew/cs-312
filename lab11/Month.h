#ifndef MONTH_H
#define MONTH_H
#include <string>
class Month
{
    private:
    int monthNum;

    public:
    static std::string monthNames[];
    Month();
    Month(int);
};
#endif
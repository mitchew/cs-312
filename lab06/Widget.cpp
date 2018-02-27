#include <iostream>
class Widget
{
    public:
        double daysToProduce(int widgets)
        {
            double days;
            double hours;

            hours = widgets / 10.0;
            days = hours / 16.0;

            return days;
        }
};
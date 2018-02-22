#include <string>
#include <iostream>

using namespace std;

class Date
{

    private:
        int month;
        int day;
        int year;

    public:
        Date(int m = 1, int d = 1, int y = 2001)
        {
            month = m;
            day = d;
            year = y;
        }

        int getMonth()
        {
            return month;
        }

        int getDay()
        {
            return day;
        }

        int getYear()
        {
            return year;
        }

        void setMonth(int a)
        {
            month = a;
        }

        void setDay(int a)
        {
            day = a;
        }

        void setYear(int a)
        {
            year = a;
        }

        void showDate1()
        {
            cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
        }

        void showDate2()
        {
            cout << monthAsString(getMonth()) << " " << getDay() << ", " << getYear() << endl;
        }
        
        void showDate3()
        {
            int month = getMonth();
            cout << getDay() << " " << monthAsString(month) << " " << getYear() << endl;
        }

        string monthAsString(int a)
        {
            string theMonth;
            switch(a)
            {
                case 1:
                    theMonth = "January";
                    break;
                case 2:
                    theMonth = "February";
                    break;
                case 3:
                    theMonth = "March";
                    break;
                case 4:
                    theMonth = "April";
                    break;
                case 5:
                    theMonth = "May";
                    break;
                case 6:
                    theMonth = "June";
                    break;
                case 7:
                    theMonth = "July";
                    break;
                case 8:
                    theMonth = "August";
                    break;
                case 9:
                    theMonth = "September";
                    break;
                case 10:
                    theMonth = "October";
                    break;
                case 11:
                    theMonth = "November";
                    break;
                case 12:
                    theMonth = "December";
                    break;
                default:
                    break;
            }

            return theMonth;
        }
};
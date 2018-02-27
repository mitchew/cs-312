#include <string>

using namespace std;

class Car
{
    private:
        int year;
        string make;
        int speed = 0;

    public:
        Car(int y, string m)
        {
            year = y;
            make = m;
        }

        int getYear()
        {
            return year;
        }

        void setYear(int a)
        {
            year = a;
        }

        string getMake()
        {
            return make;
        }

        void setMake(string a)
        {
            make = a;
        }

        int getSpeed()
        {
            return speed;
        }

        void setSpeed(int a)
        {
            speed = a;
        }

        void accelerate()
        {
            speed += 5;
        }

        void brake()
        {
            speed -= 5;
        }
};
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double length;
    double width;
    double radius;
    double area;

    cout << "Please enter the lenght\n";
    cin >> length;
    cout << "Please enter the width\n";
    cin >> width;
    cout << "Please enter the radius\n";
    cin >> radius;
    area = 2 * M_PI * radius;
    cout << "The area is " << area << endl;
    cout << "The border is " << (2 * (length * width));
}
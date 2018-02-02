/**
 * display menu
 * 1 calculate area of circle
 * 2 calculate area of rectangle
 * 3 calculate area of triangle
 * 4 quit
 * make options work
 */
#include <iostream>

using namespace std;

int main()
{
    int choice;
    double radius;
    double area;
    double length;
    double width;
    double base;
    double height;

    cout << "Geometry Calculator" << endl;
    cout << endl;
    cout << "1. Calculate the area of a Circle" << endl;
    cout << "2. Calculate the area of a Rectangle" << endl;
    cout << "3. Calculate the area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    cin.ignore();
    if (choice == 1)
    {
        cout << endl;
        cout << "Enter the circle's radius: ";
        cin >> radius;
        cin.ignore();
        cout << endl;
        if (radius > 0)
        {
            area = 3.14159 * (radius * radius);
            cout << "The area is " << area;
        }
        else if (radius < 0)
        {
            cout << "The radius can not be less than zero.";
        }
    }
    else if (choice == 2)
    {
        cout << endl;
        cout << "Enter the rectangle's length: ";
        cin >> length;
        cin.ignore();
        cout << "Enter the rectangle's width: ";
        cin >> width;
        cin.ignore();
        if (length > 0 && width > 0)
        {
            cout << endl;
            area = length * width;
            cout << "The area is " << area;
        }
        else
        {
            cout << endl;
            cout << "Only enter positive values for length and width.";
        }
    }
    else if (choice == 3)
    {
        cout << "Enter the length of the base: ";
        cin >> base;
        cin.ignore();
        cout << "Enter the triangle's height: ";
        cin >> height;
        cin.ignore();
        if (base > 0 && height > 0)
        {
            cout << endl;
            area = base * height * .5;
            cout << "The area is " << area;
        }
        else
        {
            cout << endl;
            cout << "Only enter positive values for base and height.";
        }
    }
    else if (choice == 4)
    {
        cout << "Program ending.";
        exit;
    }
    else
    {
        cout << "The valid choices are 1 through 4. Run the" << endl;
        cout << "program again and select one of those.";
    }
}
 
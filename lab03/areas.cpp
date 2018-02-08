// Lab 4 areas.cpp
// WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM.
// This program will give the user an option of computing the area of a square, circle or right triangle
// PUT YOUR NAME HERE.
// Author: Mitchell Wilson
// INCLUDE ANY NEEDED FILES HERE.
#include <iostream>
using namespace std;

int main()
{
    // DEFINE THE NAMED CONSTANT PI HERE AND SET ITS VALUE TO 3.14159
    const double PI = 3.14159;

    // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
    // NAME AND AN APPROPRIATE DATA TYPE.
    int choice;
    double radius;
    double area;
    double length;
    double width;
    double base;
    double height;

    // WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.
    cout << "Geometry Calculator" << endl;
    cout << endl;
    cout << "1. Calculate the area of a square" << endl;
    cout << "2. Calculate the area of a circle" << endl;
    cout << "3. Calculate the area of a right triangle" << endl;
    cout << "4. Quit" << endl;
    cout << endl;
    cout << "Enter your choice (1-4): ";

    // WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
    cin >> choice;
    cin.ignore();

    // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION
    // AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
    // IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
    // BE DISPLAYED.
    if (choice == 1)
    {
        cout << endl;
        cout << "Enter the square's length: ";
        cin >> length;
        cin.ignore();
        cout << "Enter the square's width: ";
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
    else if (choice == 2)
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
    return 0;
}
// brownies.cpp
// WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM.
// PUT YOUR NAME HERE.
// INCLUDE THE FILE NEEDED TO DO I/O
/*
author: mitchell wilson
description: compute how many brownies will fit within a given baking pan
*/
#include <iostream>
using namespace std;

int main()
{
    // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
    // NAME AND AN APPROPRIATE DATA TYPE.
    int width;
    int length;
    double area;

    // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
    // THE PROGRAM NEEDS TO GET FROM THE USER.
    cout << "Enter the width (inches): " << endl;
    cin >> width;
    cout << "Enter the length (inches): " << endl;
    cin >> length;

    // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS
    // AND ASSIGN THE RESULTS TO VARIABLES.
    area = width * length;

    // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
    cout << "A " << width << " x " << length << " inch pan can hold " << area << " small brownies or ";
    cout << ((width / 2) * (length / 2.0)) << " large brownies." << endl;

    return 0;
}

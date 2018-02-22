#include <iostream>
#include <string>
#include "Date.cpp"

using namespace std;

int main()

{

    Date today; // Create a date object using default constructor

    today.showDate2(); // Show the date set by the default constructor

    cout << endl; // using format 2.

    today.setMonth(3); // Call class functions to set the date

    today.setDay(15);

    today.setYear(2016);

    today.showDate1(); // Display date using format 1

    today.showDate2(); // Display date using format 2

    today.showDate3(); // Display date using format 3

    // Students may wish to add code to allow the user to

    // enter a date and display it in their preferred format.

    return 0;
}
// Lab 3 icecream.cpp
// WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM.
// This program will compute total revenue for ice cream sold
// PUT YOUR NAME HERE.
// Mitchell Wilson
// INCLUDE ANY NEEDED FILES HERE.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // DEFINE NAMED CONSTANTS HERE TO HOLD THE PRICES OF THE 3
    // SIZES OF ICE CREAM CONES. GIVE EACH ONE A DESCRIPTIVE
    // NAME AND AN APPROPRIATE DATA TYPE.
    const double SMALL_CONE_PRICE = 1.49;
    const double MEDIUM_CONE_PRICE = 2.49;
    const double LARGE_CONE_PRICE = 3.49;

    // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
    // NAME AND AN APPROPRIATE DATA TYPE.
    int small_sold;
    int medium_sold;
    int large_sold;
    int total_sold;

    double small_total;
    double medium_total;
    double large_total;
    double total_price;

    // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
    // THE PROGRAM NEEDS TO GET FROM THE USER.
    cout << "Enter the number of small cones sold: " << endl;
    cin >> small_sold;
    cin.ignore();

    cout << "Enter the number of medium cones sold: " << endl;
    cin >> medium_sold;
    cin.ignore();

    cout << "Enter the number of large cones sold: " << endl;
    cin >> large_sold;
    cin.ignore();

    // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS
    // AND ASSIGN THE RESULTS TO VARIABLES.
    total_sold = small_sold + medium_sold + large_sold;
    small_total = small_sold * SMALL_CONE_PRICE;
    medium_total = medium_sold * MEDIUM_CONE_PRICE;
    large_total = large_sold * LARGE_CONE_PRICE;
    total_price = small_total + medium_total + large_total;

    // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
    cout << "Number of single scoop cones sold: " << small_sold << endl;
    cout << "Number of double scoop cones sold: " << medium_sold << endl;
    cout << "Number of triple scoop cones sold: " << large_sold << endl;
    cout << endl;
    cout << setw(20) << left << "DeLIGHTful cones" << setw(6) << right << small_sold << setw(11) << right << small_total << endl;
    cout << setw(20) << left << "Double DeLIGHT cones" << setw(6) << right << medium_sold << setw(11) << right << medium_total << endl;
    cout << setw(20) << left << "Triple DeLIGHT cones" << setw(6) << right << large_sold << setw(11) << right << large_total << endl;
    cout << setw(20) << left << "Total" << setw(6) << total_sold << setw(11) << total_price << endl;

    return 0;
}

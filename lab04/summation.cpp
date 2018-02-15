// Lab 5 - summation.cpp
// This program displays a series of terms and computes its sum.
// author: mitchell wilson
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int denom,           // Denominator of a particular term
        finalDenom; // Denominator of the final term
    double sum = 0.0;    // Accumulator that adds up all terms in the series

    cout << "This program sums the series 1/2^1 + 1/2^2 ... + 1/2^n \n" << endl;
    cout << "What should n be in the final term (2 - 10)?" << endl;
    cin >> finalDenom;

    // WRITE THE CODE TO START A FOR LOOP THAT LOOPS ONCE FOR EACH TERM.
    // I.E., FOR TERMS WITH DENOMINATORS FROM 2 TO THE FINAL DENOMINATOR.
    for (denom = 1; denom <= finalDenom; denom += 1)
    {
        // WRITE THE CODE TO PRINT THIS TERM.
        // IF IT IS NOT THE LAST TERM, FOLLOW IT WITH A +.
        // IF IT IS THE LAST TERM, FOLLOW IT WITH A =.
        if (denom != finalDenom)
        {
            cout << "1/" << pow(2, denom) << " + ";
        }
        else
        {
            cout << "1/" << pow(2, denom) << endl;
        }
        // WRITE THE CODE TO ADD THE VALUE OF THIS TERM TO THE ACCUMULATOR.
        sum += (1.0 / pow(2, denom));
    }

    // WRITE A LINE OF CODE TO PRINT THE SUM.

    cout << sum;

    return 0;
}

// Lab 5 - summation.cpp
// This program displays a series of terms and computes its sum.
// PUT YOUR NAME HERE.
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
    for (denom = 2; denom <= finalDenom; denom += 1)
    {
        sum = 0;
        // WRITE THE CODE TO PRINT THIS TERM.
        // IF IT IS NOT THE LAST TERM, FOLLOW IT WITH A +.
        // IF IT IS THE LAST TERM, FOLLOW IT WITH A =.
        if (denom != finalDenom)
        {
            cout << "1/" << denom << "^" << finalDenom << " + ";
        }
        else
        {
            cout << "1/" << denom << "^" << finalDenom << endl;
        }
        // WRITE THE CODE TO ADD THE VALUE OF THIS TERM TO THE ACCUMULATOR.
        for (int i = 0; i < )
        sum += (1.0 / (denom * denom));
    }

    // WRITE A LINE OF CODE TO PRINT THE SUM.

    cout << sum;

    return 0;
}

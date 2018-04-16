// author: Mitchell Wilson
// description: Operator overloading for +, -, *, /
#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
    Fraction a(2,3);
    Fraction b(5,7);

    Fraction sum(1,1);
    Fraction sub(1,1);
    Fraction mult(1,1);
    Fraction divi(1,1);

    sum = a + b;
    sub = a - b;
    mult = a * b;
    divi = a / b;

    cout << "The sum is " << sum << endl;
    cout << "The difference is " << sub << endl;
    cout << "The product is " << mult << endl;
    cout << "The result of division is " << divi << endl;
    return 0;
}
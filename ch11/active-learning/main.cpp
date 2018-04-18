// author: Mitchell Wilson
// description: Operator overloading for +, -, *, /
#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
    Fraction a(2, 3);
    Fraction b(3, 4);
    Fraction sum;
    Fraction sub;
    Fraction mul;
    Fraction div;

    sum = a + b;
    cout << a << " + " << b << " = " << sum << endl;
    sub = a - b;
    cout << a << " - " << b << " = " << sub << endl;;
    mul = a * b;
    cout << a << " * " << b << " = " << mul << endl;;
    div = a / b;
    cout << a << " / " << b << " = " << div << endl;;

    return 0;
} 
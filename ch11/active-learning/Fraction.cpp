#include "Fraction.h"
Fraction Fraction::operator+(Fraction &right)
{
    Fraction x;
    x.numerator = right.numerator;
    x.denominator = right.denominator;
    return x;
}
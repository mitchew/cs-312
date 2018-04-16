#ifndef FRACTION_H
#define FRACTION_H
class Fraction
{
    private:
    int numerator;
    int denominator;

    public:
    Fraction(int, int);
    Fraction operator+(Fraction &right);
    Fraction operator-(Fraction &right);
    Fraction operator*(Fraction &right);
    Fraction operator/(Fraction &right);

};
#endif
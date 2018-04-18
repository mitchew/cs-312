#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
class Fraction
{
    private:
    int numerator;
    int denominator;

    public:
    Fraction();
    ~Fraction();
    Fraction(int, int);
    void setNum(int);
    void setDen(int);
    int getNum();
    int getDen();
    friend Fraction operator+(Fraction a, Fraction b);
    friend Fraction operator-(Fraction a, Fraction b);
    friend Fraction operator*(Fraction a, Fraction b);
    friend Fraction operator/(Fraction a, Fraction b);
    friend std::ostream & operator<<(std::ostream &out, Fraction a);

};
#endif
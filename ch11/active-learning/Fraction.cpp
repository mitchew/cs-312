#include "Fraction.h"
#include <iostream>

Fraction::Fraction()
{
    numerator = 0;
    denominator = 0;
    std::cout << "Fraction is created." << std::endl;
}

Fraction::~Fraction()
{
    std::cout << "Fraction is destroyed." << std::endl;
}

Fraction::Fraction(int num, int den)
{
    setNum(num);
    setDen(den);
    std::cout << "Fraction is created." << std::endl;
}

void Fraction::setNum(int a)
{
    numerator = a;
}

int Fraction::getNum() const
{
    return numerator;
}

void Fraction::setDen(int a)
{
    denominator = a;
}

int Fraction::getDen() const
{
    return denominator;
}

Fraction operator+(Fraction a, Fraction b)
{
    if (a.getDen() == b.getDen())
    {
        int cNum = a.getNum() + b.getNum();
        int cDen = a.getDen();
        Fraction result(cNum, cDen);
        return result;
    }
    else
    {
        int num1 = a.getNum() * b.getDen();
        int num2 = b.getNum() * a.getDen();
        int cNum = num1 + num2;
        int cDen = a.getDen() * b.getDen();
        Fraction result(cNum, cDen);
        return result;
    }
}

Fraction operator-(Fraction a, Fraction b)
{
    if (a.getDen() == b.getDen())
    {
        int cNum = a.getNum() - b.getNum();
        int cDen = a.getDen();
        Fraction result(cNum, cDen);
        return result;
    }
    else
    {
        int num1 = a.getNum() * b.getDen();
        int num2 = b.getNum() * a.getDen();
        int cNum = num1 - num2;
        int cDen = a.getDen() * b.getDen();
        Fraction result(cNum, cDen);
        return result;
    }
}

Fraction operator*(Fraction a, Fraction b)
{
    int cNum = a.getNum() * b.getNum();
    int cDen = a.getDen() * b.getDen();
    Fraction result(cNum, cDen);
    return result;
}

Fraction operator/(Fraction a, Fraction b)
{
    int cNum = a.getNum() * b.getDen();
    int cDen = a.getDen() * b.getNum();
    Fraction result(cNum, cDen);
    return result;
}

std::ostream &operator<<(std::ostream &out, Fraction a)
{
    out << a.getNum() << "/" << a.getDen();
}
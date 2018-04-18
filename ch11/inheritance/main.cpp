// Chapter 11, Assignment 8, Rational Arithmetic I
#include <iostream>
#include <cstdlib>
//#include <algorithm>
using namespace std;

class Rational
{
   // Declaration of overloaded stream insertion operator
   friend ostream & operator << (ostream &, Rational r);
private:
   int numerator, denominator;
public:
   // Constructor builds a rational number n/d
   Rational(int n, int d):numerator(n), denominator(d)
   {    
      reduce();
   }
   friend Rational operator+(Rational r1, Rational r2)
   {
       if (r1.denominator == r2.denominator)
       {
           return Rational(r1.numerator + r2.numerator, r1.denominator);
       }
       else
       {
           r1.reduce();
           r2.reduce();
           return Rational(r1.numerator + r2.numerator, r1.denominator);
       }
   };
   friend Rational operator-(Rational r1, Rational r2)
   {
       if (r1.denominator == r2.denominator)
       {
           return Rational(r1.numerator - r2.numerator, r1.denominator);
       }
       else
       {
           r1.reduce();
           r2.reduce();
           return Rational(r1.numerator - r2.numerator, r1.denominator);
       }
   };
   friend Rational operator*(Rational r1)
   {
       
   }
   friend Rational operator/(Rational r1, Rational r2);
private:
   // This member function transforms a rational number into 
   // reduced form where the numerator and denominator have 1
   // as greatest common factor
   void reduce();  
};

//************************************************************
// This member function transforms a rational number into    *
// reduced form where the numerator and denominator have 1   *
// as greatest common factor.                                *
//************************************************************
void Rational::reduce()
{
    bool negative = (numerator < 0) != (denominator < 0);
    numerator = abs(numerator);
    denominator = abs(denominator);

    int factor = 2;
    while (factor <= min(numerator, denominator))
    {
       if (numerator % factor == 0 && denominator % factor == 0)
       {
           numerator = numerator / factor;
           denominator = denominator / factor;
           continue;
       }
       factor ++;
    }
    if (negative) 
       numerator = - numerator;
}

//************************************************
// Overloaded stream insertion operator          *
//************************************************
ostream & operator << (ostream &out, Rational r)
{
   out << r.numerator << "/" << r.denominator;
   return out;
}

int main()
{
   cout << Rational(6, -12) << endl;
   Rational r1(1, 2);
   Rational r2(1, 3);
   cout << r1 + r2 << endl;
   cout << r1 - r2 << endl;
   return 0;
}
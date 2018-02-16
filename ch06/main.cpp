#include <iostream>
#include <cmath>

using namespace std;
double area(double x);
double area(double x, double y);
double area(double x, double y, double z);

double perimiter(double x);
double perimiter(double x, double y);
double perimiter(double x, double y, double z);

int main()
{
    double circle_area, rect_area, tri_area;
    double circle_permiter, rect_permiter, tri_permiter;
    
    //Circle
    circle_area = area(10.0);
    cout << "Circle Area: " << circle_area << endl;
    //Rectangle
    rect_area = area(10.0,10.0);
    cout << "Rectangle Area: " << rect_area << endl;
    //Triangle
    tri_area = area(10.0,10.0,10.0);
    cout << "Triangle Area: " << tri_area << endl;

    //Circle
    circle_permiter = perimiter(10.0);
    cout << "Circle Permiter: " << circle_permiter << endl;
    //Rectangle
    rect_permiter = perimiter(10.0,10.0);
    cout << "Rectangle Permiter: " << rect_permiter << endl;
    //Triangle
    tri_permiter = perimiter(10.0,10.0,10.0);
    cout << "Triangle Permiter: " << tri_permiter << endl;

    return 0;
}

double area(double a)
{
    double theArea;

    theArea = 3.1415 * (a * a);

    return theArea;
}

double area(double a, double b)
{
    double theArea;

    theArea = a * b;

    return theArea;
}

double area(double a, double b, double c)
{
    double theArea;
    double p = (a + b + c) / 2;

    theArea = sqrt(p * (p - a) * (p - b) * (p - c));

    return theArea;
}

double perimiter(double r)
{
    double perimiter;
    perimiter = 2 * M_PI * r;

    return perimiter;
}

double perimiter(double l, double w)
{
    double perimiter;
    perimiter = 2 * (l + w);
    return perimiter;
}

double perimiter(double s1, double s2, double s3)
{
    double perimiter;
    perimiter = s1 + s2 + s3;
    return perimiter;
}
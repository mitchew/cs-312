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
    double p = (a+b+c) / 2;

    theArea = sqrt(p * (p-a) * (p-b) * (p-c));

    return theArea;
}
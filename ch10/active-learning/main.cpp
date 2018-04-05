#include <iostream>

using namespace std;

double computeAverage(double *ptr, int length);

int main()
{
    const int SIZE = 10;
    double darr[SIZE] = {9.9,9.9,9.9,9.9,9.9,9.9,9.9,9.9,9.9,9.9};
    double *darrPtr = &darr[0];

    cout << computeAverage(darrPtr, SIZE) << endl;

    return 0;
}

double computeAverage(double *ptr, int length)
{
    double total = 0.0;
    for (int i =0; i < length; i++)
    {
        total += ptr[i];
    }
    double average = total / length;

    return average;
}
// author: Mitchell Wilson
// description: create an array of doubles, create pointer to array,
// create function with pointer as parameter, compute average of array,
// return double average
#include <iostream>

using namespace std;

double computeAverage(double *ptr, int length);

int main()
{
    const int SIZE = 10;
    double darr[SIZE] = {9.9,9.9,9.9,9.9,9.9,9.9,9.9,9.9,9.9,9.9};
    double *darrPtr = darr;

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
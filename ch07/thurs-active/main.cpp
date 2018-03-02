#include <iostream>
#include "DFA.h"

using namespace std;

int main()
{
    cout << "Creating a Float Class Array Object with a size of 5.";
    DFA fArray1(5);
    cout << "Using setI function with calls (0,1.4),(1,2.3),(2,3.13)"
         << ",(3,6.66),(4,7.711) to load array." << endl;
    fArray1.setI(0, 1.4);
    fArray1.setI(1, 2.3);
    fArray1.setI(2, 3.13);
    fArray1.setI(3, 6.66);
    fArray1.setI(4, 7.711);
    cout << "Using getI with all legitmate index values to print array." << endl;
    for (int i = 0; i < 5; i++)
        cout << "The value of fArray1[" << i << "]= " << fArray1.getI(i) << endl;
    cout << "Calling getHi returns highest value in array as: " << fArray1.getHi() << endl;
    cout << "Calling getLow returns lowest value in array as: " << fArray1.getLow() << endl;
    cout << "Calling getAvg returns the average of the array as: " << fArray1.getAvg() << endl;
    return 0;
}
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int myArray[] = {90,45,67,2};
    int *intPtr = myArray;
    cout << "This is the array name " << long(myArray) << endl;
    cout << "This is the address of the first item " << long ((intPtr)) << endl;
    cout << "This is the address of the second item " << long ((intPtr) + 1) << endl;
    cout << "This is the address of the third item " << long ((intPtr)+2) << endl;
    cout << "This is the address of the fourth item " << long ((intPtr)+3) << endl;
    intPtr = myArray + 3;
    cout << long(intPtr) << endl;
    cout << long(myArray) << endl;
    cout << long (intPtr - myArray) << endl;
}
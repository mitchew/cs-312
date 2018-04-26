#include <iostream>
#include "Month.h"

using namespace std;

int main()
{
    Month a;
    Month b;
    cin >> a;
    cout << " month number (1-12):";
    cout << "The next 8 months are: ";
    cout << a << ", ";
    a++;
    cout << a << ", ";
    a++;
    cout << a << ", ";
    a++;
    cout << a << ", ";
    a++;
    cout << a << ", ";
    a++;
    cout << a << ", ";
    a++;
    cout << a << ", ";
    a++;
    cout << a << "." << endl;

    cin >> b;
    cout << " another month number (1-12):";
    cout << "The previous 8 months were: ";
    cout << b << ", ";
    b--;
    cout << b << ", ";
    b--;
    cout << b << ", ";
    b--;
    cout << b << ", ";
    b--;
    cout << b << ", ";
    b--;
    cout << b << ", ";
    b--;
    cout << b << ", ";
    b--;
    cout << b << "." << endl;
    return 0;
}
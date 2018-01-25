#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double e = 32.718;
    double price = 18.0;
    cout << setw(8) << e << endl;
    cout << left << setw(8) << e << endl;
    cout << setprecision(2);
    cout << e << endl;
    cout << fixed << e << endl;
    cout << setw(6) << price;
}
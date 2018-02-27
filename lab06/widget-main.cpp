#include <iostream>
#include "Widget.cpp"

using namespace std;

int main()
{
    int howMany;
    double days;
    Widget factory;

    cout << "This program will calculate widget production time. \n";

    cout << "How many widgets are on order? ";
    cin >> howMany;
    while (howMany < 0)
    {
        cout << "Number must be 0 or greater. Please re-enter: ";
        cin >> howMany;
    }

    days = factory.daysToProduce(howMany);

    cout << "\nIt will take " << days << " days to produce ";
    cout << howMany << " widgets.\n";
    return 0;
}
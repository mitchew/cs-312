#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int AIR = 1100;
    const int WATER = 4900;
    const int STEEL = 16400;
    int medium;
    double distance;
    double seconds;

    cout << "Select a medium:" << endl;
    cout << "1. Air" << endl;
    cout << "2. Water" << endl;
    cout << "3. Steel" << endl;
    cout << endl;
    cout << "Enter your choice: ";
    cin >> medium;
    cout << "Enter the distance: ";
    cin >> distance;
    cout << endl;
    if (distance < 0)
    {
        cout << "Distance must be greater than zero.";
        exit;
    }
    switch (medium)
    {
        case 1:
            seconds = distance / AIR;
            cout << "A sound wave takes " << fixed << setprecision(4) << seconds << " seconds to travel " << showpoint << distance;
            cout << " feet through air." << endl;
            break;
        case 2:
            seconds = distance / WATER;
            cout << "A sound wave takes " << fixed << setprecision(4) << seconds << " seconds to travel " << distance;
            cout << " feet through water.";
            break;
        case 3:
            seconds = distance / STEEL;
            cout << "A sound wave takes " << fixed << setprecision(4) << seconds << " seconds to travel " << distance;
            cout << " feet through steel.";
            break;
        default:
            cout << "The valid choices are 1 through 3. Run the program again and select one of those.";
            exit;
    }


    return 0;
}
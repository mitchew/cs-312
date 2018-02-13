#include <iostream>

using namespace std;

int main()
{
    int starting_number = 0;
    double increase = 0.0;
    int days = 0;

    do
    {
        cout << "Enter the starting number of organisms: ";
        cin >> starting_number;
        if (starting_number < 2)
        {
            cout << "The starting number of organisms must be at least 2." << endl;
        }
    } while (starting_number < 2);

    do
    {
        cout << "Enter the average daily increase as a fraction (0.052 = 5.2\% per day): ";
        cin >> increase;
        if (increase < 0)
        {
            cout << "The average daily population increase must be a positive value." << endl;
        }
    } while (increase < 0);

    do
    {
        cout << "Enter the days: ";
        cin >> days;
        if (days < 1)
        {
            cout << "The number of days must be at least 1." << endl;
        }
    } while (days < 1);

    for (int i = 0; i < days; i++)
    {
        starting_number = starting_number + (starting_number * increase);
        cout << "Population on day " << i << ": " << starting_number << endl;
    }


}
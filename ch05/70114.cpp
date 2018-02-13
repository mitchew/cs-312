#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double starting_number = 0;
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
        cout << "Enter the average daily population increase (as a percentage): ";
        cin >> increase;
        if (increase < 0)
        {
            cout << "The average daily population increase must be a positive value." << endl;
        }
    } while (increase < 0);

    do
    {
        cout << "Enter the number of days they will multiply: ";
        cin >> days;
        if (days < 1)
        {
            cout << "The number of days must be at least 1." << endl;
        }
    } while (days < 1);

    for (int i = 1; i <= days; i++)
    {
        starting_number = starting_number + (starting_number * increase);
        cout << "On day " << i << " the population size was ";
        cout << setprecision(0) << fixed << starting_number << "." << endl;
    }
}
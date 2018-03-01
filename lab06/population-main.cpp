#include <iostream>
#include <iomanip>
#include "Pop.cpp"

using namespace std;

int main()
{
    Pop myTown;
    long numPeople;
    int numBirths;
    int numDeaths;

    cout << "Enter total population: ";
    cin >> numPeople;

    while (numPeople < 1)
    {
        cout << "Value must be greater than 0. Please re-enter: ";
        cin >> numPeople;
    }

    myTown.setPopulation(numPeople);

    cout << "Enter annual number of births: ";
    cin >> numBirths;

    while (numBirths < 0)
    {
        cout << "Value cannot be negative. Please re-enter: ";
        cin >> numBirths;
    }

    cout << "enter annual number of deaths: ";
    cin >> numDeaths;

    myTown.setBirths(numBirths);

    while (numDeaths < 0)
    {
        cout << "Value cannot be negative. Please re-enter: ";
        cin >> numDeaths;
    }

    myTown.setDeaths(numDeaths);

    cout << "\nPopulation Statistics \n";
    cout << fixed << showpoint << setprecision(3);
    cout << "\n\tPopulation: " << setw(7) << myTown.getPopulation();
    cout << "\n\tBirth Rate: " << setw(7) << myTown.getBirthRate();
    cout << "\n\tDeath Rate: " << setw(7) << myTown.getDeathRate() << endl;
}
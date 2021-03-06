/**
 * author: mitchell wilson
 * description: display starting population and ending population per year
 * using n = p(1+b)(1-d) where n = new population size, p is previous
 * population size, b is birth rate, d is death rate. birth and death rates
 * are decimal numbers. eg. 32 births and 26 deaths per 1000 = 0.032 and 0.026.
 * program will ask for:
 * starting population size (min 2)
 * annual birth rate
 * annual death rate
 * number of years (min 1)
 */

#include <iostream>
#include <cmath>

using namespace std;

int starting_population_entry()
{
    int start_pop;

    do
    {
        cout << "Enter starting population size: ";
        cin >> start_pop;
        cin.ignore();

        if (start_pop < 2)
        {
            cout << "Starting population must be at least 2" << endl;
        }

    } while (start_pop < 2);

    return start_pop;
}

double birth_rate_entry()
{
    double birth_rate = 0.0;

    cout << "Enter annual birth rate: ";
    cin >> birth_rate;
    cin.ignore();

    birth_rate = birth_rate / 1000;

    return birth_rate;
}

double death_rate_entry()
{
    double death_rate = 0.0;

    cout << "Enter annual death rate: ";
    cin >> death_rate;
    cin.ignore();

    death_rate = death_rate / 1000;

    return death_rate;
}

int years_entry()
{
    int years = 0;

    do
    {
        cout << "Enter years to display: ";
        cin >> years;
        cin.ignore();

        if (years < 1)
        {
            cout << "Years must be at least 1" << endl;
        }

    } while (years < 1);

    return years;
}

int main()
{
    int start_pop = starting_population_entry();
    double birth_rate = birth_rate_entry();
    double death_rate = death_rate_entry();
    int years = years_entry();
    double current_size = 0.0;
    double projected_size = 0.0;

    for (int i = 1; i <= years; i++)
    {
        if (i == 1)
        {
            current_size = start_pop;
            projected_size = start_pop * (1.0 + birth_rate) * (1.0 - death_rate);
        }
        else
        {
            projected_size = current_size * (1.0 + birth_rate) * (1.0 - death_rate);
        }
        projected_size = round(projected_size);
        cout << "Year " << i << ": " << current_size << " " << projected_size << endl;
        current_size = projected_size;
    }

    return 0;
}
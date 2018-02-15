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

using namespace std;

int starting_population_entry()
{
    int start_pop;

    do
    {
        cout << "What is the starting population size (minimum of 2): ";
        cin >> start_pop;
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

    cout << "What is the annual birth rate per 1000: ";
    cin >> birth_rate;

    birth_rate = 1000 / birth_rate;

    return birth_rate;
}

double death_rate_entry()
{
    double death_rate = 0.0;

    cout << "What is the annual death rate per 1000: ";
    cin >> death_rate;

    death_rate = 1000 / death_rate;

    return death_rate;
}

int years_entry()
{
    int years = 0;

    do
    {
        cout << "Enter the number of years to model: ";
        cin >> years;
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

    double new_size = 0.0;

    new_size = start_pop * (1 + birth_rate) * (1 - death_rate);

    cout << new_size;

}
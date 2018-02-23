// Lab 6 kiloConverter.cpp
// This menu-driven program lets the user convert
// pounds to kilograms and kilograms to pounds.
// PUT YOUR NAME HERE.
#include <iostream>
using namespace std;

void displayMenu();
int getChoice(int, int);
double kilosToPounds(double);
double poundsToKilos(double);

// Function prototypes
// WRITE PROTOTYPES FOR THE displayMenu, getChoice,
// kilosToPounds and poundsToKilos FUNCTIONS HERE.

/*****     main     *****/
int main()
{
    // DECLARE ANY VARIABLES MAIN USES HERE.
    int choice;

    // WRITE THE CODE HERE TO CARRY OUT THE STEPS
    // REQUIRED BY THE PROGRAM SPECIFICATIONS.

    do
    {
        displayMenu();
        choice = getChoice(1, 3);

        switch (choice)
        {
        case 1:
            double kilos;
            cout << "Weight to be converted: ";
            cin >> kilos;
            kilosToPounds(kilos);
            break;
        case 2:
            double pounds;
            cout << "Weight to be convereted: ";
            cin >> pounds;
            poundsToKilos(pounds);
            break;
        case 3:
            exit(0);
        default:
            exit(0);
        }
    } while (choice != 3);

    return 0;
}

/*****     displayMenu     *****/
// WRITE THE displayMenu FUNCTION HERE.
// THIS void FUNCTION DISPLAYS THE MENU CHOICES
//  1. Convert kilograms to pounds
//  2. Convert pounds to kilograms
//  3. Quit
void displayMenu()
{
    cout << "1. Convert kilograms to pounds" << endl;
    cout << "2. Convert pounds to kilograms" << endl;
    cout << "3. Quit" << endl;
}

/*****     getChoice     *****/
// THIS IS THE SAME FUNCTION YOU WROTE EARLIER IN THIS SET
// OF LAB EXERCISES. JUST FIND IT AND PASTE IT HERE.
int getChoice(int min, int max)
{
    int input;

    // Get and validate the input
    cin >> input;
    while (input < min || input > max)
    {
        cout << "Invalid input. Enter an integer between " << min << " and " << max << ": ";
        cin >> input;
    }
    return input;
}
/*****     kilosToPounds     *****/
// WRITE THE kilosToPounds FUNCTION HERE.
// IT RECEIVES A WEIGHT IN KILOS AND MUST CALCULATE
// AND RETURN THE EQUIVALENT NUMBER OF POUNDS.
double kilosToPounds(double kilos)
{
    double pounds;

    pounds = kilos * 2.2;

    cout << kilos << " kilograms = " << pounds << " pounds." << endl;

    return pounds;
}

/*****    poundsToKilos     *****/
// WRITE THE poundsToKilos FUNCTION HERE.
// IT RECEIVES A WEIGHT IN POUNDS AND MUST CALCULATE
// AND RETURN THE EQUIVALENT NUMBER OF KILOS.
double poundsToKilos(double pounds)
{
    double kilos;

    kilos = pounds / 2.2;

    cout << pounds << " pounds = " << kilos << " kilograms." << endl;
    
    return kilos;
}
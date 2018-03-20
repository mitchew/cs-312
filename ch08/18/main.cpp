#include <iostream>
#include <iomanip>
#include "InvBin.h"
#include "BinManager.h"

using namespace std;

void addItems(BinManager&);
void displayMenu();
void displayReport(BinManager);
int getChoice(int, int);
bool removeItems(BinManager&);

int main()
{
    string items[9] = {
        "regular pliers",
        "n. nose pliers",
        "screwdriver",
        "p. head screw driver",
        "wrench-large",
        "wrench-small",
        "drill",
        "cordless drill",
        "hand saw"
    };
    int itemCount[9] = {
        25,
        5,
        25,
        6,
        7,
        18,
        51,
        16,
        12
    };
    BinManager binManager(9, items, itemCount);
    bool done = false;
    int choice = 0;

    while (!done)
    {
        displayMenu();
        choice = getChoice(1, 4);
        switch(choice)
        {
            // add items
            case 1:
                addItems(binManager);
                continue;
            // remove items
            case 2:
                removeItems(binManager);
                continue;
            // display items
            case 3: 
                displayReport(binManager);
                continue;
            // exit program
            case 4:
                displayReport(binManager);
                cout << "Exiting ..." << endl;
                done = true;
        }
    }

    return 0;
}

void addItems(BinManager& binManager)
{
    int binNum;
    int count;

    displayReport(binManager);

    cout << "Add items" << endl;
    cout << "Bin number: ";
    cin >> binNum;

    cout << "Add how many? ";
    cin >> count;

    binManager.addParts(binNum, count);
}
/**
 * add items to a bin
 * remove items from a bin
 * display contents of all bins
 */
void displayMenu()
{
    cout << "1. Add items" << endl;
    cout << "2. Remove items" << endl;
    cout << "3. Display contents of all bins" << endl;
    cout << "4. Quit" << endl;
}

void displayReport(BinManager binManager)
{
    // Expect BinManager to only have 30 bins
    for (int i = 0; i < 30; i++)
    {
        cout <<
            "Bin " << setw(2) << i <<
            setw(24) << binManager.getDescription(i) <<
            setw(5) << binManager.getQuantity(i) << endl;
    }
}

int getChoice(int start, int end)
{
    int choice = 0;
    bool done = false;
    while (!done)
    {
        cout << "Enter a number between " << start << " and " << end << endl;
        cin >> choice;

        if (choice >= start && choice <= end)
        {
            done = true;
        }
    }

    return choice;
}

bool removeItems(BinManager& binManager)
{
    int binNum;
    int count;

    displayReport(binManager);

    cout << "Remove item" << endl;
    cout << "Bin number";
    cin >> binNum;

    cout << "Remove how many? ";
    cin >> count;

    binManager.removeParts(binNum, count);
}
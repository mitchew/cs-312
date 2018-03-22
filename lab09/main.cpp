// take in 20 random numbers
// sort the numbers
// find a number?

#include <iostream>
#include <time.h>
#include "Sorter.h"

using namespace std;

const int SIZE = 20;
int nums[SIZE];

int main()
{
    Sorter sorter;
    int findMe = 0;

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++)
    {
        int randNum = rand() % 100;
        nums[i] = randNum;
    }

    sorter.displayArray(nums, SIZE);

    int swaps = sorter.sortNums(nums, SIZE);

    bool done = false;
    bool found = false;

    cout << "Number of swaps to sort: " << swaps << endl << endl;

    while (!done)
    {
        sorter.displayArray(nums, SIZE);
        
        cout << "Enter a number to find (0-99) -1 to exit: ";
        cin >> findMe;

        if (findMe == -1)
        {
            done = true;
            continue;
        }

        cout << endl;
        // our array is size 20 so our indexes start at 0 and end at 19
        int searching = sorter.searchNums(nums, 0, 19, findMe);

        if (searching == -1)
        {
            cout << findMe << " is not found" << endl;
        }
    }

    return 0;
}
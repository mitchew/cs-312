// take in 20 random numbers
// sort the numbers
// find a number?

#include <iostream>
#include <time.h>

using namespace std;

const int SIZE = 20;
int nums[SIZE];
void displayArray(int [], int);
int searchNums(int[], int, int, int);
int sortNums(int [], int);

int main()
{
    int findMe = 0;

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++)
    {
        int randNum = rand() % 100;
        nums[i] = randNum;
    }

    int swaps = sortNums(nums, SIZE);

    cout << "Number of swaps: " << swaps << endl;

    cout << "Enter a number to find: ";
    cin >> findMe;

    displayArray(nums, SIZE);

    return 0;
}

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << endl;
    }
}

int searchNums(int arr[], int right, int left, int find)
{
    if (right >= left)
    {
        int mid = (right + left) / 2;

        if (arr[mid] == find)
        {
            return mid;
        }
        if (arr[mid] > find)
        {
            return searchNums(arr, right - 1, left, find);
        }

        return searchNums(arr, right, left + 1, find);
    }

    return -1;
}

int sortNums(int arr[], int size)
{
    int count;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
            }
        }
    }

    return count;
}


#include <iostream>
#include "Sorter.h"

void Sorter::displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "index " << i << " " << arr[i] << std::endl;
    }
}

int Sorter::searchNums(int arr[], int left, int right, int find)
{
    std::cout << "Searching for " << find << std::endl;

    if (right >= left)
    {
        int mid = left + (right - left) / 2;
        std::cout << "mid is " << mid << std::endl;

        if (arr[mid] == find)
        {
            std::cout << find << " found at index " << mid << std::endl;
            return mid;
        }
        if (arr[mid] > find)
        {
            return searchNums(arr, left, mid - 1, find);
        }

        return searchNums(arr, mid + 1, right, find);
    }

    return -1;
}

int Sorter::sortNums(int arr[], int size)
{
    std::cout << "Sorting ..." << std::endl;
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << "comparing " << arr[j] << " and " << arr[j+1] << std::endl;
            if (arr[j] > arr[j+1])
            {
                std::cout << arr[j] << " is larger, commencing swap" << std::endl;
                std::cout << "swapping " << arr[j] << " at index " << j << " with " << arr[j+1] << " at index " << j+1 << std::endl;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
            }
        }
    }

    return count;
}
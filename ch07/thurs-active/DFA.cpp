#include "DFA.h"

DFA::DFA(int size) : index(size)
{
    nums = new float[size];
}

DFA::~DFA()
{
    delete nums;
}

void DFA::setI(int index, float num)
{
    nums[index] = num;
}

float DFA::getI(int index)
{
    return nums[index];
}

float DFA::getHi()
{
    int largest = 0;

    for (int i = 0; i < index; i++)
    {
        if (nums[i] > largest)
        {
            largest = i;
        }
    }

    return nums[largest];
}

float DFA::getLow()
{
    int lowest = 0;

    for (int i = 1; i < index; i++)
    {
        if (nums[i] < nums[lowest])
        {
            lowest = i;
        }
    }

    return nums[lowest];
}

float DFA::getAvg()
{
    double sum;
    double avg;

    for (int i = 0; i < index; i++)
    {
        sum += nums[i];
    }

    avg = sum / index;

    return avg;
}
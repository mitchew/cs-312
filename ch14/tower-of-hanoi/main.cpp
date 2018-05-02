// author: mitchell wilson
// solve tower of hanoi

#include <iostream>
#include <vector>

void move(int, std::vector<int> &, std::vector<int> &, std::vector<int> &);

int main()
{
    std::vector<int> peg1;
    std::vector<int> peg2;
    std::vector<int> peg3;
    int diskCount = 0;

    std::cout << "Enter number of starting disks: ";
    std::cin >> diskCount;

    for (int i = 0; i < diskCount; i++)
    {
        peg1.push_back(i);
    }

    std::cout << peg1.size();
    std::cout << peg2.size();
    std::cout << peg3.size();
    std::cout << std::endl;

    move(diskCount, peg1, peg3, peg2);

    std::cout << peg1.size();
    std::cout << peg2.size();
    std::cout << peg3.size();

    return 0;
}

void move(int n, std::vector<int> & source, std::vector<int> & target, std::vector<int> & auxiliary)
{
    if (n > 0)
    {
        // move n - 1 disks from source to auxiliary, so they are out of the way
        move(n - 1, source, auxiliary, target);

        // move the nth disk from source to target
        target.push_back(source.back());
        source.pop_back();

        // Display our progress
        // std::cout << target.back();
        // std::cout << target.front();

        // move the n - 1 disks that we left on auxiliary onto target
        move(n - 1, auxiliary, target, source);
    }
}
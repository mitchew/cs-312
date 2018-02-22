#include <iostream>
#include "square.cpp"

using namespace std;

int main()
{
    Square test = Square(4);
    cout << test.getSide();
}
#include <iostream>
#include <string>

using namespace std;

int factorial(int);
void countDown(int);

int main()
{
    int n;
    cout << "enter an integer: " << endl;
    cin >> n;

    cout << factorial(n) << endl;

    countDown(5);

    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}

void countDown(int n)
{
    if (n == 0)
    {
        cout << "Blast off!" << endl;
    }
    else
    {
        cout << n << endl;
        return countDown(n-1);
    }
}
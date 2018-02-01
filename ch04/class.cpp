#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int grade;
    cout << "Enter grade: ";
    cin >> grade;
    cin.ignore();
    if (grade >= 90 && grade <= 100)
    {
        cout << "Grade is A";
    }
    else if (grade >= 80 && grade < 90)
    {
        cout << "Grade is B";
    }
    else if (grade >= 70 && grade < 80)
    {
        cout << "Grade is C";
    }
    else if (grade >= 60 && grade < 70)
    {
        cout << "Grade is D";
    }
    else
    {
        cout << "Grade is F";
    }
}
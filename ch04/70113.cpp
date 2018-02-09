/**
 * author: Mitchell Wilson
 * ask user for number 1-10
 * switch statement displays roman numeral equivalent
 * no numbers outside requried
 */
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number (1 - 10): ";
    cin >> num;
    cin.ignore();
    if (num < 1 || num > 10)
    {
        exit;
    }
    else
    {
        switch (num)
        {
            case 1:
                cout << "The Roman numeral version of 1 is I.";
                break;
            case 2:
                cout << "The Roman numeral version of 2 is II.";
                break;
            case 3:
                cout << "The Roman numeral version of 3 is III.";
                break;
            case 4:
                cout << "The Roman numeral version of 4 is IV.";
                break;
            case 5:
                cout << "The Roman numeral version of 5 is V.";
                break;
            case 6:
                cout << "The Roman numeral version of 6 is VI.";
                break;
            case 7:
                cout << "The Roman numeral version of 7 is VII.";
                break;
            case 8:
                cout << "The Roman numeral version of 8 is VIII.";
                break;
            case 9:
                cout << "The Roman numeral version of 9 is IX.";
                break;
            case 10:
                cout << "The Roman numeral version of 10 is X.";
                break;
            default:
                break;
        }
    }

}
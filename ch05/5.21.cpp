#include <iostream>

using namespace std;

int main()
{
    int max_width;
    int breakpoint = false;

    cin >> max_width;

    cout << "Diamond Width: " << max_width << endl;
    
    for (int i = 1; i <= max_width; i += 2)
    {
        int whitespace;

        if (i != max_width || i == max_width)
        {
            whitespace = (max_width - i) /2;
            for (int k = 1; k <= whitespace; k++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "+";
            }
        }

        cout << endl;
    }

    for (int i = (max_width / 2); i >= 0; i -= 2)
    {
        int whitespace;

        if (i != max_width)
        {
            whitespace = (max_width - i) /2;
            for (int k = 1; k <= whitespace; k++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "+";
            }
        }

        cout << endl;
    }
}
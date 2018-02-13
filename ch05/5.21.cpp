#include <iostream>

using namespace std;

int main()
{
    int max_width;
    int current_width;
    int past_mid_point = 0;

    cin >> max_width;

    cout << "Diamond Width: " << max_width << endl;

    for (int i = 1; i <= max_width; i++)
    {
        int white_space = (max_width - 1) / 2;
        for (int j = 0; j < white_space; j++)
        {
            cout << " ";
        }


        cout << endl;
    }
}
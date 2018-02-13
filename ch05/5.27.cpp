#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("People.txt");
    double line;
    int count = 0;

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1000 people)" << endl;

    while (inFile >> line)
    {
        if (line < 0)
        {
            cout << "BAD DATA";
            break;
        }
        switch (count)
        {
            case 0:
                cout << "1900  ";
                break;
            case 1:
                cout << "1920  ";
                break;
            case 2:
                cout << "1940  ";
                break;
            case 3:
                cout << "1960  ";
                break;
            case 4:
                cout << "1980  ";
                break;
            case 5:
                cout << "2000  ";
                break;
        }

        line = ceil(line / 1000);

        for (int i = 0; i < line; i++)
        {
            cout << "*";
        }

        cout << endl;
        count++;
    }
}
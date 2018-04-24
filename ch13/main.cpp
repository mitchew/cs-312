// pg 911 read 24 lines, pause until character is pressed
// continue reading until end of file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;
    ifstream infile;
    infile.open("file.txt");

    if (infile.is_open())
    {
        while (!infile.eof())
        {
            for(int i = 0; i < 24; i++)
            {
                if (infile.eof())
                {
                    break;
                }
                getline(infile, line);
                cout << line << endl;
            }
            system("pause");
        }
    }
}
// author: mitchell wilson
// teammates: amjad, delaney, jesse

#include <iostream>
#include <vector>
#include<fstream>

using namespace std;

int main()
{
    int number = -999;
    bool done = false;
    char ch;
    fstream theFile;

    do
    {
        theFile.open("sorted.bin", ios::in | ios::out | ios::binary);
        if(!theFile)
        {
            cout << "Error cannot open the file!" << endl;
            return 1;
        }

        cout << "Content of the file is:" << endl;
        theFile.read(reinterpret_cast<char*>(&number), sizeof(number));
        while (!theFile.eof())
        {
            cout << number << endl;
            theFile.read(reinterpret_cast<char*>(&number), sizeof(number));
        }

// if already at end of file, clear the EOF flag before calling seekg()
        theFile.clear();
        cout << "The last number is ";
        theFile.seekg(0L, ios::end);
        theFile.read(reinterpret_cast<char*>(&number), sizeof(number));
        cout << endl;

        cout << "Enter a number (-999 to quit): ";
        cin >> number;
        if (number == -999)
        {
            done = true;
            break;
        }

        theFile.write(reinterpret_cast<char*>(&number), sizeof(number));

        theFile.close();

    } while (!done);
    
}

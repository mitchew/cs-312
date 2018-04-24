// opens file, outputs list of intergers
// ask user to enter a number
// input into sorted location using insertion sort
// 

#include <iostream>
#include <fstream>
#include "Sorter.h"
using namespace std;

int main()
{
    bool done = false;

    do {

        int input;

        fstream myFile;
        myFile.open("myfile", ios::in | ios::out | ios::binary);

        if (!myFile)
        {
            cout << "Error opening file.";
            break;
        }

        cout << "Reading data" << endl;
        myFile.read(reinterpret_cast<char*>(input), sizeof(input));
        
        for (int i = 0; i < 20; i++)
        {
            cout << endl;
        }
        
        cout << "Enter number:";
        cin >> input;
        myFile.write(reinterpret_cast<char*>(input), sizeof(input));
        
        myFile.close();

    } while (!done);
}
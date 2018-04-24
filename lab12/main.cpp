// create an array of size 20
// write to file in binary
// read from file and print to screen
// p 882 has an example

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    struct TestScore
    {
        int studentId;
        double score;
        char grade;
    };
// Data to write to binary file
    TestScore test1[20] = 
    {
        { 0, 100, 'A' }, { 1, 90, 'A' }, { 2, 80, 'B' }, { 3, 85, 'B' }, { 4, 75, 'C' },
        { 0, 100, 'A' }, { 1, 90, 'A' }, { 2, 80, 'B' }, { 3, 85, 'B' }, { 4, 75, 'C' },
        { 0, 100, 'A' }, { 1, 90, 'A' }, { 2, 80, 'B' }, { 3, 85, 'B' }, { 4, 75, 'C' },
        { 0, 100, 'A' }, { 1, 90, 'A' }, { 2, 80, 'B' }, { 3, 85, 'B' }, { 4, 75, 'C' }
    };
// calculates size of each struct for movement
    int size = sizeof(test1)/sizeof(test1[0]);

    fstream gradeFile;
    gradeFile.open("myfile", ios::out | ios::binary);

    if (!gradeFile)
    {
        cout << "Error opening file.";
        return 0;
    }

    cout << "Write data and close file." << endl;
    gradeFile.write(reinterpret_cast<char*>(test1),sizeof(test1));
    gradeFile.close();

    cout << "Open file to read back" << endl;
    gradeFile.open("myfile", ios::in);
    if (!gradeFile)
    {
        cout << "Error opening file";
        return 0;
    }
    cout << "Reading data" << endl;
    gradeFile.read(reinterpret_cast<char*>(test1), sizeof(TestScore) * 20);
    
    for (int i = 0; i < 20; i++)
    {
        cout << "Student ID: " << test1[i].studentId << endl;
        cout << "Score: " << test1[i].score << endl;
        cout << "Grade: " << test1[i].grade << endl << endl;
    }

    gradeFile.close();

    return 0;
}

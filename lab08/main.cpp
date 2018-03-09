#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

const int SIZE = 10;

void exportQA(string [], string []);

int main()
{
    string questions[SIZE] = {
        "What color is the sun?",
        "What is 2 + 2?",
        "What class is this?",
        "What country is this?",
        "Who is the president of USA?",
        "Who is NPTEC Chairman?",
        "Red or blue?",
        "What college is this?",
        "What is the center of our solar system?",
        "What month is it?"
        };

    string answers[SIZE] = {
        "Yellow",
        "4",
        "CS 312",
        "United States of America",
        "Donald Trump",
        "Mary Jane Miles",
        "Blue",
        "Lewis Clark State College",
        "The Sun",
        "March"
        };
 
    exportQA(questions, answers);

    return 0;
}

void exportQA(string questions[], string answers[])
{
    ofstream file;
    file.open("output.txt");

    srand(time(NULL));

    if (file)
    {
        for (int i = 0; i < 5; i++)
        {
            int index = rand() % 10;
            
            file << "Question: " << questions[index] << endl;
            file << "Answer: " << answers[index] << endl;
            file << endl;
        }
    }
    file.close();
}
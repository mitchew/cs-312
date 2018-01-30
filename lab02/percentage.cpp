// Lab 3 percentage.cpp
// This program will determine the percentage 
// of answers a student got correct on a test.
// PUT YOUR NAME HERE.
// Mitchell Wilson

// INCLUDE THE FILE NEEDED TO DO I/O
// INCLUDE THE FILE NEEDED TO FORMAT OUTPUT
// INCLUDE THE FILE NEEDED TO USE STRINGS
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
   string name;
   int numQuestions,
       numCorrect;
   double percentage;
   
   // Get student's test data
   cout << "Enter student's first and last name: ";
   // WRITE A STATEMENT TO READ THE WHOLE NAME INTO THE name VARIABLE.
   getline(cin, name);
   
   cout << "Number of questions on the test: ";
   cin  >> numQuestions;
   cout << "Number of answers the student got correct: ";
   cin  >> numCorrect;
   
   // Compute and display the student's % correct
   // WRITE A STATEMENT TO COMPUTE THE % AND ASSIGN THE RESULT TO percentage.
   percentage = ((numCorrect + 0.0) / numQuestions) * 100;
   
   // WRITE STATEMENTS TO DISPLAY THE STUDENT'S NAME AND THEIR TEST 
   // PERCENTAGE WITH ONE DECIMAL POINT. 
   cout << name << " " << fixed << setprecision(1) << percentage << "\%" << endl;
   
   return 0;
}
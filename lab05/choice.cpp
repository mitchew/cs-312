// Lab 6 choice.cpp 
// This program illustrates how to use a value-returning 
// function to get, validate, and return input data.
// author: mitchell wilson
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
int getChoice(int, int);

/*****     main     *****/
int main()
{
   int choice;
   int min;
   int max;

   cout << "Enter min" << endl;
   cin >> min;
   cout << "Enter max" << endl;
   cin >> max;
   cout << "Enter an integer between " << min << " and " << max << ": ";
   
   // WRITE A LINE OF CODE TO CALL THE getChoice FUNCTION AND TO
   // ASSIGN THE VALUE IT RETURNS TO THE choice VARIABLE.
   choice = getChoice(min, max);
   
   cout << "You entered " << choice << endl;
}

/*****     getChoice     *****/
int getChoice(int min, int max)
{
   int input;
   
   // Get and validate the input
   cin >> input;
   while (input < min || input > max)
   {  cout << "Invalid input. Enter an integer between " << min << " and " << max << ": ";
      cin  >> input;
   }
   return input;
}

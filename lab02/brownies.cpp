// brownies.cpp 
// WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM. 
// PUT YOUR NAME HERE.
// INCLUDE THE FILE NEEDED TO DO I/O
/*
author: mitchell wilson
description: 
*/
#include <iostream>
using namespace std;

int main()
{   
   // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE.
   int width;
   int height;
   double area;

   // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
   // THE PROGRAM NEEDS TO GET FROM THE USER.
   cout << "Enter the width: " << endl;
   cin >> width;
   cout << "Enter the height: " << endl;
   cin >> height;
   area = width * height;
   cout << area;
   // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS  
   // AND ASSIGN THE RESULTS TO VARIABLES.
   
   // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
      
   return 0;
}

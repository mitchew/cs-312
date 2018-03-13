//  ch8main.cpp
//  
//
//  Created by Nina M. Peterson on 3/13/18.
//
//
// Chapter 8 - Programming Challenge 9, LoShu Magic Square
// Given a 3 x 3 array of integers, this program determines whether or not it
// is a Lo Shu Magic Square. That is a 3x3 grid holding the digits 1-9 exactly,
// in which all rows, columns, and diagonals add up to the same value. Students
// may assume that the array holds one instance each of the digits 1-9. The
// The problem does not require that the array be displayed or that both tests
// be done in the same run.
#include <iostream>
using namespace std;

const int SIZE = 3;  // Arrays will be 2-D 3x3 arrays

// Function prototype
void showArray (int[][SIZE]);
bool isMagicSquare(int[][SIZE]);

int main()
{
    int array1[][SIZE] = {{ 5, 4, 6 },  // NOT "magic"
        { 3, 2, 1 },  // col & diag sums = 15
        { 7, 9, 8 }}; // but row sums don't
    
    int array2[][SIZE] = {{ 4, 9, 2 },  // "magic"
        { 3, 5, 7 },
        { 8, 1, 6 }};
    
    cout << "Here is array 1 \n\n";
    showArray(array1);
    if (isMagicSquare(array1))
        cout << "\nIt is a magic square\n\n";
    else
        cout << "\nIt is not a magic square\n\n";
    
    cout << "Here is array 2 \n\n";
    showArray(array2);
    if (isMagicSquare(array2))
        cout << "\nIt is a magic square\n\n";
    else
        cout << "\nIt is not a magic square\n\n";
    
    return 0;
}

/*********************************************************************
 *                             showArray                             *
 * This function displays the contents of the 2D array passed to it. *
 *********************************************************************/
void showArray(int array[][SIZE])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

/***************************************************************
 *                           isMagicSquare                     *
 * This Boolean function determines if the 3 x 3 array of      *
 * integers passed to it is a magic square or not. A magic     *
 * square must contain one instance of each digit 1-9 and      *
 * every row, column, and diagonal must sum to the same value. *
 ***************************************************************/
bool isMagicSquare(int array[][SIZE])
{
    bool isMS = false;
    int total1 = 0;
    int total2 = 0;
    int total3 = 0;
    int total4 = 0;
    int total5 = 0;
    int total6 = 0;
    int total7 = 0;
    int total8 = 0;

    total1 += array[0][0];
    total1 += array[0][1];
    total1 += array[0][2];
    total2 += array[1][0];
    total2 += array[1][1];
    total2 += array[1][2];
    total3 += array[2][0];
    total3 += array[2][1];
    total3 += array[2][2];
    total4 += array[0][0];
    total4 += array[1][0];
    total4 += array[2][0];
    total5 += array[0][1];
    total5 += array[1][1];
    total5 += array[2][1];
    total6 += array[0][2];
    total6 += array[1][2];
    total6 += array[2][2];
    total7 += array[0][0];
    total7 += array[1][1];
    total7 += array[2][2];
    total8 += array[0][2];
    total8 += array[1][1];
    total8 += array[2][0];

    cout << total1 << endl;
    cout << total2 << endl;
    cout << total3 << endl;
    cout << total4 << endl;
    cout << total5 << endl;
    cout << total6 << endl;
    cout << total7 << endl;
    cout << total8 << endl;

    if (total1 == total2 && total1 == total3 && total1 == total4 && total1 == total5 && total1 == total6 && total1 == total7 && total1 == total8)
    {
        isMS = true;
    }
    else
    {
        isMS = false;
    }

    return isMS;
}

/* RUN RESULTS USING THIS PROGRAM'S DATA SETS
 
 Here is array 1
 
 5 4 6
 3 2 1
 7 9 8
 
 It is not a magic square
 
 Here is array 2
 
 4 9 2
 3 5 7
 8 1 6
 
 It is a magic square
 */
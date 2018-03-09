// Chapter 8 - Programming Challenge 4, Chips and Salsa
// This program produces a sales report for a salsa maker who markets
// 5 types of salsa. It includes total sales for all products and
// identifies the highest and lowest selling product. Two parallel
// arrays are used to store the salsa names and quantities sold of each.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
int getSalesData(string [], int []);
int posOfLargest(int []);
int posOfSmallest(int []);
void displayReport(string [], int [], int);

const int SIZE = 5;

int main()
{
    
    string name[SIZE] = {"mild  ", "medium", "sweet ", "hot   ", "zesty "};
    int sales[SIZE];   // Holds jars sold for each salsa type
    
    int totalJarsSold = getSalesData(name, sales);
    
    displayReport(name, sales, totalJarsSold);
    
    return 0;
}

/************************************************************
 *                    getSalesData                          *
 * Accepts the sales figures for each salsa type and stores *
 * them in the array passed to the function, as well as     *
 * accumulating and returning the total of all salsas sold. *
 ************************************************************/
int getSalesData(string name[], int sold[])
{
    int totalSales = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Jars sold last month of " << setw(6) << name[i] << ": ";
        cin >> sold[i];
        cin.ignore();

        totalSales += sold[i];
    }
    
    cout << endl;

    return totalSales;
}

/************************************************************
 *                    displayReport                         *
 * Displays the sales report using information from the     *
 * arrays passed to it.
 ************************************************************/
void displayReport(string name[], int sales[], int sold)
{
    string highSeller = name[0];
    string lowSeller = name[0];
    cout << "Salsa Sales Report" << endl << endl;
    cout << "Name       Jars Sold" << endl;
    cout << "____________________" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(6) << name[i] << right << setw(11) << sales[i] << endl;
    }
    cout << endl;
    cout << "Total Sales: " << sold << endl;
    cout << "High Seller: " << name[posOfLargest(sales)] << endl;
    cout << "Low Seller : " << name[posOfSmallest(sales)] << endl;
}

/************************************************************
 *                    posOfLargest                          *
 * Finds and returns the subscript of the array position    *
 * holding the largest value in the array passed to the     *
 * function.                                                *
 ************************************************************/
int posOfLargest(int largest[])
{
    int theLargest = 0;

    for (int i = 1; i < SIZE; i++)
    {
        if (largest[theLargest] < largest[i])
        {
            theLargest = i;
        }
    }

    return theLargest;
}
/************************************************************
 *                    posOfSmallest                         *
 * Finds and returns the subscript of the array position    *
 * holding the smallest value in the array passed to the    *
 * function.                                                *
 ************************************************************/
int posOfSmallest(int smallest[])
{
    int theSmallest = 0;

    for (int i = 1; i < SIZE; i++)
    {
        if (smallest[theSmallest] > smallest[i])
        {
            theSmallest = i;
        }
    }

    return theSmallest;
}

/* SAMPLE RUN RESULTS
 
 Jars sold last month of mild  : 316
 Jars sold last month of medium: 841
 Jars sold last month of sweet : 183
 Jars sold last month of hot   : 411
 Jars sold last month of zesty : 352
 
 Salsa Sales Report
 
 Name       Jars Sold
 ____________________
 mild          316
 medium        841
 sweet         183
 hot           411
 zesty         352
 
 Total Sales: 2103
 High Seller: medium
 Low Seller : sweet
 */
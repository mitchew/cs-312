#include <iostream>
#include <iomanip>
#include "Tips.cpp"

using namespace std;

int main()
{
    double totalBill;
    double taxRate;
    double tipRate;
    double tipAmt;
    char doAgain;
    
    cout << fixed << showpoint << setprecision(2);
    cout << "This program will compute a restaurant tip based on a\n"
        << "total bill amount and % the patron wishes to tip the server\n";
    
    cout << "\nTax % for this location: ";

    cin >> taxRate;

    while (taxRate < 0)
    {
        cout << "Tip % cannot be less than 0. "
            << "please re-enter tip %: ";
        cin >> taxRate;
    }

    taxRate = taxRate / 100;
    
    Tips tipHelper(taxRate);

    //Begin main processing loop
    do
    {
        cout << "\n************* Tip Helper ***********";

        cout << "\nEnter total bill amount: ";

        cin >> totalBill;

        while (totalBill < 0)
        {
            cout << "Total cannot be less than 0. "
                << "Please re-enter total bill amount: ";
            cin >> totalBill;
        }

        // Input and validate the desired tip percentage
        cout << "Enter desired tip % ";

        cin >> tipRate;

        while (tipRate < 0)
        {
            cout << "Tip % cannot be less than 0. ";
            cin >> tipRate;
        }

        tipRate = tipRate / 100;

        tipAmt = tipHelper.computeTip(totalBill, tipRate);

        cout << "\nThe tip should be $ " << tipAmt << endl << endl;

        // Does the user want to calculate another tip?
        cout << "Computer another tip (y/n)? ";
        cin >> doAgain;
    } while (toupper(doAgain) == 'Y');

    return 0;
}
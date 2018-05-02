// This program converts prefix expressions to Infix
// if char is a number
// if (isdigit(ch)) {int num; ostreamstream ostr; exprstream >> number; ostr << number; return ostr.str();}
// else
// prefix should fully parenthize infix eg *+327 = 3+2*7
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

//Prototype
bool isOperator(char x);
string prefixToInfix(istream &exprStream);

int main()
{
    string input;
    cout << "Enter prefix expressions to evaluate.\n"
         << "Press enter after each expression,\n"
         << "and press enter on a blank line to quit.\n\n";
    cout << "Enter a prefix expression to convert: ";
    getline(cin, input);
    while (input.size() != 0)
    {
        // Convert string to istringstream
        istringstream exprStream(input);
        // Evaluate the prefix expression
        cout << prefixToInfix(exprStream) << endl;
        // Get next line of input
        cout << "Enter a prefix expression to convert: ";
        getline(cin, input);
    }
    return 0;
}

bool isOperator(char x)
{
    switch (x)
    {
        case '+':
        case '-':
        case '/':
        case '*':
            return true;
    }
    return false;
}

string prefixToInfix(istream &exprStream)
{
    char ch;
    exprStream >> ch;

    if (isdigit(ch))
    {
        int num;
        ostringstream ostr;

        exprStream >> num;
        // convert expression to string and return it
        ostr << num;

        return ostr.str();
    }
    else
    {
        ostringstream ostr;
        ostr << ch;
        // needs two recursive calls to itself
        // prefixToInfix(exprStream);

        return ostr.str();
    }
}
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

string prefixToInfix(istream & exprStream);

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
// shamelessly stolen from the book after hours of failure to complete myself

string prefixToInfix(istream & exprStream)
{
    char ch = exprStream.peek();

    while (isspace(ch))
    {
        ch = exprStream.get();
        ch = exprStream.peek();
    }

    if (isdigit(ch))
    {
        string number;
        exprStream >> number;
        return number;
    }
    else
    {
        ch = exprStream.get();
        string value1 = prefixToInfix(exprStream);
        string value2 = prefixToInfix(exprStream);

        switch(ch)
        {
            case '+': return "(" + value1 + "+" + value2 + ")";
            case '-': return "(" + value1 + "-" + value2 + ")";
            case '*': return "(" + value1 + "*" + value2 + ")";
            case '/': return "(" + value1 + "/" + value2 + ")";
            default: cout << "Bad input expression";
                exit(1);
        }
    }
}
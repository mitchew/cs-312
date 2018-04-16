// Lab 10 Author: Mitchell Wilson, Matt Vaccaro
#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Squares
{
    private:
    int length;
    // int *sq;
    unique_ptr<int[]> sq;

    public:
    Squares(int len)
    {
        length = len;
        sq = make_unique<int[]>(length);
        for(int k = 0; k < length; k++)
        {
            sq[k] = (k+1) * (k+1);
        }
        cout << "Construct an object of size " << length << endl;
    }

    void print()
    {
        for (int k = 0; k < length; k++)
        {
            cout << sq[k] << " ";
        }
        cout << endl;
    }

    ~Squares()
    {
        // delete [] sq;
        cout << "Destroy object of size " << length << endl;
    }
};

void outputSquares(shared_ptr<Squares> sqPtr)
{
    cout << "The list of squares is: ";
    sqPtr->print();
}

int main()
{
    // Squares *sqPtr = new Squares(3);
    shared_ptr<Squares> sqPtr = make_shared<Squares>(3);
    // cout << sqPtr;
    outputSquares(sqPtr);

    // delete sqPtr;

    return 0;
}
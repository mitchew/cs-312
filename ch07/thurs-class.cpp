#include <iostream>
int main()
{
    enum Tree {ELM, ASH, OAK} tree1;
    std::cout << tree1;
    tree1 = OAK;
    std::cout << tree1;
}
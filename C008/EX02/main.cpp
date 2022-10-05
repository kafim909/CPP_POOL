# include "MutantStack.Class.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(10);
    mstack.push(15);
    mstack.push(20);
    mstack.push(25);
    mstack.push(30);
    mstack.push(35);
    std::cout << mstack.top() << std::endl;
    for (MutantStack<int>::iterator beg = mstack.begin(); beg != mstack.end(); beg++)
        std::cout << *beg << std::endl;

}
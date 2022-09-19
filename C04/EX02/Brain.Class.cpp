#include "Brain.Class.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
}

Brain &Brain::operator=(const Brain& op)
{
    int i;

    i = -1;
    while (++i < 5)
        this->ideas[i] = op.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
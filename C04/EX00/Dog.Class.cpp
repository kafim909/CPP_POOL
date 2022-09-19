#include "Dog.Class.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
}

Dog &Dog::operator=(const Dog& op)
{
    this->type = op.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Waf" << std::endl;
}
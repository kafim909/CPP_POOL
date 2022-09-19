#include "Animal.Class.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
}

Animal &Animal::operator=(const Animal& op)
{
    this->type = op.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Unknow Scream" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}
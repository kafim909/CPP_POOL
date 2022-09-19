#include "WrongAnimal.Class.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& op)
{
    this->type = op.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Wrong Unknown Scream" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}
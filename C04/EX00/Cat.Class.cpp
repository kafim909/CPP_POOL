#include "Cat.Class.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
}

Cat &Cat::operator=(const Cat& op)
{
    this->type = op.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miaou" << std::endl;
}

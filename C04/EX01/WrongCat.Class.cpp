#include "WrongCat.Class.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat& op)
{
    this->type = op.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "Wrong Miaou" << std::endl;
}
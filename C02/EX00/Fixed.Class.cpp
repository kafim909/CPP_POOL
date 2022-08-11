#include "Fixed.Class.hpp"

Fixed::Fixed() 
{
    std::cout << "Default constructor Called" << std::endl;
    this->_value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Desstructor Called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor Called" << std::endl;
    this->_value = copy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed& op)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &op)
        return (*this);
    this->_value = op.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "Get rawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}



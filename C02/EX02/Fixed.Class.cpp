#include "Fixed.Class.hpp"

Fixed::Fixed() 
{
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = value << this->_nbrOfFractionalBits;
}

Fixed::Fixed(float const value)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = (int)(roundf(value * (1 << this->_nbrOfFractionalBits)));
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor Called" << std::endl;
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &op)
{
    out << op.toFloat();
    return (out);
}


float Fixed::toFloat(void) const
{
    return (float(this->_value) / ((float)(1 << this->_nbrOfFractionalBits)));
}

int Fixed::toInt(void) const
{
    return (roundf(this->toFloat())); 
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
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

Fixed Fixed::operator+(const Fixed& op) const
{
    Fixed temp = Fixed();
    temp._value = this->_value + op._value;
    return (temp);
}

Fixed Fixed::operator-(const Fixed& op) const
{
    Fixed temp = Fixed();
    temp._value = this->_value - op._value;
    return (temp);
}

Fixed Fixed::operator*(const Fixed& op) const
{
    return (Fixed((this->_value >> this->_nbrOfFractionalBits) * (op._value >> this->_nbrOfFractionalBits)));
}

Fixed Fixed::operator/(const Fixed& op) const
{
    return (Fixed((this->_value >> this->_nbrOfFractionalBits) / (op._value >> this->_nbrOfFractionalBits)));
}

Fixed Fixed::operator++()
{
    this->_value++;
    return (*this);
}

Fixed Fixed::operator--()
{
    this->_value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    this->_value --;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    this->_value ++;
    return (*this);
}

bool operator>(const Fixed& op1, const Fixed& op2)
{
    return (op1.getRawBits() > op2.getRawBits());
}

bool operator<(const Fixed& op1, const Fixed& op2)
{
    return (op1.getRawBits() < op2.getRawBits());
}

bool operator>=(const Fixed& op1, const Fixed& op2)
{
    return (op1.getRawBits() >= op2.getRawBits());
}

bool operator<=(const Fixed& op1, const Fixed& op2)
{
    return (op1.getRawBits() <= op2.getRawBits());
}

bool operator==(const Fixed& op1, const Fixed& op2)
{
    return (op1.getRawBits() == op2.getRawBits());
}

bool operator!=(const Fixed& op1, const Fixed& op2)
{
    return (op1.getRawBits() != op2.getRawBits());
}

Fixed static min(Fixed &op1, Fixed &op2)
{
    if (op1 < op2)
        return (op1);
    return (op2);
}

Fixed static min(Fixed const &op1, Fixed const &op2)
{
    if (op1 < op2)
        return (op1);
    return (op2);
}

Fixed static max(Fixed &op1, Fixed &op2)
{
    if (op1 > op2)
        return (op1);
    return (op2);
}

Fixed static max(Fixed const &op1, Fixed const &op2)
{
    if (op1 > op2)
        return (op1);
    return (op2);
}
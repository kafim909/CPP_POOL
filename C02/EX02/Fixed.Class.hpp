#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <cmath>
# include <iostream>
# pragma once


class Fixed
{
    public:

        Fixed();
        Fixed(int const value);
        Fixed(float const value);
        Fixed(const Fixed&);
        ~Fixed();

        Fixed &operator=(const Fixed& op);

        Fixed operator+(const Fixed& op) const;
        Fixed operator-(const Fixed& op) const;
        Fixed operator*(const Fixed& op) const;
        Fixed operator/(const Fixed& op) const;
        
        Fixed operator++();
        Fixed operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        float toFloat(void) const;
        int toInt(void) const;

		int getRawBits(void) const;
		void setRawBits(int const raw);

        const static Fixed min(Fixed const &op1, Fixed const &op2);
        const static Fixed max(Fixed const &op1, Fixed const &op2);
        static Fixed min(Fixed &op1, Fixed &op2);
        static Fixed max(Fixed &op1, Fixed &op2);

    private:

        int					_value;
        static int const	_nbrOfFractionalBits = 8;

};

        std::ostream &operator<<(std::ostream &out, const Fixed &op);
        bool operator>(const Fixed& op1, const Fixed& op2);
        bool operator<(const Fixed& op1, const Fixed& op2);
        bool operator>=(const Fixed& op1, const Fixed& op2);
        bool operator<=(const Fixed& op1, const Fixed& op2);
        bool operator==(const Fixed& op1, const Fixed& op2);
        bool operator!=(const Fixed& op1, const Fixed& op2);

#endif
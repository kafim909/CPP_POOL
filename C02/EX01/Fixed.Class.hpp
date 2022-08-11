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
        Fixed &operator=(const Fixed& op);
        ~Fixed();

        float toFloat(void) const;
        int toInt(void) const;

        friend std::ostream &operator<<(std::ostream &out, const Fixed &op); 

		int getRawBits(void) const;
		void setRawBits(int const raw);

    private:

        int					_value;
        static int const	_nbrOfFractionalBits = 8;

};

#endif
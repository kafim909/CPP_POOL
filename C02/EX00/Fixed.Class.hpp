#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# pragma once
# include <iostream>

class Fixed
{
    public:

        Fixed();
        Fixed(const Fixed&);
        Fixed &operator=(const Fixed& op);
        ~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);

    private:

        int					_value;
        static int const	_nbrBits = 8;

};

#endif
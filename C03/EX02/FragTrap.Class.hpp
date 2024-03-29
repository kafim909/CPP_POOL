#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# pragma once
# include <iostream>
# include "ClapTrap.Class.hpp"


class FragTrap : public ClapTrap
{
    public:

        FragTrap(std::string name);
        FragTrap(const FragTrap&);
        FragTrap &operator=(const FragTrap& op);
        ~FragTrap();


        void highFiveGuys(void);
        
    private:

};

#endif
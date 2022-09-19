#ifndef DIAMONDTRAP_CLASS_HPP
# define DIAMONDTRAP_CLASS_HPP

# pragma once
# include <iostream>
# include "ClapTrap.Class.hpp"
# include "ScavTrap.Class.hpp"
# include "FragTrap.Class.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
    public:

        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap&);
        DiamondTrap &operator=(const DiamondTrap& op);
        ~DiamondTrap();

        std::string getName() const;
        void attack(std::string name);  
        void whoAmI();

    private:
        std::string _name;

};

#endif
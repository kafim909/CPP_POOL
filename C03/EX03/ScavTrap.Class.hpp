#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# pragma once
# include <iostream>
# include "ClapTrap.Class.hpp"


class ScavTrap : virtual public ClapTrap
{
    public:

        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap&);
        ScavTrap &operator=(const ScavTrap& op);
        ~ScavTrap();

        void guardGate();
        void attack (const std::string &target);


    private:



};

#endif
#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# pragma once
# include <iostream>

class ClapTrap
{
    public:

        ClapTrap(std::string name);
        ClapTrap(const ClapTrap&);
        ClapTrap &operator=(const ClapTrap& op);
        ~ClapTrap();
    
		void attack (const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);


    private:
        std::string _name;
        unsigned int _healthPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;

};

#endif
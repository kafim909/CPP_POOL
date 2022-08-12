#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# pragma once
# include <iostream>

class ClapTrap
{
    public:

        ClapTrap(std::string name);
        ClapTrap(std::string name, unsigned int healthPoints, unsigned int energyPoints, unsigned int attackDamage);
        ClapTrap(const ClapTrap&);
        ClapTrap &operator=(const ClapTrap& op);
        ~ClapTrap();
    
		void attack (const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

        void setHealthPoints(unsigned int const value);
        void setEnergyPoints(unsigned int const value);
        void setAttackDamage(unsigned int const value);
        void setName(std::string name);

        unsigned int const getHealthPoints(void);
        unsigned int const getEnergyPoints(void);
        unsigned int const getAttackDamage(void);
        std::string const getName(void);

    private:

        std::string _name;
        unsigned int _healthPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;

};

#endif
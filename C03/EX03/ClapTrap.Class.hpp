#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# pragma once
# include <iostream>

class ClapTrap
{
    public:

        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, unsigned int healthPoints, unsigned int energyPoints, unsigned int attackDamage);
        ClapTrap(const ClapTrap&);
        ClapTrap &operator=(const ClapTrap& op);
        ~ClapTrap();
    
		void attack (const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

        void setHealthPoints(unsigned int value);
        void setEnergyPoints(unsigned int value);
        void setAttackDamage(unsigned int value);
        void setName(std::string name);

        unsigned int getHealthPoints(void) const;
        unsigned int getEnergyPoints(void) const;
        unsigned int getAttackDamage(void) const;
        std::string getName(void) const;


    private:
    
        std::string _name;
        unsigned int _healthPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
        unsigned int _healthMax;
};

#endif
#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

# pragma once
# include <iostream>
# include "Weapon.Class.hpp"

class HumanA
{
    public:
    
        HumanA(std::string name, Weapon &Weapon);
        ~HumanA();
        void const attack(void);
        std::string const getName(void);

    private:
        Weapon &_WeaponA;
        std::string _name;
};

#endif
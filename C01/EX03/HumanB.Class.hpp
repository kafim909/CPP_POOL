#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

# pragma once
# include <iostream>
# include "Weapon.Class.hpp"

class HumanB
{
    public:

        HumanB(std::string name);
        ~HumanB();
        void const attack(void);
        void setWeapon(Weapon &Weapon);
        std::string getName(void);

    private:
    
        Weapon *_WeaponB;
        std::string _name;
};

#endif
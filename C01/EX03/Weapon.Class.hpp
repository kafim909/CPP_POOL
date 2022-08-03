#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

# pragma once
# include <iostream>

class Weapon
{
    public:
        Weapon(std::string type);
        ~Weapon();
        void setType(std::string type);
        std::string const &getType(void);

    private:
        std::string _type;
};

#endif
#include "ClapTrap.Class.hpp"
#include "ScavTrap.Class.hpp"
#include "FragTrap.Class.hpp"



int main()
{
    ClapTrap roger = ClapTrap("roger");
    ScavTrap joe = ScavTrap("joe");
    FragTrap steve = FragTrap("steve");

    roger.attack("Joe");
    joe.takeDamage(roger.getAttackDamage());
    roger.attack("Joe");
    joe.takeDamage(roger.getAttackDamage());
    steve.highFiveGuys();

    steve.attack("roger");
    roger.takeDamage(steve.getAttackDamage());
    joe.attack("steve");
    steve.takeDamage(joe.getAttackDamage());



}
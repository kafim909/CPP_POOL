#include "ClapTrap.Class.hpp"
#include "ScavTrap.Class.hpp"
#include "FragTrap.Class.hpp"



int main()
{
    ClapTrap roger = ClapTrap("roger");
    ScavTrap joe = ScavTrap("joe");

    roger.attack("Joe");
    joe.takeDamage(roger.getAttackDamage());
    roger.attack("Joe");
    joe.takeDamage(roger.getAttackDamage());
    roger.attack("Joe");
    joe.takeDamage(roger.getAttackDamage());
    roger.attack("Joe");
    joe.takeDamage(roger.getAttackDamage());
    roger.attack("Joe");
    joe.takeDamage(roger.getAttackDamage());
    roger.attack("Joe");
    joe.takeDamage(roger.getAttackDamage());
    joe.guardGate();

    joe.beRepaired(5);
    joe.beRepaired(5);
    joe.beRepaired(5);
    joe.beRepaired(5);

    roger.attack("Joe");
    joe.takeDamage(roger.getAttackDamage());
    joe.attack("roger");
    roger.takeDamage(joe.getAttackDamage());

}
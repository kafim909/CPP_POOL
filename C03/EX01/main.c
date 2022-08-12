#include "ClapTrap.Class.hpp"
#include "ScavTrap.Class.hpp"


int main()
{
    ScavTrap jean = ScavTrap("jean");

    jean.attack("roger");
    jean.attack("roger");
    jean.attack("roger");
    jean.attack("roger");

    jean.takeDamage(2);
    jean.beRepaired(1);
    jean.takeDamage(5);
    jean.beRepaired(10);
    jean.takeDamage(2);    
    jean.beRepaired(1);
    jean.beRepaired(1);
    jean.beRepaired(1);
    jean.beRepaired(1);
    jean.attack("roger");
    jean.takeDamage(12);
    jean.attack("roger");
    jean.takeDamage(12);
}
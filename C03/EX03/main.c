#include "ClapTrap.Class.hpp"
#include "ScavTrap.Class.hpp"
#include "FragTrap.Class.hpp"
#include "DiamondTrap.Class.hpp"



int main()
{
    ClapTrap roger = ClapTrap("roger");
    ScavTrap joe = ScavTrap("joe");
    FragTrap steve = FragTrap("steve");
    std::cout << std::endl << std::endl;
    DiamondTrap Diamond("NICO");

    Diamond.whoAmI();
    std::cout << "Diamond : " << Diamond.getAttackDamage() << std::endl;
    std::cout << "Diamond : " << Diamond.getEnergyPoints() << std::endl;
    std::cout << "Diamond : " << Diamond.getHealthPoints() << std::endl;
    std::cout << "ScavTrap energy points : " << joe.getEnergyPoints() << std::endl;
    std::cout << "Fragtrap attack damage : " << steve.getAttackDamage() <<std::endl;
    std::cout << "Fragtrap health point : " << steve.getHealthPoints() << std::endl;


    Diamond.attack("Joe");

}
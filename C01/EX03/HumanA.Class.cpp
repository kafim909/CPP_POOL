#include "HumanA.Class.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : _name(name), _WeaponA(Weapon)
{
	std::cout << name << " is born and ready to kick you with his " << Weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " is dead" << std::endl;
}

std::string const HumanA::getName(void)
{
	return(this->_name);
}

void const HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_WeaponA.getType() << std::endl;
}
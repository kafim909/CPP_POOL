#include "HumanB.Class.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << name << " is born" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " is dead" << std::endl;
}

std::string HumanB::getName(void)
{
	return(this->_name);
}

void HumanB::setWeapon(Weapon &Weapon)
{
	this->_WeaponB = &Weapon;
}

void const HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_WeaponB->getType() << std::endl;
}

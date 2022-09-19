#include "DiamondTrap.Class.hpp"

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	this->setAttackDamage(200);
	this->setEnergyPoints(50);
	this->setHealthPoints(200);
	ClapTrap::setName(name + "_Clap_Name");
	std::cout << "Diamond " << name << " Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ScavTrap(copy), FragTrap(copy), ClapTrap(copy)
{
	*this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& op)
{
	if (this == &op)
		return (*this);
	
	this->setAttackDamage(op.getHealthPoints());
	this->setEnergyPoints(op.getEnergyPoints());
	this->setAttackDamage(op.getAttackDamage());
	this->setName(op.getName());

	return (*this);
}

void	DiamondTrap::attack(std::string name)
{
	ScavTrap::attack(name);
}

std::string	DiamondTrap::getName() const
{
	return(this->_name);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Who am i?" << std::endl;
	std::cout <<"DiamondTrap name : " << _name << std::endl;
	std::cout <<"Claptrap name : " << ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond " << this->getName() << " desctructor called" << std::endl;
}
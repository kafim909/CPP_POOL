#include "ClapTrap.Class.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _healthPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& op)
{
    if (this == &op)
        return (*this);
    this->_name = op._name;
    this->_attackDamage = op._attackDamage;
    this->_energyPoints = op._energyPoints;
    this->_attackDamage = op._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints && this->_healthPoints)
	{
		std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
		return ;
	}
	if (!this->_healthPoints)	
	{
		std::cout << this->_name << " is dead!" << std::endl;
		return ;
	}
	std::cout << this->_name << " does not have energy anymore, cannot attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_healthPoints)
	{
		std::cout << this->_name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << this->_name << "  gets attacked, causing " << amount << " points of damage!" << std::endl;
	if (amount >= this->_healthPoints)
	{
		this->_healthPoints = 0;
		std::cout << this->_name << " is dead!" << std::endl;
		return ;
	}
	this->_healthPoints -= amount;
	std::cout << this->_name << " now have " << this->_healthPoints << " health points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints && this->_healthPoints)
	{
		std::cout << this->_name << " took some pills and get " << amount << " health points back!" << std::endl;
		this->_healthPoints += amount;
		if (this->_healthPoints > 10)
		this->_healthPoints = 10;
		this->_energyPoints--;
		std::cout << this->_name << " now have " << this->_healthPoints << " health points!" << std::endl;
		return ;
	}
	if (!this->_healthPoints)	
	{
		std::cout << this->_name << " is dead!" << std::endl;
		return ;
	}
	std::cout << this->_name << " does not have energy anymore, cannot repair!" << std::endl;
}

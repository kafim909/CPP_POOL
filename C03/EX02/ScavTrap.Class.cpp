#include "ScavTrap.Class.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) 
{
    *this = copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& op)
{
    if (this == &op)
        return (*this);
    
    this->setAttackDamage(op.getHealthPoints());
    this->setEnergyPoints(op.getEnergyPoints());
    this->setAttackDamage(op.getAttackDamage());
    this->setName(op.getName());

	return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "Gate keeper mode enabled" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->getEnergyPoints() && this->getHealthPoints())
	{
		std::cout << this->getName() << " hits feircely " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->setEnergyPoints((this->getEnergyPoints() - 1));
		return ;
	}
	if (!this->getHealthPoints())	
	{
		std::cout << this->getName() << " is dead!" << std::endl;
		return ;
	}
	std::cout << this->getName() << " does not have energy anymore, cannot attack!" << std::endl;
}
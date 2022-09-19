#include "FragTrap.Class.hpp"

FragTrap::FragTrap()
{
    this->setAttackDamage(200);
	this->setEnergyPoints(200);
	this->setHealthPoints(200);
    std::cout << "FragTrap constructor called" << std::endl;   
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 200, 200, 200)
{
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap& op)
{
    if (this == &op)
        return (*this);
    
    this->setAttackDamage(op.getHealthPoints());
    this->setEnergyPoints(op.getEnergyPoints());
    this->setAttackDamage(op.getAttackDamage());
    this->setName(op.getName());

	return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->getName() << " destructor called" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
    std::string input;

    std::cout << "High Five? y/n" << std::endl;
    while (input.compare("y"))
    {
        std::getline (std::cin,input);
        if (input.compare("y"))
            std::cout << "try again" << std::endl;
    }
}
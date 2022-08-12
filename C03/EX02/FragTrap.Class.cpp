#include "FragTrap.Class.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) 
{

}

FragTrap &FragTrap::operator=(const FragTrap& op)
{

}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called" << std::endl;
}
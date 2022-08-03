#include "Weapon.Class.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destroyed" << std::endl;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string const &Weapon::getType(void)
{
	std::string const &refType = this->_type;
	// std::cout << "type : " << this->_type << " ref type : " << refType << std::endl;
	return(refType);
}
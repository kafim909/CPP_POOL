#include "Player.Class.hpp"

Player::Player(std::string name)
{
    std::cout << name << " is born" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        _is_free[i] = 0;
        _inventory[i] = NULL;
    }
    _sizeUnequiped = 0;
    _name = name;
}

Player::Player(const Player &copy)
{
    *this = copy;
}

Player &Player::operator=(const Player& op)
{
    std::cout << "coucou" << std::endl;
    this->_name = op._name;
    for (int i = 0; i < 4; i++)
    {
        if (this->_is_free[i])
            delete this->_inventory[i];
        if (op._is_free[i])
        {
            this->_inventory[i] = op._inventory[i]->clone();
            this->_is_free[i] = 1;
        }
        else
            this->_is_free[i] = 0;
    }
    return (*this);
}

Player::~Player()
{
    std::cout << _name <<" is dead" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (_is_free[i])
            delete _inventory[i];
    }
    for (int i = 0; i < _sizeUnequiped; i++)
        delete _unequiped[i];
}

void Player::equip(AMateria* m)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (!_is_free[i])
        {
            _inventory[i] = m;
            _is_free[i] = 1;
            return ;
        }
        i++;
    }
}

std::string const &Player::getName() const
{
    return(_name);
}

void Player::unequip(int idx)
{
    if (idx < 0 || idx > 4)
    {        
        std::cout << "Inventory index out of bounds" << std::endl;
        return ;
    }
    if (_sizeUnequiped > 15)
    {
        std::cout << "Cannot unequip more, memory full" << std::endl;
        return ;
    }
    if (_is_free[idx])
    {
        _unequiped[_sizeUnequiped] = _inventory[idx];
        _sizeUnequiped++;
        _inventory[idx] = NULL;
        _is_free[idx] = 0;
        return ;
    }
    std::cout << "No materia at this index" << std::endl;    
}

void Player::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 4)
        std::cout << "Inventory index out of bounds" << std::endl;
    if (_is_free[idx]) 
    {
        _inventory[idx]->use(target);
        delete _inventory[idx];
        _inventory[idx] = NULL;
        _is_free[idx] = 0;
        return ;
    }
    else
        std::cout << "No materia at this index" << std::endl;
}

void    Player::printInventory()
{
    std::cout << _name << "'s inventory" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            std::cout << i << ". " << _inventory[i]->getType() << std::endl;
    }
}
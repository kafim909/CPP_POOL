#include "Dog.Class.hpp"

Dog::Dog()
{
    int i;

    i = -1;
    type = "Dog";
    brain = new Brain;
    while (++i < 5)
        brain->ideas[i] = "Bones";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
}

Dog &Dog::operator=(const Dog& op)
{
    this->type = op.type;
    for (int i = 0; i < 5; i++)
        this->brain->ideas[i] = op.brain->ideas[i];
    return (*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Waf" << std::endl;
}

void Dog::printIdea(int index) const
{
    int size = sizeof(this->brain->ideas);
    if (index > size || index < 0)
    {
        std::cerr << "Error : index is out of bounds" << std::endl;
        return ;
    }
    std::cout << this->brain->ideas[index] << std::endl;
}

void Dog::setNewIdea(std::string idea) 
{
    for (int i = 0; i < 5; i++)
        this->brain->ideas[i] = idea;
}
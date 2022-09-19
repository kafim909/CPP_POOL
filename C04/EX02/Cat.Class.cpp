#include "Cat.Class.hpp"

Cat::Cat()
{
    int i;

    i = -1;
    brain = new Brain;
    while (++i < 5)
        brain->ideas[i] = "Wet Food";
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
}

Cat &Cat::operator=(const Cat& op)
{
    this->type = op.type;
    for (int i = 0; i < 5; i++)
        this->brain->ideas[i] = op.brain->ideas[i];
    return (*this);
}

Cat::~Cat()
{
    delete brain;
    
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miaou" << std::endl;
}

void Cat::printIdea(int index) const
{
    int size = sizeof(this->brain->ideas);
    if (index > size || index < 0)
    {
        std::cerr << "Error : index is out of bounds" << std::endl;
        return ;
    }
    std::cout << this->brain->ideas[index] << std::endl;
}

void Cat::setNewIdea(std::string idea) 
{
    for (int i = 0; i < 5; i++)
        this->brain->ideas[i] = idea;
}
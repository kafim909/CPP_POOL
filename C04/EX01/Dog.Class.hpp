#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include <iostream>
# include "Animal.Class.hpp"
# include "Brain.Class.hpp"


class Dog : public Animal
{
    public:

        Dog();
        Dog(const Dog&);
        Dog &operator=(const Dog& op);
        ~Dog();
        void makeSound() const;
        void printIdea(int index) const;
        void setNewIdea(std::string idea);

    private:
        Brain *brain;
};

#endif
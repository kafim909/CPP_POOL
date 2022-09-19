#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include <iostream>
# include "Animal.Class.hpp"

class Dog : public Animal
{
    public:

        Dog();
        Dog(const Dog&);
        Dog &operator=(const Dog& op);
        ~Dog();
        void makeSound() const;


    private:

};

#endif
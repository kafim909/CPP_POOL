#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include <iostream>
# include "Animal.Class.hpp"

class Cat : public Animal
{
    public:

        Cat();
        Cat(const Cat&);
        Cat &operator=(const Cat& op);
        ~Cat();
        void makeSound() const;
        

    private:

};

#endif
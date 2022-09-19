#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include <iostream>
# include "Animal.Class.hpp"
# include "Brain.Class.hpp"
class Cat : public Animal
{
    public:

        Cat();
        Cat(const Cat&);
        Cat &operator=(const Cat& op);
        ~Cat();
        void makeSound() const;
        void printIdea(int index) const;
        void setNewIdea(std::string idea);        

    private:
        Brain *brain;
        std::string _name;

};

#endif
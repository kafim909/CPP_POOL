#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

# include <iostream>
# include "WrongAnimal.Class.hpp"

class WrongCat : public WrongAnimal
{
    public:

        WrongCat();
        WrongCat(const WrongCat&);
        WrongCat &operator=(const WrongCat& op);
        ~WrongCat();
        void makeSound() const;

    private:

};

#endif
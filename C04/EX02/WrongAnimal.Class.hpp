#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

# include <iostream>

class WrongAnimal
{
    public:

        WrongAnimal();
        WrongAnimal(const WrongAnimal&);
        WrongAnimal &operator=(const WrongAnimal& op);
        virtual ~WrongAnimal();
        std::string getType() const;
        void makeSound() const;

    protected:

        std::string type;

    private:

};

#endif
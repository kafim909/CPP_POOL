#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>

class Animal
{
    public:

        Animal();
        Animal(const Animal&);
        Animal &operator=(const Animal& op);
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
        virtual void printIdea(int index) const = 0;
        virtual void setNewIdea(std::string idea) = 0;

    
    protected:

        std::string type;

    private:

};

#endif
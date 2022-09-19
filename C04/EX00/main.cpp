#include "Cat.Class.hpp"
#include "Dog.Class.hpp"
#include "WrongCat.Class.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    const WrongAnimal* Meta = new WrongAnimal();
    const WrongAnimal* Cat = new WrongCat();
    std::cout << Cat->getType() << " " << std::endl;
    std::cout << "wrong Cat : ";
    Cat->makeSound();
    std::cout << "wrong Animal : ";
    Meta->makeSound();

    delete Cat;
    delete Meta;
    return (0);    
}
#include "Cat.Class.hpp"
#include "Dog.Class.hpp"
#include "WrongCat.Class.hpp"

void    printideas(const Animal *animal)
{
    for (int i = 0; i < 5; i++)
        animal->printIdea(i);
}

void    checkCopy()
{
    std::cout << "    CHECK COPY    " << std::endl;
    Dog dog;
    Cat cat;

    dog.setNewIdea("New Bone");
    cat.setNewIdea("New Wet Food");

    Cat cat2;
    cat2 = cat;
    Dog dog2;
    dog2 = dog;

    for (int i = 0; i < 5; i++)
    {
        std::cout << i + 1 << ". " << std::endl;
        dog2.printIdea(i);
        cat2.printIdea(i);
    }

}

int main()
{
    int i;

    i = -1;
    const Animal *a[10];

    while (++i < 5)
        a[i] = new Dog();
    while (i < 10)
        a[i++] = new Cat();

    i = -1;
    while (++i < 10)
    {
       a[i]->makeSound();
       printideas(a[i]);
    }
    i = -1;
    while (++i < 10)
        delete a[i];

    // const Animal* j = new Dog();
    // const Animal* f = new Cat();
    // delete j;//should not create a leak
    // delete f;

    // checkCopy();
}
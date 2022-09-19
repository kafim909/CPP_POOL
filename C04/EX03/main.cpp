#include "MateriaSource.Class.hpp"
#include "Player.Class.hpp"
#include "Ice.Class.hpp"
#include "Cure.Class.hpp"

void    MateriaSourceTestDeepCopy()
{
    MateriaSource *src = new MateriaSource();
    MateriaSource *src2 = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Ice());
    
    std::cout << "src materia pool" <<std::endl;
    src->PrintMateriaPool();

    src2->learnMateria(new Cure());
    src2->learnMateria(new Cure());

    std::cout << "src2 materia pool" <<std::endl;
    src2->PrintMateriaPool();   

    *src = *src2;

    std::cout << "src materia pool after copy from src2" << std::endl;
    src->PrintMateriaPool();

    delete src;
    delete src2;
}

void    PlayerTestDeepCopy()
{
    Player *max = new Player("max");   
    Player *jean = new Player("jean");

    max->equip(new Ice());
    max->equip(new Ice());
    jean->equip(new Cure());
    jean->equip(new Cure());
    max->printInventory();
    jean->printInventory();
    *max = *jean;
    std::cout << "Copy from jean to max, max should have only cure materias and be named jean" << std::endl;
    max->printInventory();
    delete max;
    delete jean;
}

void    testLeaksDroppedMateria()
{   
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *max = new Player("max");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    max->equip(tmp);
    tmp = src->createMateria("cure");
    max->equip(tmp);
    tmp = src->createMateria("ice");
    max->equip(tmp);
    tmp = src->createMateria("cure");
    max->equip(tmp);

    max->printInventory();

    max->unequip(0);
    max->unequip(1);
    max->unequip(2);
    max->unequip(3);
    
    max->printInventory();
    delete max;
    delete src;
}

void test42()
{   
    MateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());   
    src->learnMateria(new Cure());
    ICharacter* me = new Player("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Player("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
}

int main()
{

    std::cout << "Test provided by the subject :" << std::endl;
    test42();
    // // std::cout << std::endl << "Test Leaks dropped materia:" << std::endl;
    // // testLeaksDroppedMateria();
    // // std::cout << std::endl << "Test Deep copy player:" << std::endl;
    // // PlayerTestDeepCopy();
    // std::cout << std::endl << "Test Deep copy materia source:" << std::endl;
    // MateriaSourceTestDeepCopy();
}
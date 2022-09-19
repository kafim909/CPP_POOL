#ifndef PLAYER_CLASS_HPP
# define PLAYER_CLASS_HPP

# include <iostream>
# include "ICharacter.Class.hpp"
# include "MateriaSource.Class.hpp"



class Player : public ICharacter
{
    public:

        Player(std::string name);
        Player(const Player&);
        Player &operator=(const Player& op);
        virtual ~Player();

        std::string const & getName() const;
        void                equip(AMateria* m);
        void                unequip(int idx);
        void                use(int idx, ICharacter &target);
        void                printInventory();


    private:

        Player(void);
        AMateria    *_unequiped[15]; // array to get addresses of unequiped materia to avoid leaks
        int         _sizeUnequiped; // size of that array in real time
        std::string _name;
        AMateria    *_inventory[4];
        int         _is_free[4]; // int array to specify if a space in the invetory is free of a materia or not; 0=free, 1=occupied
};

#endif
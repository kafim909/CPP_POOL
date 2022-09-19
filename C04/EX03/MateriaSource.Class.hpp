#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

# include <iostream>
# include "IMateriaSource.Class.hpp"
# include "AMateria.Class.hpp"

class MateriaSource : public IMateriaSource
{
    public:

        MateriaSource();
        MateriaSource(const MateriaSource& copy);
        MateriaSource &operator=(const MateriaSource& op);
        ~MateriaSource();

        void        learnMateria(AMateria *m);
        AMateria*   createMateria(std::string const & type);
        void        deleteMateriaPool();
        void        PrintMateriaPool();

    private:

        AMateria *MateriaLearned[4];
        int      _size;
};

#endif
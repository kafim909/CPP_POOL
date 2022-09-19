#ifndef IMATERIASOURCE_CLASS_HPP
# define IMATERIASOURCE_CLASS_HPP

# include <iostream>
# include "AMateria.Class.hpp"

class IMateriaSource
{
    public:

        virtual ~IMateriaSource() {}
        virtual void        learnMateria(AMateria *m) = 0;
        virtual AMateria*   createMateria(std::string const & type) = 0;
        virtual void        PrintMateriaPool() = 0;
};

#endif
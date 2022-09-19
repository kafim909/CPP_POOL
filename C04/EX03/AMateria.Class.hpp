#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

# include <iostream>
# include "ICharacter.Class.hpp"

class ICharacter;


class AMateria
{
    public:

        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria&);
        virtual ~AMateria();

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

    protected :

        std::string _type;
    

};

#endif
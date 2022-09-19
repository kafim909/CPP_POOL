#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include <iostream>
# include "AMateria.Class.hpp"


class Ice : public AMateria
{
    public:

        Ice();
        Ice(const Ice&);
        Ice &operator=(const Ice& op);
        ~Ice();

        
        AMateria* clone() const;
        void use(ICharacter& target);

    private:

        
};

#endif
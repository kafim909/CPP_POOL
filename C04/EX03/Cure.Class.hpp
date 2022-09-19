#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include <iostream>
# include "AMateria.Class.hpp"


class Cure : public AMateria
{
    public:

        Cure();
        Cure(const Cure&);
        Cure &operator=(const Cure& op);
        ~Cure();

        AMateria* clone() const;
        void use(ICharacter& target);

    private:

};

#endif
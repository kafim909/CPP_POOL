#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <iostream>

class Brain
{
    public:

        Brain();
        Brain(const Brain&);
        Brain &operator=(const Brain& op);
        ~Brain();

        std::string ideas[5];

    private:

};

#endif
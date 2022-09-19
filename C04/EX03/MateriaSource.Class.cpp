#include "MateriaSource.Class.hpp"

MateriaSource::MateriaSource()
{
    _size = 0;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& op)
{
    for (int i = 0; i < this->_size; i++)
        delete this->MateriaLearned[i];
    for (int i = 0; i < op._size; i++)
        this->MateriaLearned[i] = op.MateriaLearned[i]->clone();
    this->_size = op._size;
    return (*this);
}

MateriaSource::~MateriaSource()
{
    deleteMateriaPool();
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (_size > 4)
    {
        std::cout << "Cannot learn more materia" << std::endl;
        return ;
    }
    MateriaLearned[_size] = m;
    _size++;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < _size; i++)
    {
        if (!MateriaLearned[i]->getType().compare(type))
            return (MateriaLearned[i]->clone());
    }
    return (0);
}

void    MateriaSource::PrintMateriaPool()
{
    for(int i = 0; i < _size; i++)
        std::cout << MateriaLearned[i]->getType() << std::endl;
}

void    MateriaSource::deleteMateriaPool()
{
    for (int i = 0; i < _size; i++)
        delete MateriaLearned[i];
}
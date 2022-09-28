#ifndef _ITER_HPP
# define _ITER_HPP

# include <iostream>

template <typename T>
void iter(T* tab, int size, void(*f)(T const &))
{
	for (int i = 0; i < size; i++)
		f(tab[i]);
}

template <typename T>
void printElem(T const &toPrint)
{
	std::cout << toPrint << " ";
}

#endif
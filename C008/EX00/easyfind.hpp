#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <array>
# include <iterator>
# include <list>
# include <map>
#include <algorithm>

# define RESET   "\033[0m"
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */

class nofind : public std::exception{
	virtual const void what() throw() {std::cout << "No occurence found" << std::endl;}
};

template <typename T>
typename T::iterator easyfind(T& Container, const int i){
	typename T::iterator ret = std::find(Container.begin(), Container.end(), i);
	return (ret);
}

template <typename T>
void	testOccurence(T &Container, const int i, std::string msg)
{
	std::cout << BLUE << msg << RESET << std::endl;
	typename T::iterator Occurence = easyfind(Container, i);
	if (Occurence != Container.end())
		std::cout << GREEN << "Found an occurence of the input inside the container" << RESET << std::endl << std::endl;
	else
		std::cout << RED << "No occurence of the input was found inside the container" << RESET << std::endl << std::endl;
}

# endif
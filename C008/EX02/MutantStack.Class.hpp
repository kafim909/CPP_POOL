#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <stack>

# define RESET   "\033[0m"
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */

template < typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public	:

        MutantStack<T, Container>() {}
        ~MutantStack<T, Container>() {}
        MutantStack<T, Container>(const MutantStack& copy)	: std::stack<T, Container>(copy) {}
        MutantStack<T, Container> &operator=(const MutantStack& op) {
			std::stack<T, Container>::operator=(op);
			return (*this);
		}

		typedef typename Container::iterator iterator;
		typedef typename Container::reverse_iterator reverse_iterator;

		iterator begin() 			{	return (this->c.begin());	}
		iterator end() 				{	return (this->c.end());		}

		reverse_iterator rbegin()	{	return this->c.rbegin();	}
		reverse_iterator rend() 	{	return this->c.rend();		}
};

#endif
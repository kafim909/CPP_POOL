#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

# include <iostream>
# include <vector>
# include <array>
# include <iterator>
# include <list>
# include <map>
# include <algorithm>

# define RESET   "\033[0m"
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */

class Span
{
    public:
		
        Span(const unsigned int N);
        Span(const Span&);
        Span &operator=(const Span& op);
        ~Span();

		const unsigned int getMaxSize() const;
		void	addNumber(const int num);

		class exceedSize : public std::exception{
			public :
				virtual const void what() throw();
		};
		class noElem : public std::exception{
			public :
				virtual const void what() throw();
		};

		const int	longuestSpan();
		const int 	shortestSpan();



    private:
		const unsigned int	_maxSize;
		std::vector<int>	Elements;

};

#endif
#ifndef CONVERT_CLASS_HPP
# define CONVERT_CLASS_HPP

# pragma once
# include <iostream>
# include <limits>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */


class Convert
{

    public:

        Convert();
        Convert(const Convert &copy);
        Convert &operator=(const Convert& op);
        ~Convert();

		class errors : public std::exception
		{	
			public :
				errors();
				virtual ~errors() throw();
		};

        const int           getInputType(const char *input);
		void				ConvertToInt(const char *input);
        void                ConvertToChar(const char *input);
        void                ConvertToFloat(const char *input);
        void                ConvertToDouble(const char *input);
        void                printNone();

    private:


};

#endif
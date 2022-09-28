#ifndef DATA_CLASS_HPP
# define DATA_CLASS_HPP

# pragma once
# include <iostream>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

class Data
{

    public:

		Data(int dataI, float dataF);
        Data(const Data &copy);
        Data &operator=(const Data& op);
        ~Data();

		int		getDataI() const;
		float 	getDataF() const;

    private:
		const int		_dataI;
		const float		_dataF;


};

std::ostream &operator<<(std::ostream &out, Data &data);

#endif
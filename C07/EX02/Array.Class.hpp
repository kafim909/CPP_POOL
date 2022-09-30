#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP

# pragma once
# include <iostream>
# include <limits>

# define RESET   "\033[0m"
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */

class errorIndex : public std::exception{
	public : 
		virtual const void what() throw() {std::cout << RED << "Index out of bounds" << RESET << std::endl;}
};

template <typename T = int>
class Array
{

    public:
		
// ----------------------------------------------------------- CONSTRUCTORS / DESTRUCTOR
        Array() : _size(0) {
			_tab = new T[0];
		}

        Array(const unsigned int size) : _size(size){
            _tab = new T[size];
			for (int i = 0; i < size; i++)
				_tab[i] = std::numeric_limits<T>::max();
        }

        Array(const Array &copy) : _size(copy.size()) {
            _tab = new T[_size];
			for (int i = 0; i < _size; i++)
				_tab[i] = copy.getElement(i);
		}

        ~Array(){
			delete[] _tab;
        };

// ----------------------------------------------------------- OPERATOR OVERLOADS

		// T &operator[](const unsigned int& index){
		// 	if (index > _size || index > std::numeric_limits<unsigned int>::max())
		// 			throw std::exception();			
		// 	return (_tab[index]);
		// }

		T &operator[](const unsigned int& index){
			if (index >= _size || index > std::numeric_limits<unsigned int>::max())
					throw errorIndex();			
			return (_tab[index]);
		}


        Array &operator=(const Array& op) {
			unsigned int size;
			if (op.size() < _size)
				size = op.size();
			else
				size = _size;
			for (int i = 0; i < size; i++)
				_tab[i] = op.getElement(i);
			return (*this);
		}

// ----------------------------------------------------------- ACCESSORS

		const unsigned int size() const {
			return (_size);
		}

		const T getElement(int index) const{
			return (_tab[index]);
		}

		// void	deleteTab(){
		// 	if (!_size)
		// 		delete _tab;
		// 	else
		// 		delete[] _tab;
		// }

    private:

// ----------------------------------------------------------- PRIVATE MEMBERS
        
        T                       *_tab;
        const unsigned int      _size;
};

// ----------------------------------------------------------- OVERLOADING STREAM OPERATOR

template <typename T>
std::ostream &operator<<(std::ostream &out, Array<T> &array)
{
	for (int i = 0; i < array.size(); i++)
		out << GREEN << "|| " << array.getElement(i) << " ";
	out << "||" << RESET << std::endl;
	return (out); 
}

#endif
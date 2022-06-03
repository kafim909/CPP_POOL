/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:31:23 by mtournay          #+#    #+#             */
/*   Updated: 2022/06/03 17:54:02 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonebookClass.hpp"

Phonebook::Phonebook(void)
{
    std::cout << "Constructor called" << std::endl;
    return ;
}

Phonebook::~Phonebook(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void    Phonebook::addContact(int index)
{
	std::string input;

	while (input.empty())
	{
		std::cout << "Please, enter your first name\n";
		std::getline (std::cin,input);
	}
	_Contact[index].setFirst(input);
	input.clear();
	while (input.empty())
	{
		std::cout << "Please, enter your last name\n";
		std::getline (std::cin,input);
	}
	_Contact[index].setLast(input);
	input.clear();
	while (input.empty())
	{
		std::cout << "Please, enter your darkest secret\n";
		std::getline (std::cin,input);
	}
	_Contact[index].setDarkest(input);
	input.clear();
	while (input.empty())
	{
		std::cout << "Please, enter your phone number\n";
		std::getline (std::cin,input);
	}
	_Contact[index].setNumber(input);
	input.clear();
}

void	Phonebook::printInfo(int index) const
{
	std::cout << _Contact[index].getFirst() << std::endl;
	std::cout << _Contact[index].getLast() << std::endl;
	std::cout << _Contact[index].getDarkest() << std::endl;
	std::cout << _Contact[index].getNumber() << std::endl;	
}

void	Phonebook::printAll(int count) const
{
	int	i;
	char dot;

	i = -1;
	while (++i < count)
	{
		
		std::cout << std::setw(10) << _Contact[i].getFirst().resize(9) << "|";
		std::cout << std::setw(10) << _Contact[i].getLast().resize(9) << "|";
		std::cout << std::setw(10) << _Contact[i].getDarkest().resize(9) << "|";
		std::cout << std::setw(10) << _Contact[i].getNumber().resize(9) << "|" << std::endl;	
	}
}

int	Phonebook::findContact(std::string name, int count) const
{
	int i;
	std::string get;

	i = -1;
	while (++i <= count)
		if (!name.compare(_Contact[i].getFirst()))
			return(i);
	return (-1);
}

void	Phonebook::searchContact(int count) const
{
	int			index;
	std::string	input;

	printAll(count);
	index = -1;
	std::cout << "Enter number of the contact to print it's informations" << std::endl;
	while (!(std::cin >> index) || index < 1 || index > count)
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		if (index < 1 || index > count)
			std::cout << "BAD INPUT, TRY AGAIN" << std::endl;
	}
	printInfo(index - 1);
	std::cin.clear();
	std::cin.ignore(10000,'\n');
}
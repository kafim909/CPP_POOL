/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:31:23 by mtournay          #+#    #+#             */
/*   Updated: 2022/07/25 12:04:40 by mtournay         ###   ########.fr       */
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

std::string	Phonebook::resizeString(std::string str) const
{
	if (str.length() > 10)
	{
		str.resize(10);
		str.back() = '.';
	}
	return(str);
}

void	Phonebook::printAll(int count) const
{
	int	i;
	char dot;
	std::string tempFirst;
	std::string tempLast;
	std::string tempDarkest;
	std::string tempNumber;

	i = -1;
	while (++i < count)
	{
		tempFirst = resizeString(_Contact[i].getFirst());
		tempLast = resizeString(_Contact[i].getLast());
		tempDarkest = resizeString(_Contact[i].getDarkest());
		tempNumber = resizeString(_Contact[i].getNumber());
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << tempFirst << "|";
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << tempLast << "|";
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << tempDarkest << "|";
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << tempNumber << "|" << std::endl;	
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
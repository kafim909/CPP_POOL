/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:31:18 by mtournay          #+#    #+#             */
/*   Updated: 2022/06/03 11:45:09 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"

Contact::Contact(void)
{
    std::cout << "Constructor called" << std::endl;
}

Contact::~Contact(void)
{
    std::cout << "Destructor called" << std::endl;
}

void Contact::setFirst(std::string f)
{
    this->_firstName = f;
}

void Contact::setLast(std::string l)
{
    this->_lastName = l;
}

void Contact::setDarkest(std::string d)
{
    this->_darkestSecret = d;
}

void Contact::setNumber(std::string n)
{
    this->_phoneNumber = n;
}

std::string Contact::getFirst(void) const
{
	return (this->_firstName);
}

std::string Contact::getLast(void) const
{
	return (this->_lastName);
}

std::string Contact::getDarkest(void) const
{
	return (this->_darkestSecret);
}

std::string Contact::getNumber(void) const
{
	return (this->_phoneNumber);
}

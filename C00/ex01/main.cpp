/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:40:13 by mtournay          #+#    #+#             */
/*   Updated: 2022/08/01 09:41:59 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonebookClass.hpp"

int main()
{
	std::string input;
	int	index;
	int	count;

	index = 0;
	count = 0;
	Phonebook phonebook;
	while (1)
	{
		std::getline (std::cin,input);
		if (!input.compare("ADD"))
		{
			if (index == 8)
				index = 0;
			phonebook.addContact(index);
			if (count < 8)
				count++;
			index++;
		}
		if (!input.compare("SEARCH"))
			phonebook.searchContact(count);
		if (!input.compare("EXIT"))
			exit(0);
	}
}

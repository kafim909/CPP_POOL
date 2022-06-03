/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:40:13 by mtournay          #+#    #+#             */
/*   Updated: 2022/06/03 15:58:21 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

int main()
{
	std::string input;
	int	i;

	i = 0;
	Phonebook phonebook;
	while (1)
	{
		std::getline (std::cin,input);
		if (!input.compare("ADD"))
		{
			if (i == 8)
				i = 7;
			phonebook.addContact(i);
			i++;
		}
		if (!input.compare("SEARCH"))
			phonebook.searchContact(i);
		if (!input.compare("EXIT"))
			exit(0);
	}
}

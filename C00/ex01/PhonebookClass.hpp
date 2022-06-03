/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:24:54 by mtournay          #+#    #+#             */
/*   Updated: 2022/06/03 17:54:01 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "ContactClass.hpp"

class Phonebook
{
    public:

    	Phonebook(void);
		~Phonebook(void);
		void	addContact(int index);
		void	searchContact(int count) const;
		void	exit(void) const;


	private:

		Contact _Contact[8];
		void	printInfo(int index) const;
		void	printAll(int count) const;
		int		findContact(std::string name, int count) const;
		void	Phonebook::truncate(std::string *str);

};

#endif
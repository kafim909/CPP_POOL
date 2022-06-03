/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:26:03 by mtournay          #+#    #+#             */
/*   Updated: 2022/06/03 17:48:12 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
    public:
    	Contact(void);
    	~Contact(void);
		

		void		setFirst(std::string f);
		void		setLast(std::string l);
		void		setDarkest(std::string d);
		void		setNumber(std::string n);
		void 		printAll(void)	const;
		
		std::string getFirst(void) const;
		std::string getLast(void) const;
		std::string getDarkest(void) const;
		std::string	getNumber(void) const;

	private:
    	std::string _firstName;
    	std::string _lastName;
    	std::string _darkestSecret;
    	std::string	_phoneNumber;
};

#endif
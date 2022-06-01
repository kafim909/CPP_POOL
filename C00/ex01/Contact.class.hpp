/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:26:03 by mtournay          #+#    #+#             */
/*   Updated: 2022/06/01 17:41:26 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <iomanip>

class Contact
{
    public:
    	Contact(void);
    	~Contact(void);
		
		std::string get_first(void) const;
		std::string get_last(void) const;
		std::string get_darkest(void) const;
		int		get_number(void) const;

		void	set_first(std::string f);
		void 	set_last(std::string l);
		void 	set_darkest(std::string d);
		void	set_number(int n);

	private:
    	std::string _first_name;
    	std::string _last_name;
    	std::string _darkest_secret;
    	int     _phone_n;
};

#endif
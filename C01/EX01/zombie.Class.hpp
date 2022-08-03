/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:51:23 by mtournay          #+#    #+#             */
/*   Updated: 2022/08/02 17:12:53 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iomanip>
# include <iostream>

class Zombie
{
	public:
		
		Zombie(void);
		~Zombie(void);

		void setName(std::string name);
		std::string getName(void) const;
		void announce(void) const;

	private:

		std::string name;

};

Zombie*    zombieHorde(int N, std::string name);

#endif
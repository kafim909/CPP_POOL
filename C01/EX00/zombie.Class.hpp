/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:51:23 by mtournay          #+#    #+#             */
/*   Updated: 2022/08/02 16:43:01 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iomanip>
# include <iostream>

class Zombie
{
	public:
		
		Zombie(std::string initName);
		~Zombie(void);

		std::string getName(void) const;
		void announce(void) const;

	private:

		std::string name;

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
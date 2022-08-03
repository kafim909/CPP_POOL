/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:51:29 by mtournay          #+#    #+#             */
/*   Updated: 2022/08/02 17:21:45 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.Class.hpp"

Zombie::Zombie(void)
{
    std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Destructor of " << getName() << " called" << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName(void) const
{
    return(this->name);
}

void Zombie::announce(void) const
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
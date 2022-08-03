/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:51:29 by mtournay          #+#    #+#             */
/*   Updated: 2022/08/02 15:31:22 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.Class.hpp"

Zombie::Zombie(std::string initName) : name(initName)
{
    std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie(void)
{

    std::cout << "Destructor of " << getName() << " called" << std::endl;
}

std::string Zombie::getName(void) const
{
    return(this->name);
}

void Zombie::announce(void) const
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
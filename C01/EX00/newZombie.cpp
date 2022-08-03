/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:13:49 by mtournay          #+#    #+#             */
/*   Updated: 2022/08/02 16:42:55 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.Class.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *newZ = new Zombie(name);
    return (newZ);
}
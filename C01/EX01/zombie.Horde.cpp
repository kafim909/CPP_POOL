/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:13:49 by mtournay          #+#    #+#             */
/*   Updated: 2022/08/02 17:19:11 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.Class.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
    int i;

    i = -1;
    Zombie *Horde = new Zombie[N];

    while (++i < N)
        Horde[i].setName(name);
    return (Horde);
}
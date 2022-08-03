/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:51:31 by mtournay          #+#    #+#             */
/*   Updated: 2022/08/02 16:45:03 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.Class.hpp"

int main()
{
    Zombie *Z = newZombie("Jimmy from the heap");
    std::cout << "message from the heap : Hi, i'm :" << std::endl;
    Z->announce();
    delete Z;
    randomChump("Marc from the stack");
}
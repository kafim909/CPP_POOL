/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtournay <mtournay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:40:51 by mtournay          #+#    #+#             */
/*   Updated: 2022/06/01 13:27:26 by mtournay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>

int main(int argc, char **argv)
{
	int	x;
	int	i;
	
	x = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (++x < argc)
	{
		i = -1;
		while (argv[x][++i])
			std::cout << (char) toupper(argv[x][i]);
	}
	std::cout << std::endl;
}
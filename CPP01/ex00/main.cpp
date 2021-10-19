/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:47:40 by kgale             #+#    #+#             */
/*   Updated: 2021/10/19 13:47:40 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	std::cout << "Using constructor Zombie for Albert:" << std::endl;
	{
		Zombie	zom1("Albert");
		zom1.announce();
	}
	std::cout << "\nUsing function newZombie for Frank:"<< std::endl;
	{
		Zombie	*zom2 = new Zombie("Frank");
		zom2->announce();
		delete zom2;
	}
	{
		std::cout << "\nUsing function randomChunk for Stefan:"<< std::endl;
		randomChump("Stefan");
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:47:56 by kgale             #+#    #+#             */
/*   Updated: 2021/10/19 13:47:56 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie*	Zombies;
	int		i;

	Zombies = zombieHorde(6, "Frankenstein");
	i = 0;
	while (i < 6)
		Zombies[i++].announce();
	delete [] Zombies;
	return (0);
}

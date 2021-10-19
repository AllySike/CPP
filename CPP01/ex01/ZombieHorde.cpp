/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:48:59 by kgale             #+#    #+#             */
/*   Updated: 2021/10/19 13:48:59 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *Zombies;
	int	i;

	i = 0;
	Zombies = new Zombie[N];
	while (i < N)
		Zombies[i++].addName(name);
	return (Zombies);
}

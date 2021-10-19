/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:47:50 by kgale             #+#    #+#             */
/*   Updated: 2021/10/19 13:47:50 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << '<' << this->name << '>'
	<< " destroyed" << std::endl;
}

void Zombie::announce()
{
	std::cout << '<' << this->name << '>'
	<< " BraiiiiiiinnnzzzZ..." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:48:01 by kgale             #+#    #+#             */
/*   Updated: 2021/10/19 13:48:01 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "";
}

void Zombie::addName(std::string name)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:21:49 by kgale             #+#    #+#             */
/*   Updated: 2021/10/19 14:21:49 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->wep = NULL;
}

void HumanB::attack() const
{
	if (this->wep)
		std::cout << this->name << " attacks with his " << this->wep->getType() << std::endl;
	else
		std::cout << this->name << " doesn't have a weapon to attack" << std::endl;
}

void HumanB::setWeapon(Weapon &wep)
{
	this->wep = &wep;
}

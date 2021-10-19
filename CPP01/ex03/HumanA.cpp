/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:21:41 by kgale             #+#    #+#             */
/*   Updated: 2021/10/19 14:21:41 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wep): wep(wep)
{
	this->name = name;
}

void HumanA::attack() const
{
	std::cout << this->name << " attacks with his " << this->wep.getType() << std::endl;
}

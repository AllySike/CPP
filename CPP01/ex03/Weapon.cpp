/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:22:03 by kgale             #+#    #+#             */
/*   Updated: 2021/10/19 14:22:03 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string &Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(const std::string& type)
{
	if (type == "")
		std::cout << "Cna't add empty weapon\n";
	else
		this->type = type;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 00:26:12 by kgale             #+#    #+#             */
/*   Updated: 2021/10/25 00:26:12 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name(""), equipped(0)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string &name): name(name), equipped(0)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
	std::cout << "Character constructor called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}

Character::Character(const Character& src)
{
	this->name = src.name;
	this->equipped = src.equipped;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = src.inventory[i];
	std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character& src)
{
	this->name = src.name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = src.inventory[i];
	std::cout << "Character overload called" << std::endl;
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (this->equipped >= 4)
		std::cout << "Max number equipped for " << m->getType() << std::endl;
	else
	{
		this->inventory[this->equipped] = m;
		this->equipped++;
		std::cout << m->getType() << " equipped" << std::endl;
	}
}

void Character::unequip(int idx)
{
	idx++;
	while (idx < 4 && this->inventory[idx])
	{
		this->inventory[idx - 1] = this->inventory[idx];
		idx++;
	}
	this->inventory[idx]++;
}

void Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
	this->unequip(idx);
}

void Character::writeInventory() const
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			std::cout << "Inventory[" << i << "]: " << this->inventory << std::cout;
		else
			std::cout << "Inventory[" << i << "] is empty" << std::cout;
	}
}

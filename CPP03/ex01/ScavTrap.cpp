/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:21:27 by kgale             #+#    #+#             */
/*   Updated: 2021/10/22 18:21:27 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "";
	this->hitpoints = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "\tDefault scav constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "\tConstructor scav with name "
		<< name << " called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\tscav Destructor for " << this->name
		<< " called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap)
{
	*this = scavtrap;
	std::cout << "\tscav Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& scavTrap)
{
	this->damage = scavTrap.damage;
	this->energy = scavTrap.energy;
	this->hitpoints = scavTrap.hitpoints;
	this->name = scavTrap.name;
	std::cout << "\tscav Overload assignment for " << scavTrap.name
		<< " called" << std::endl;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " has enterred "
		<< "in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << this->name << " attack "
		<< target << ", causing " << this->damage
		<< " points  of damage!" << std::endl;
}

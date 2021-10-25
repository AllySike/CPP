/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondFlag.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 22:11:59 by kgale             #+#    #+#             */
/*   Updated: 2021/10/22 22:11:59 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(): ClapTrap(name + "_clap"), ScavTrap(name), FlagTrap(name)
{
	// ClapTrap::name = "_clap_name";
	this->name = "";
	this->hitpoints = FlagTrap::hitpoints;
	this->energy = ScavTrap::energy;
	this->damage = FlagTrap::damage;
	std::cout << "     Default diamond constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->hitpoints = FlagTrap::hitpoints;
	this->energy = ScavTrap::energy;
	this->damage = FlagTrap::damage;
	std::cout << "     diamond Constructor with name "
		<< name << " called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "     diamond Destructor for " << this->name
		<< " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &flagTrap)
{
	*this = flagTrap;
	std::cout << "     diamond Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap & flagTrap)
{
	this->damage = damage;
	this->energy = flagTrap.energy;
	this->hitpoints = flagTrap.hitpoints;
	this->name = flagTrap.name;
	std::cout << "     diamond Overload assignment for " << flagTrap.name
		<< " called" << std::endl;
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->name
		<< ", my clapname is " << ClapTrap::name << std::endl;
}

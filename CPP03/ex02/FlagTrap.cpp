/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:31:19 by kgale             #+#    #+#             */
/*   Updated: 2021/10/22 21:31:19 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"


FlagTrap::FlagTrap()
{
	this->name = "";
	this->hitpoints = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "    Default flag constructor called" << std::endl;
}

FlagTrap::FlagTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "    flag Constructor with name "
		<< name << " called" << std::endl;
}

FlagTrap::~FlagTrap()
{
	std::cout << "    flag Destructor for " << this->name
		<< " called" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &flagTrap)
{
	*this = flagTrap;
	std::cout << "    flag Copy constructor called" << std::endl;
}

FlagTrap& FlagTrap::operator=(const FlagTrap & flagTrap)
{
	this->damage = flagTrap.damage;
	this->energy = flagTrap.energy;
	this->hitpoints = flagTrap.hitpoints;
	this->name = flagTrap.name;
	std::cout << "    flag Overload assignment for " << flagTrap.name
		<< " called" << std::endl;
	return (*this);
}

void FlagTrap::highFivesGuys(void)
{
	std::cout << "FlagTrap " << this->name
		<< ": Give me high five!!" << std::endl;
}

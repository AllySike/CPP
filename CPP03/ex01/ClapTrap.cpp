/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:41:35 by kgale             #+#    #+#             */
/*   Updated: 2021/10/22 13:41:35 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "";
	this->hitpoints = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "Default clap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "Constructor with name "
		<< name << " called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "clap Destructor for " << this->name
		<< " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	*this = clapTrap;
	std::cout << "clap Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap & clapTrap)
{
	this->damage = clapTrap.damage;
	this->energy = clapTrap.energy;
	this->hitpoints = clapTrap.hitpoints;
	this->name = clapTrap.name;
	std::cout << "clap Overload assignment for " << clapTrap.name
		<< " called" << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->name << " attack "
		<< target << ", causing " << this->damage
		<< " points  of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	damage += amount;
	if (this->hitpoints <= 0)
	{
		std::cout << "ClapTrap " << this->name
			<< " is already dead, taking more damage" << std::endl;
		this->hitpoints -= amount;
		return ;
	}
	this->hitpoints -= amount;
	if (this->hitpoints <= 0)
		std::cout << "ClapTrap " << this->name << " died of "
			<< amount << " points of damage" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " took "
			<< amount << " points of damage, " << this->hitpoints
			<< " left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitpoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is kinda dead, "
			<< "trying to reanimate with " << amount << " points\n";
		this->hitpoints += amount;
		if (this->hitpoints > 0)
			std::cout << "ClapTrap " << this->name << " is alive again, "
			<< "it has " << this->hitpoints << " hitpoints\n";
		else
			std::cout << "Naaaa, ClapTrap " << this->name << " is still dead.\n";
	}
	else
	{
		this->hitpoints += amount;
		std::cout << "ClapTrap " << this->name << " after repairing has "
			<< this->hitpoints << " hitpoints\n";
	}
}

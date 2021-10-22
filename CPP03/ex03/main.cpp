/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:44:46 by kgale             #+#    #+#             */
/*   Updated: 2021/10/22 13:44:46 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	/*
	std::cout << std::endl;
	ClapTrap clap1("Clap1");
	ClapTrap clap02("Clap2");
	ClapTrap clap2(clap02);
	ClapTrap clap03("Clap3");
	ClapTrap clap3 = clap03;
	std::cout << std::endl;
	clap1.attack("who");
	clap1.takeDamage(12);
	clap1.beRepaired(1);
	clap3.beRepaired(4);
	clap2.takeDamage(6);
	clap3.beRepaired(8);
	std::cout << std::endl;
	std::cout << std::endl;
	ScavTrap scav1("Scav");
	ScavTrap scav02("Scav2");
	ScavTrap scav2(scav02);
	ScavTrap scav03("Scav3");
	ScavTrap scav3 = scav03;
	std::cout << std::endl;
	scav1.attack("who");
	scav1.takeDamage(12);
	scav1.beRepaired(1);
	scav3.beRepaired(4);
	scav2.takeDamage(6);
	scav3.beRepaired(8);
	scav2.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;
	FlagTrap flag1("Flag");
	FlagTrap flag02("Flag2");
	FlagTrap flag2(flag02);
	FlagTrap flag03("Flag3");
	FlagTrap flag3 = flag03;
	std::cout << std::endl;
	flag1.attack("who");
	flag1.takeDamage(12);
	flag1.beRepaired(1);
	flag3.beRepaired(4);
	flag2.takeDamage(6);
	flag3.beRepaired(8);
	flag2.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;
	*/
	DiamondTrap diamond1("Diamond");
	DiamondTrap diamond02("Diamond2");
	DiamondTrap diamond2(diamond02);
	DiamondTrap diamond03("Diamond3");
	DiamondTrap diamond3 = diamond03;
	std::cout << std::endl;
	diamond1.attack("who");
	diamond1.takeDamage(12);
	diamond1.beRepaired(1);
	diamond3.highFivesGuys();
	diamond2.whoAmI();
	diamond3.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;
}

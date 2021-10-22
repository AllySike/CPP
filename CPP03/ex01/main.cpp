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

int main()
{
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
}

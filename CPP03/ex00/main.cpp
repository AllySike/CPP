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

int main()
{
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
}

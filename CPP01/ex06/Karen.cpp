/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:07:25 by kgale             #+#    #+#             */
/*   Updated: 2021/10/19 17:07:25 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{

}

void	Karen::debug()
{
	std::cout << "[ DEBUG ]" << std::endl
	<< "I love to get extra bacon for my 7XL-double-cheese-triple"
		<< "-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info()
{
	std::cout << "[ INFO ]" << std::endl
	<< "I cannot believe adding extra bacon cost more money. "
		<< "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning()
{
	std::cout << "[ WARNING ]" << std::endl
	<< "I think I deserve to have some extra bacon for free. I’ve been "
			<< "coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error()
{
	std::cout << "[ ERROR ]" << std::endl
	<< "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::insignificant()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Karen::complain(std::string level)
{
	int switch_case;
	std::string levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	switch_case = 0;
	while (switch_case < 4)
	{
		if (levels[switch_case] == level)
			break ;
		switch_case++;
	}
	switch (switch_case)
	{
		case 0:
			Karen::debug();
			switch_case++;
		case 1:
			Karen::info();
			switch_case++;
		case 2:
			Karen::warning();
			switch_case++;
		case 3:
			Karen::error();
			switch_case++;
		default:
			Karen::insignificant();
	}
}

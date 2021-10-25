/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:57:48 by kgale             #+#    #+#             */
/*   Updated: 2021/10/25 15:57:48 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	b1 = Bureaucrat("B1", 1);
		std::cout << b1 << std::endl;
		b1.decrement(1);
		std::cout << b1 << std::endl;
		b1.increment(1);
		std::cout << b1 << std::endl;
		b1.increment(1);
		std::cout << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat	b1 = Bureaucrat("B1", 2);
		std::cout << b1 << std::endl;
		b1.decrement(1);
		std::cout << b1 << std::endl;
		b1.increment(1);
		std::cout << b1 << std::endl;
		b1.increment(1);
		std::cout << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat	b1 = Bureaucrat("B1", 200);
		std::cout << b1 << std::endl;
		b1.decrement(1);
		std::cout << b1 << std::endl;
		b1.increment(1);
		std::cout << b1 << std::endl;
		b1.increment(1);
		std::cout << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat	b1 = Bureaucrat("B1", 150);
		std::cout << b1 << std::endl;
		b1.decrement(1);
		std::cout << b1 << std::endl;
		b1.increment(1);
		std::cout << b1 << std::endl;
		b1.increment(1);
		std::cout << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

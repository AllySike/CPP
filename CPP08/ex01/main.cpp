/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:49:27 by kgale             #+#    #+#             */
/*   Updated: 2021/11/09 18:49:27 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int	main( void )
{
	Span	span1(5);

	span1.addNumber(4);
	try
	{
		std::cout << span1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	span1.addNumber(7);
	std::cout << span1 << std::endl;
	span1.addNumber(2);
	std::cout << span1 << std::endl;
	span1.addNumber(6);
	std::cout << span1 << std::endl;
	span1.addNumber(25);
	std::cout << span1 << std::endl;
	try
	{
		span1.addNumber(4);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << span1 << std::endl;


	Span	span2(5000000);

	span2.addNumber(3);
	std::cout << span2 << std::endl;


	Span				span3(5);
	std::vector<int>	vect;

	vect.push_back(25);
	vect.push_back(5);
	vect.push_back(12);
	vect.push_back(90);
	vect.push_back(-2);
	span3.addNumberByIterator(vect.begin(), vect.end());
	std::cout << span3 << std::endl;

	std::cout << "\nExample from subject\n";
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

//clang++ -Wall -Wextra -Werror -std=c++98 main.cpp span.cpp && ./a.out

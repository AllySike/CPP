/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:46:52 by kgale             #+#    #+#             */
/*   Updated: 2021/11/09 18:46:52 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

template<typename T>
void	displayIterator(T it, T end)
{
	if (it != end)
		std::cout << "iterator: " << static_cast<char>(*it) << std::endl;
	else
		std::cout << "no such element" << std::endl;
}

int	main( void )
{
	std::vector<int>			vect;
	std::vector<int>::iterator	it;

	for (int i = 1; i < 99; i += 2)
		vect.push_back(i);
	it = easyfind(vect, 53);
	displayIterator(it, vect.end());
	it = easyfind(vect, 62);
	displayIterator(it, vect.end());

	std::vector<char>			vector;

	for (int i = 97; i < 123; i++)
		vect.push_back(i);
	it = easyfind(vect, 'c');
	displayIterator(it, vect.end());
	it = easyfind(vect, 'F');
	displayIterator(it, vect.end());
}

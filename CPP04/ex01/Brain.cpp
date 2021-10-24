/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:24:52 by kgale             #+#    #+#             */
/*   Updated: 2021/10/24 19:24:52 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain(const Brain& src)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& src)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	std::cout << "Brain overload  assignment called" << std::endl;
	return (*this);
}

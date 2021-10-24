/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:49:15 by kgale             #+#    #+#             */
/*   Updated: 2021/10/24 14:49:15 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &src)
{
	this->type = src.type;
	std::cout << "Animal overload  assignment called" << std::endl;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

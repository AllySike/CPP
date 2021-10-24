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

Animal::Animal(): type("")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = src.type;
}

Animal& Animal::operator=(const Animal &src)
{
	this->type = src.type;
	std::cout << "Animal overload  assignment called" << std::endl;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "This Animal doesn't have any specified sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

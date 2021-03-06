/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:38:49 by kgale             #+#    #+#             */
/*   Updated: 2021/10/24 17:38:49 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
	this->type = src.getType();
	this->brain = src.getBrain();
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
	this->type = src.getType();
	this->brain = src.getBrain();
	std::cout << "Dog overload  assignment called" << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << this->type << " makes sound: Woof" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->brain);
}

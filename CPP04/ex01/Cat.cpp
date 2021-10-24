/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:11:48 by kgale             #+#    #+#             */
/*   Updated: 2021/10/24 17:11:48 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
	this->brain = src.getBrain();
	this->type = src.getType();
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &src)
{
	this->type = src.getType();
	this->brain = src.getBrain();
	std::cout << "Cat overload  assignment called" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << this->type << " makes sound: Meow" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (this->brain);
}

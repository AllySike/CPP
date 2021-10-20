/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:52:41 by kgale             #+#    #+#             */
/*   Updated: 2021/10/20 00:52:41 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int param)
{
	this->value = param << this->fract;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float param)
{
	float pow2;
	int i;

	i = 0;
	pow2 = 1;
	while (i < this->fract)
	{
		pow2 *= 2;
		i++;
	}
	this->value = roundf(param * pow2);
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed&	Fixed::operator=(const Fixed & fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = fixed.value;
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float Fixed::toFloat() const
{
	float pow2;
	int i;

	i = 0;
	pow2 = 1;
	while (i < this->fract)
	{
		pow2 *= 2;
		i++;
	}
	return ((float)this->value / pow2);
}

int Fixed::toInt() const
{
	return (this->value >> this->fract);
}

std::ostream&	operator<<( std::ostream& stream, const Fixed& fixed)
{
	stream << fixed.toFloat();
	return (stream);
}

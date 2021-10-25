/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:59:58 by kgale             #+#    #+#             */
/*   Updated: 2021/10/24 21:59:58 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type): type(type)
{
	std::cout << "AMateria constructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

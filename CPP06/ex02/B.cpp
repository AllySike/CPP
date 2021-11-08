/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:34:47 by kgale             #+#    #+#             */
/*   Updated: 2021/11/08 18:34:47 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{

}

B::B(const B& src)
{
	*this = src;
}

B::~B()
{

}

B& B::operator=(const B& src)
{
	(void)src;
	return (*this);
}

std::ostream& operator<<(std::ostream &ostr, const B &instance)
{
	(void)instance;
	ostr << "B\n";
	return (ostr);
}

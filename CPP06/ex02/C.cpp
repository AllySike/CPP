/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:33:45 by kgale             #+#    #+#             */
/*   Updated: 2021/11/08 18:33:45 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C()
{

}

C::C(const C& src)
{
	*this = src;
}

C::~C()
{

}

C& C::operator=(const C& src)
{
	(void)src;
	return (*this);
}

std::ostream& operator<<(std::ostream &ostr, const C &instance)
{
	(void)instance;
	ostr << "C\n";
	return (ostr);
}

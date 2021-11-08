/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:26:39 by kgale             #+#    #+#             */
/*   Updated: 2021/11/08 18:26:39 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A()
{

}

A::A(const A& src)
{
	*this = src;
}

A::~A()
{

}

A& A::operator=(const A& src)
{
	(void)src;
	return (*this);
}

std::ostream& operator<<(std::ostream &ostr, const A &instance)
{
	(void)instance;
	ostr << "A\n";
	return (ostr);
}

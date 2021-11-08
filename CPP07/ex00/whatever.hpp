/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whateverr.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:26:54 by kgale             #+#    #+#             */
/*   Updated: 2021/11/08 19:26:54 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T &a, T &b)
{
	T c;

	c = a;
	a = b;
	b = c;
}

template<typename T>
T& min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
T&  max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif

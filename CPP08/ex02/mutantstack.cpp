/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:51:10 by kgale             #+#    #+#             */
/*   Updated: 2021/11/09 18:51:10 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

// template<typename T>
// MutantStack<T>::MutantStack(){}

// template <typename T>
// MutantStack<T>::MutantStack(const MutantStack<T>& src)
// {
// 	(void)src;
// 	return (*this);
// }

// template <typename T>
// MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& src)
// {
// 	(void)src;
// }

// template <typename T>
// MutantStack<T>::~MutantStack(){}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() const
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() const
{
	return (this->c.end());
}

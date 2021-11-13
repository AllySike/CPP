/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:50:50 by kgale             #+#    #+#             */
/*   Updated: 2021/11/09 18:50:50 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include "mutantstack.cpp"

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(): std::stack<T>(){}

		MutantStack(const MutantStack<T>& src): std::stack<T>(src)
		{
			(void)src;
			return (*this);
		}

		MutantStack<T>& operator=(const MutantStack<T>& src)
		{
			(void)src;
		}

		~MutantStack(){}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin()
		{
			return (this->c.begin());
		}

		iterator end()
		{
			return (this->c.end());
		}
};

#endif

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

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		// MutantStack();
		// MutantStack(const MutantStack<T>& src);
		// MutantStack<T>& operator=(const MutantStack<T>& src);
		// ~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() const;
		iterator end() const;
};

#endif

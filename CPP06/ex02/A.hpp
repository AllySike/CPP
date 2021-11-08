/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:22:41 by kgale             #+#    #+#             */
/*   Updated: 2021/11/08 18:22:41 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"
# include <iostream>

class A: public Base
{
	public:
		A();
		A(const A& src);
		~A();
		A& operator=(const A& src);
};

std::ostream& operator<<(std::ostream &ostr, const A &instance);

#endif

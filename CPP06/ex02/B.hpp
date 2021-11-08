/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:31:58 by kgale             #+#    #+#             */
/*   Updated: 2021/11/08 18:31:58 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "Base.hpp"
# include <iostream>

class B: public Base
{
	public:
		B();
		B(const B& src);
		~B();
		B& operator=(const B& src);
};

std::ostream& operator<<(std::ostream &ostr, const B &instance);

#endif

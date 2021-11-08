/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:32:51 by kgale             #+#    #+#             */
/*   Updated: 2021/11/08 18:32:51 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "Base.hpp"
# include <iostream>

class C: public Base
{
	public:
		C();
		C(const C& src);
		~C();
		C& operator=(const C& src);
};

std::ostream& operator<<(std::ostream &ostr, const C &instance);

#endif

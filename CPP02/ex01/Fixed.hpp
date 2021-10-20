/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:50:34 by kgale             #+#    #+#             */
/*   Updated: 2021/10/20 00:50:34 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#define EPSILON 1.0e-7
#define flt_equals(a, b) (fabs((a)-(b)) < EPSILON)

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed(); //default constructor
		~Fixed(); //destructor
		Fixed(const int param);
		Fixed(const float param);
		Fixed(const Fixed& copy); //copy constructor
		Fixed& operator = (const Fixed& fixed); //overload assignment
		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;
	private:
		int value;
		static const int fract = 8;
};

std::ostream &operator<<(std::ostream& stream, const Fixed &fixed);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConvert.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:49:58 by kgale             #+#    #+#             */
/*   Updated: 2021/11/07 19:49:58 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPECONVERT_HPP
# define TYPECONVERT_HPP

# include <iostream>
# include <cmath>

class TypeConvert
{
	public:
		TypeConvert();
		TypeConvert(const TypeConvert& src);
		~TypeConvert();
		TypeConvert& operator=(const TypeConvert &src);

		void input(char* input);
		class SingleString: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Please write one input value");
				}
		};

		class WrongFormatString: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Wrong input format");
				}
		};

		private:
			int _type;
			int _int;
			char _char;
			float _float;
			double _double;
			void getType(char *input);
			void printValues() const;
			void printChar() const;
			void printInt() const;
			void printFloat() const;
			void printDouble() const;
			bool convertable(double numb) const;
			void addNumericValue(char* input);
			static const int _nontype = -1;
			static const int _chartype = 0;
			static const int _inttype = 1;
			static const int _floattype = 2;
			static const int _doubletype = 3;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:48:55 by kgale             #+#    #+#             */
/*   Updated: 2021/11/09 18:48:55 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>

class Span
{
	public:
		Span();
		Span(unsigned int n);
		~Span();
		Span(const Span &src);
		Span& operator=(const Span &src);

		void addNumber(int n);
		void addNumberByIterator(std::vector <int>::iterator begin,
			std::vector <int>::iterator end);
		int shortestSpan() const;
		int longestSpan() const;
		int getSize() const;
		int getCapacity() const;
		class TooManyNumbers: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Too many numbers");
				}
		};
		class NotEnoughNumbersToFindSpan: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Not enough numbers to find span");
				}
		};
	private:
		unsigned int _size;
		std::vector<int> _arr;
};

std::ostream& operator<<(std::ostream &ostr, const Span& instance);

#endif

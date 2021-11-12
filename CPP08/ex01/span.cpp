/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:48:32 by kgale             #+#    #+#             */
/*   Updated: 2021/11/09 18:48:32 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(): _size(0){}

Span::Span(unsigned int n): _size(n), _arr(0){}

Span::~Span(){}

Span::Span(const Span &src):_size(src._size), _arr(src._arr){}

Span& Span::operator=(const Span &src)
{
	this->_arr = src._arr;
	this->_size = src._size;
	return (*this);
}

void Span::addNumber(int n)
{
	if (this->_arr.size() == this->_size)
		throw Span::TooManyNumbers();
	this->_arr.push_back(n);
}

void Span::addNumberByIterator(std::vector <int>::iterator begin,
	std::vector <int>::iterator end)
{
	std::vector<int> tmp(begin, end);

	if (tmp.size() > this->_size - this->_arr.size())
		throw Span::TooManyNumbers();
	copy(tmp.begin(), tmp.end(), std::back_inserter(this->_arr));
}

int Span::shortestSpan() const
{
	std::vector<int> sorted = this->_arr;
	int span = 0;

	if (this->_arr.size() < 2)
		throw Span::NotEnoughNumbersToFindSpan();
	sort(sorted.begin(), sorted.end());
	span = *(sorted.begin() + 1) - *sorted.begin();
	for (std::vector<int>::iterator iter = sorted.begin(); *iter < *sorted.end(); iter++)
	{
		if (*(iter + 1) - *iter < span)
			span = *(iter + 1) - *iter;
	}
	return (span);
}

int Span::longestSpan() const
{
	std::vector<int> sorted = this->_arr;

	if (this->_arr.size() < 2)
		throw Span::NotEnoughNumbersToFindSpan();
	sort(sorted.begin(), sorted.end());
	return (*(sorted.end() - 1) - *sorted.begin());
}

int Span::getSize() const
{
	return (this->_arr.size());
}

int Span::getCapacity() const
{
	return (this->_size);
}

std::ostream& operator<<(std::ostream &ostr, const Span& instance)
{
	try
	{
		int	shortest = instance.shortestSpan();
		int	longest = instance.longestSpan();

		ostr << "Span of capacity " << instance.getCapacity() << " contains "
			<< instance.getSize() << " numbers, shortest span is "
			<< shortest << " and longest is " << longest;
	}
	catch(const std::exception& e)
	{
		(void)e;
		ostr << "Span of capacity " << instance.getCapacity() << " contains "
			<< instance.getSize() << " number";
	}

	return ostr;
}

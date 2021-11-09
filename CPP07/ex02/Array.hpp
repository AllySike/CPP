/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:48:12 by kgale             #+#    #+#             */
/*   Updated: 2021/11/09 17:48:12 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class Array
{
	public:
		Array(): _size(0), _arr(new T[0]){}
		~Array()
		{
			delete [] this->_arr;
		}
		Array(unsigned int n): _size(n), _arr(new T[n]){}
		Array(const Array& src): _size(src._size)
		{
			this->_arr = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_arr[i] = src._arr[i];
		}
		Array& operator=(const Array& src)
		{
			delete [] this->_arr;
			this->_size = src._size;
			this->_arr = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_arr[i] = src._arr[i];
			return (*this);
		}
		T& operator[](unsigned int n)
		{
			if (n < this->_size)
				return (this->_arr[n]);
			throw ElementOutOfTheLimits();
		}
		class ElementOutOfTheLimits: public std::exception
		{
			const char *what() const throw()
			{
				return ("this element is out of the limits");
			}
		};
		unsigned int size()
		{
			return (this->_size);
		}
	private:
		unsigned int _size;
		T *_arr;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConvert.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:49:34 by kgale             #+#    #+#             */
/*   Updated: 2021/11/07 19:49:34 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeConvert.hpp"

TypeConvert::TypeConvert()
{
	this->_type = _nontype;
	this->_char = 0;
	this->_double = 0;
	this->_float = 0;
	this->_int = 0;
}

TypeConvert::TypeConvert(const TypeConvert& src)
{
	this->_type = src._type;
	this->_char = src._char;
	this->_double = src._double;
	this->_float = src._float;
	this->_int = src._int;
}

TypeConvert::~TypeConvert()
{

}

TypeConvert& TypeConvert::operator=(const TypeConvert &src)
{
	this->_type = src._type;
	this->_char = src._char;
	this->_double = src._double;
	this->_float = src._float;
	this->_int = src._int;
	return (*this);
}

void TypeConvert::input(char* input)
{
	getType(input);
	if (this->_type == _nontype)
		throw(TypeConvert::WrongFormatString());
	if (this->_type == _chartype)
		this->_char = input[0];
	else if (this->_type == _inttype)
		this->_int = atoi(input);
	else if (this->_type == _floattype)
		this->_float = atof(input);
	else if (this->_type == _doubletype)
		this->_double = atof(input);
	printValues();
}

void TypeConvert::addNumericValue(char* input)
{
	int i = 0;
	bool dot = false;
	if (input[i] == '-' && input[1])
		i++;
	if (input[i] == '.' && (!input[i + 1] || input[i + 1] == 'f'))
		return ;
	while ((input[i] >= '0' && input[i] <= '9')
		|| input[i] == '.')
	{
		if (input[i] == '.' && !dot)
			dot = true;
		else if (input[i] == '.')
			return ;
		i++;
	}
	if (!input[i])
	{
		if (dot)
			this->_type = _doubletype;
		else
			this->_type = _inttype;
	}
	else if (input[i] == 'f' && !input[i + 1] && dot)
		this->_type = _floattype;
}

void TypeConvert::getType(char *input)
{
	const std::string doubles[] = {"inf", "+inf", "-inf", "nan"};
	const std::string floats[] = {"inff", "+inff", "-inff", "nanf"};

	for (int i = 0; i < 4; i++)
	{
		if (doubles[i] == input)
		{
			this->_type = _doubletype;
			return ;
		}
		else if (floats[i] == input)
		{
			this->_type = _floattype;
			return ;
		}
	}
	if ((input[0] >= '0' && input[0] <= '9')
		|| input[0] == '-' || input[0] == '.')
		addNumericValue(input);
	if (!input[1] && this->_type == _nontype)
		this->_type = _chartype;
}

bool TypeConvert::convertable(double numb) const
{
	if (numb < 0 || numb > 127 || numb != static_cast<int>(numb))
	{
		std::cout << "char: impossible\n";
		return (false);
	}
	else if (numb <= 31 || numb == 127)
	{
		std::cout << "char: non-displayable\n";
		return (false);
	}
	return (true);
}

bool TypeConvert::intConvertable(double numb) const
{
	if (numb <= std::numeric_limits<int>::max()
		&& numb >= std::numeric_limits<int>::min()
		&& numb != std::numeric_limits<double>::infinity()
		&& -numb != std::numeric_limits<double>::infinity()
		&& numb != std::numeric_limits<double>::quiet_NaN())
		return (true);
	else
	{
		std::cout << "int: impossible\n";
		return (false);
	}
}

std::string TypeConvert::printDot(double numb) const
{
	if (numb == static_cast<int>(numb))
		return (".0");
	return ("");
}

void TypeConvert::printChar() const
{
	if (this->_type == _chartype)
		std::cout << "char: " << this->_char << std::endl;
	if (this->_type == _inttype && convertable(this->_int))
		std::cout << "char: " << static_cast<char>(this->_int) << std::endl;
	if (this->_type == _floattype && convertable(this->_float))
		std::cout << "char: " << static_cast<char>(this->_float) << std::endl;
	if (this->_type == _doubletype && convertable(this->_double))
		std::cout << "char: " << static_cast<char>(this->_double) << std::endl;
}

void TypeConvert::printInt() const
{
	if (this->_type == _chartype)
		std::cout << "int: " << static_cast<int>(this->_char) << std::endl;
	if (this->_type == _inttype)
		std::cout << "int: " << this->_int << std::endl;
	if (this->_type == _floattype && intConvertable(this->_float))
		std::cout << "int: " << static_cast<int>(this->_float) << std::endl;
	if (this->_type == _doubletype && intConvertable(this->_double))
		std::cout << "int: " << static_cast<int>(this->_double) << std::endl;
}

void TypeConvert::printFloat() const
{
	if (this->_type == _chartype)
		std::cout << "float: " << static_cast<float>(this->_char) << ".0f" << std::endl;
	if (this->_type == _inttype)
		std::cout << "float: " << static_cast<float>(this->_int) << ".0f" << std::endl;
	if (this->_type == _floattype)
		std::cout << "float: " << this->_float << printDot(this->_float) << "f" << std::endl;
	if (this->_type == _doubletype)
		std::cout << "float: " << static_cast<float>(this->_double) << printDot(this->_double) << "f" << std::endl;
}

void TypeConvert::printDouble() const
{
	if (this->_type == _chartype)
		std::cout << "double: " << static_cast<double>(this->_char) << ".0" << std::endl;
	if (this->_type == _inttype)
		std::cout << "double: " << static_cast<float>(this->_int) << ".0" << std::endl;
	if (this->_type == _floattype)
		std::cout << "double: " << static_cast<float>(this->_float) << printDot(this->_float) << std::endl;
	if (this->_type == _doubletype)
		std::cout << "double: " << this->_double << printDot(this->_double) << std::endl;
}

void TypeConvert::printValues() const
{
	printChar();
	printInt();
	printFloat();
	printDouble();
}

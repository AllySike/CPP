/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:14:32 by kgale             #+#    #+#             */
/*   Updated: 2021/11/08 17:14:32 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

Base* generate()
{
	int generated = rand() % 3;
	switch(generated)
	{
		case 0:
		{
			std::cout << "Created A, ";
			return (new A());
		}
		case 1:
		{
			std::cout << "Created B, ";
			return (new B());
		}
		default:
		{
			std::cout << "Created C, ";
			return (new C());
		}
	}
}

void identify(Base* p)
{
	std::cout << "identify(Base* p) = ";
	A *a  = dynamic_cast<A *>(p);
	if (a)
		std::cout << *a;
	B *b = dynamic_cast<B *>(p);
	if (b)
		std::cout << *b;
	C *c = dynamic_cast<C *>(p);
	if (c)
		std::cout << *c;
}

void identify(Base& p)
{
	std::cout << "identify(Base& p) = ";
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A\n";
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << b;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}

	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << c;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
}

int main()
{
	Base	*base;
	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	std::cout << "-----------------------\n";

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:51:25 by kgale             #+#    #+#             */
/*   Updated: 2021/11/09 18:51:25 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;
	std::list<int> lstack;

	mstack.push(5);
	lstack.push_back(5);
	mstack.push(17);
	lstack.push_back(17);
	std::cout << "stack top  " << mstack.top() << std::endl;
	std::cout << "list  top  " << lstack.back() << std::endl;
	mstack.pop();
	lstack.pop_front();
	std::cout << "stack size " << mstack.size() << std::endl;
	std::cout << "list  size " << lstack.size() << std::endl;
	mstack.push(3);
	lstack.push_back(3);
	mstack.push(5);
	lstack.push_back(5);
	mstack.push(737);
	lstack.push_back(737);
	mstack.push(0);
	lstack.push_back(0);
	MutantStack<int>::iterator it = mstack.begin();
	std::list<int>::iterator lit = lstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::list<int>::iterator lite = lstack.end();
	++it;
	++lit;
	--it;
	--lit;
	while (it != ite)
	{
		std::cout << "stack val  " << *it << std::endl;
		++it;
	}
	while (lit != lite)
	{
		std::cout << "list  val  " << *lit << std::endl;
		++lit;
	}
	std::stack<int> s(mstack);
	return (0);
}
//clang++ -Wall -Wextra -Werror -std=c++98 main.cpp mutantstack.cpp && ./a.out

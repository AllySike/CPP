/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:03:48 by kgale             #+#    #+#             */
/*   Updated: 2021/10/18 23:03:48 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->cnt = -1;
}

void PhoneBook::add()
{
	this->cnt++;
	this->contacts[this->cnt % 8].set_info(this->cnt);
}

void PhoneBook::search()
{
	int i;
	int count;
	std::string line;

	count = this->cnt;
	if (count >= 7)
		count = 7;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	i = 0;
	while (i < count + 1)
	{
		this->contacts[i].display_info();
		i++;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "Enter index:";
	std::getline(std::cin, line);
	i = atoi(line.c_str());
	if ((i < this->cnt - 7) || i > this->cnt)
		std::cout << "No such index" << std::endl;
	else
		this->contacts[i % 8].display();
}

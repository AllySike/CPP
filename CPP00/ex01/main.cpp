/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:01:34 by kgale             #+#    #+#             */
/*   Updated: 2021/10/18 23:01:34 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string	line;

	while (42)
	{
		std::cout << "What do you want: ADD, SEARCH or EXIT?" << std::endl;
		std::getline(std::cin, line);
		if (line == "EXIT")
			break;
		else if (line == "ADD")
			phonebook.add();
		else if (line == "SEARCH")
			phonebook.search();
	}
	return 0;
}

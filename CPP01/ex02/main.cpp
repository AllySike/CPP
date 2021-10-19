/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:04:17 by kgale             #+#    #+#             */
/*   Updated: 2021/10/19 14:04:17 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::string *stringPTR;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::cout << "variable:  " << "Address:       " << "string:" << std::endl;
	std::cout << "str        " << &str << ' ' << str << std::endl;
	std::cout << "stringPTR  " << &stringPTR << ' ' << *stringPTR << std::endl;
	std::cout << "stringREF  " << &stringREF << ' ' << stringREF << std::endl;
}

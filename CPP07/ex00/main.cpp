/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:26:29 by kgale             #+#    #+#             */
/*   Updated: 2021/11/08 19:26:29 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <string>
#include <iostream>

int main()
{
	std::string s1 = "line1";
	std::string s2 = "line2";

	std::cout << "s1: \"" << s1 << "\", s2: \"" << s2 << "\""
		<< "\nswap(s1, s2)\n";
	swap(s1, s2);
	std::cout << "s1: \"" << s1 << "\", s2: \"" << s2 << "\"\n";
	std::cout << "min(s1, s2) = \"" << min(s1, s2) << "\"\n";
	std::cout << "max(s1, s2) = \"" << max(s1, s2) << "\"\n";


	int i1 = 128;
	int i2 = 56;

	std::cout << "\ni1: " << i1 << ", i2: " << i2
		<< "\nswap(i1, i2)\n";
	swap(i1, i2);
	std::cout << "i1: " << i1 << ", i2: " << i2 << "\n";
	std::cout << "min(i1, i2) = " << min(i1, i2) << "\n";
	std::cout << "max(i1, i2) = " << max(i1, i2) << "\n";


	float f1 = 42.42f;
	float f2 = 0.9f;

	std::cout << "\nf1: " << f1 << ", f2: " << f2
		<< "\nswap(f1, f2)\n";
	swap(f1, f2);
	std::cout << "f1: " << f1 << ", f2: " << f2 << "\n";
	std::cout << "min(f1, f2) = " << min(f1, f2) << "\n";
	std::cout << "max(f1, f2) = " << max(f1, f2) << "\n";

	return (0);
}

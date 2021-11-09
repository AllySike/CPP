/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:18:45 by kgale             #+#    #+#             */
/*   Updated: 2021/11/09 17:18:45 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>
#include <iostream>

template <typename T>
void	smth1(T &line)
{
	std::cout << "smth1: " << line << "\n";
}

template <typename T>
void	smth2(T &line)
{
	std::cout << "SMTH2: " << line << "\n";
}

int main()
{
	std::string str[] = {"lol", "FfFfFf", "124356"};

	iter(str, 3, &smth1);
	std::cout << std::endl;
	iter(str, 3, &smth2);
	std::cout << std::endl;

	int arr[] = {123, 9, 0, -666};
	iter(arr, 4, &smth1);
	std::cout << std::endl;
	iter(arr, 4, &smth2);
	return (0);
}

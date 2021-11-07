/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:52:41 by kgale             #+#    #+#             */
/*   Updated: 2021/11/07 15:52:41 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeConvert.hpp"

int main(int argc, char **argv)
{
	TypeConvert convert;

	try
	{
		if (argc != 2)
			throw(TypeConvert::SingleString());
		convert.input(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}

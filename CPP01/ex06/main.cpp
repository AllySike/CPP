/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:05:24 by kgale             #+#    #+#             */
/*   Updated: 2021/10/19 17:05:24 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "Error\nWrong arg number" << std::endl;
		return (1);
	}
	karen.complain(argv[1]);
	return (0);
}

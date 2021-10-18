/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:15:32 by kgale             #+#    #+#             */
/*   Updated: 2021/10/18 22:15:32 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void	ft_toupper(char *line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		if (line[i] <= 122 && line[i] >= 97)
			line[i] -= 32;
		std::cout << line[i];
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (i < argc)
		{
			ft_toupper(argv[i]);
			if (i + 1 < argc)
				std::cout << ' ';
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:43:56 by kgale             #+#    #+#             */
/*   Updated: 2021/10/24 14:43:56 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *animals[4];
	Brain *brain;

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		animals[i]->makeSound();
		std::cout << std::endl;
	}

	brain = animals[3]->getBrain();
	brain->ideas[0] = "LOL FUNNY";
	animals[1] = animals[3];
	std::cout << "Idea is " << animals[1]->getBrain()->ideas[0]
		<< std::endl << std::endl;

	for (int i = 0; i < 3; i++)
	{

		std::cout << "Deleting " << animals[i]->getType() << std::endl;
		delete animals[i];
		std::cout << std::endl;
	}
	return (0);
}

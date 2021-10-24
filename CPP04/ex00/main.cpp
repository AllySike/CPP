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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	meta->makeSound();
	std::cout << std::endl;

	const Animal* cat = new Cat();
	std::cout << "Type of this animal is " << cat->getType() << " " << std::endl;
	cat->makeSound();
	std::cout << std::endl;

	const Animal* dog = new Dog();
	std::cout << "Type of this animal is " << dog->getType() << " " << std::endl;
	dog->makeSound();
	std::cout << std::endl;

	const WrongAnimal *wrongmeta = new WrongAnimal();
	wrongmeta->makeSound();
	std::cout << std::endl;

	const WrongAnimal* wrongcat = new WrongCat();
	wrongcat->makeSound();
	std::cout << std::endl;

	delete meta;
	delete cat;
	delete dog;
	delete wrongmeta;
	delete wrongcat;
	return (0);
}

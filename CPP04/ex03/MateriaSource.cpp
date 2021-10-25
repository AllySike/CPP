/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:14:14 by kgale             #+#    #+#             */
/*   Updated: 2021/10/25 14:14:14 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): learned(0)
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = 0;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
		if (src.materias[i])
			this->materias[i] = src.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
	this->learned = src.learned;
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{

	for (int i = 0; i < 4; i++)
		if (this->materias[i])
			delete this->materias[i];
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
		if (src.materias[i])
			this->materias[i] = src.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
	this->learned = src.learned;
	std::cout << "MateriaSource overload assignment called" << std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (this->learned >= 4)
		std::cout << "Max number learned" << std::endl;
	else
	{
		this->materias[this->learned] = m;
		this->learned++;
		std::cout << m->getType() << " learned" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4 && this->materias[i]; i++)
	{
		if (type == this->materias[i]->getType())
			return this->materias[i]->clone();
	}
	return NULL;
}

void MateriaSource::writeMaterias() const
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			std::cout << "Materias[" << i << "]: " << this->materias[i]->getType() << std::endl;
		else
			std::cout << "Materias[" << i << "] is empty" << std::endl;
	}
}

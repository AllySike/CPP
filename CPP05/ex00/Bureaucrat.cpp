/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:57:52 by kgale             #+#    #+#             */
/*   Updated: 2021/10/25 15:57:52 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name(""), grade(min)
{
	check();
	std::cout << "Bureaucrat constructor\n";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	this->grade = src.grade;
	check();
	std::cout << "Bureaucrat copy constructor\n";
}

Bureaucrat::Bureaucrat(const std::string name, int grade): name(name), grade(grade)
{
	check();
	std::cout << "Bureaucrat int constructor\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	this->grade = src.grade;
	check();
	std::cout << "Bureaucrat overload\n";
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::increment(int amount)
{
	this->grade += amount;
	check();
}

void Bureaucrat::decrement(int amount)
{
	this->grade -= amount;
	check();
}

void Bureaucrat::check() const
{
	if (this->grade < this->min)
		throw Bureaucrat::GradeTooLowException();
	if (this->grade > this->max)
		throw Bureaucrat::GradeTooHighException();
}

std::ostream	&operator<<( std::ostream &ostr, const Bureaucrat &src )
{
	ostr << src.getName() << ", Bureaucrat grade " << src.getGrade();
	return ostr;
}

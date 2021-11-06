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

Bureaucrat::Bureaucrat(): name(""), grade(Bureaucrat::min)
{
	std::cout << "Bureaucrat constructor\n";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	this->grade = src.grade;
	std::cout << "Bureaucrat copy constructor\n";
}

Bureaucrat::Bureaucrat(const std::string &name, int grade):
	name(name), grade(grade)
{
	check();
	std::cout << "Bureaucrat int constructor\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	this->grade = src.grade;
	std::cout << "Bureaucrat overload\n";
	return (*this);
}

const std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::increment(int amount)
{
	this->grade -= amount;
	check();
}

void Bureaucrat::decrement(int amount)
{
	this->grade += amount;
	check();
}

void Bureaucrat::check() const
{
	if (this->grade < this->max)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > this->min)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream	&operator<<( std::ostream &ostr, const Bureaucrat &src )
{
	ostr << src.getName() << ", Bureaucrat grade " << src.getGrade();
	return ostr;
}

bool Bureaucrat::signForm(Form& form) const
{
	if (form.beSigned(*this))
	{
		std::cout << this->name << " is signing form "
			<< form.getName() << std::endl;
		return (true);
	}
	else
	{
		std::cout << this->name << " cannot sign form "
			<< form.getName() << std::endl;
		return (false);
	}
}

bool Bureaucrat::executeForm(Form& form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " is executing form "
			<< form.getName() << std::endl;
		return (true);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (false);
	}

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:41:20 by kgale             #+#    #+#             */
/*   Updated: 2021/10/25 19:41:20 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, int sign_grade, int exec_grade):
	is_signed(false), sign_grade(sign_grade),
	exec_grade(exec_grade), name(name)
{
	check();
	std::cout << "Form constructor\n";
}

Form::Form(const Form& src):
	is_signed(src.is_signed), sign_grade(src.sign_grade),
	exec_grade(src.exec_grade), name(src.name)
{
	std::cout << "Form copy constructor\n";
}

Form::~Form()
{
	std::cout << "Form destructor\n";
}

Form& Form::operator=(const Form& src)
{
	this->is_signed = src.is_signed;
	std::cout << "Form overload\n";
	return (*this);
}

bool Form::beSigned(const Bureaucrat& src)
{
	if (src.getGrade() >= this->getSignGrade())
		this->is_signed = false;
	else
		this->is_signed = true;
	return (this->is_signed);
}

bool Form::beExecuted(const Bureaucrat& src)
{
	if (src.getGrade() >= this->getExecGrade())
		this->is_signed = false;
	else
		this->is_signed = true;
	return (this->is_signed);
}

bool Form::getSigned() const
{
	return (this->is_signed);
}

int Form::getSignGrade() const
{
	return (this->sign_grade);
}

int Form::getExecGrade() const
{
	return (this->exec_grade);
}

const std::string &Form::getName() const
{
	return (this->name);
}

Form::Form(): is_signed(false), sign_grade(Form::min),
	exec_grade(Form::min), name("")
{
	std::cout << "Form default constructor\n";
}

void Form::check() const
{
	if (this->exec_grade < Form::max
		|| this->sign_grade < Form::max)
		throw Form::GradeTooHighException();
	if (this->exec_grade > Form::min
		|| this->sign_grade > Form::min)
		throw Form::GradeTooLowException();
}

void Form::checkExecutability(const Bureaucrat &executor) const
{
	if (!this->is_signed || executor.getGrade() > this->exec_grade)
		throw Form::CantExecForm();
}

std::ostream &operator<<(std::ostream &ostr, const Form& src)
{
	ostr << "Form name is " << src.getName()
		<< ", grade to sign is " << src.getSignGrade()
		<< ", grade to execute is " << src.getExecGrade()
		<< ", form is " << (src.getSigned() ? "" : "not ") << "signed";
	return ostr;
}

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

Form::Form(const std::string &name, int sign_grade,
	int exec_grade): is_signed(false), sign_req(sign_grade),
	exec_req(exec_grade), name(name)
{
	check();
	std::cout << "Form constructor\n";
}

Form::Form(const Form& src): is_signed(src.is_signed), sign_req(src.sign_req),
	exec_req(src.exec_req), name(src.name)
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
	if (src.getGrade() >= this->getSignReq())
		this->is_signed = false;
	else
		this->is_signed = true;
	return (this->is_signed);
}

bool Form::beExecuted(const Bureaucrat& src)
{
	if (src.getGrade() >= this->getExecReq())
		this->is_signed = false;
	else
		this->is_signed = true;
	return (this->is_signed);
}

bool Form::getSigned() const
{
	return (this->is_signed);
}

int Form::getSignReq() const
{
	return (this->sign_req);
}

int Form::getExecReq() const
{
	return (this->exec_req);
}

const std::string &Form::getName() const
{
	return (this->name);
}

Form::Form(): is_signed(false), sign_req(Form::min),
	exec_req(Form::min), name("")
{
	std::cout << "Form default constructor\n";
}

void Form::check() const
{
	if (this->exec_req < Form::max
		|| this->sign_req < Form::max)
		throw Form::GradeTooHighException();
	if (this->exec_req > Form::min
		|| this->sign_req > Form::min)
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &ostr, const Form& src)
{
	ostr << "Form name is " << src.getName() << ", grade to sign is "
		<< src.getSignReq() << ", grade to execute is " << src.getExecReq()
		<< ", form is " << (src.getSigned() ? "" : "not ") << "signed";
	return ostr;
}

void Form::exec()
{
	if (this->exec_req < Form::max)
		throw Form::GradeTooHighException();
	if (this->exec_req > Form::min)
		throw Form::GradeTooLowException();
}

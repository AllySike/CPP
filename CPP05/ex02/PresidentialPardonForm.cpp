/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:57:51 by kgale             #+#    #+#             */
/*   Updated: 2021/11/06 20:57:51 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &src):
	Form("PresidentialPardonForm", 25, 5), target(src)
{
	std::cout << "presidential target construct\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src):
	Form("PresidentialPardonForm", 25, 5), target(src.getTarget())
{
	std::cout << "presidential src construct\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "presidential destruct\n";
}

PresidentialPardonForm::PresidentialPardonForm():
	Form("PresidentialPardonForm", 25, 5), target("")
{
	std::cout << "default presidential construct\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	src.getTarget();
	std::cout << "presidential assignment operator\n";
	return (*this);
}

const std::string &PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->checkExecutability(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox.\n";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:04:08 by kgale             #+#    #+#             */
/*   Updated: 2021/11/06 21:04:08 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
	Form("RobotomyRequestForm", 72, 45), target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src):
	Form("RobotomyRequestForm", 72, 45), target(src.target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm():
	Form("RobotomyRequestForm", 72, 45), target("")
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	src.getName();
	return (*this);
}

const std::string &RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	this->checkExecutability(executor);
	std::cout << "*Unbearable drilling noises*" << std::endl;
	if (std::rand() % 2)
		std::cout << this->target
			<< " has been successfully robotomized\n";
	else
		std::cout << "The robotomization of " << this->target
			<< " is a failure\n";
}

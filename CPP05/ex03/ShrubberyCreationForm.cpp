/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 01:09:26 by kgale             #+#    #+#             */
/*   Updated: 2021/10/26 01:09:26 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):
	Form("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm constructor\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src):
	Form("ShrubberyCreationForm", 145, 137), target(src.getTarget())
{
	std::cout << "ShrubberyCreationForm copy constructor\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor\n";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	std::cout << "ShrubberyCreationForm overload " << rhs.getName() << std::endl;
	return (*this);
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::ofstream ostr;

	this->checkExecutability(executor);
	ostr.open(("_shrubbery"), std::ios::out);
	ostr << "  ,d\n"
		 << "  88\n"
		 << "MM88MMM 8b,dPPYba,  ,adPPYba,  ,adPPYba,\n"
		 << "  88    88P'   `Y8 a8P_____88 a8P_____88\n"
		 << "  88    88         8PP``````` 8PP```````\n"
		 << "  88,   88         `8b,   ,aa `8b,   ,aa\n"
		 << "  `Y888 88          ``Ybbd8`'  ``Ybbd8`'`\n";
	ostr.close();
	std::cout << "File created: " << this->target << "_shrubbery\n";
}

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("ShrubberyCreationForm", 145, 137), target("")
{
	std::cout << "ShrubberyCreationForm default constructor\n";
}

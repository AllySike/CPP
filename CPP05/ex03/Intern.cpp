/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 23:55:09 by kgale             #+#    #+#             */
/*   Updated: 2021/11/06 23:55:09 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "default intern constrcutor\n";
}

Intern::Intern(const Intern &src)
{
	(void)src;
	std::cout << "copy constructor intern\n";
}

Intern::~Intern()
{
	std::cout << "intern destructor\n";
}

Intern& Intern::operator=(const Intern &src)
{
	(void)src;
	std::cout << "intern assign operator\n";
	return (*this);
}

Form* Intern::makeForm(const std::string &formName, const std::string &target) const
{
	Form* forms[] = {new PresidentialPardonForm(target),
	new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
	std::string formsname[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	Form	*resultForm = NULL;

	for (int i = 0; i < 3; i++)
	{
		if (formsname[i] == formName)
			resultForm = forms[i];
		else
			delete forms[i];
	}
	if (resultForm == NULL)
		std::cout << "Intern did not find the form " << formName << std::endl;
	else
		std::cout << "Intern creates " << formName << std::endl;
	return resultForm;
}

std::ostream& operator<<(std::ostream& ostr, Intern const &instance)
{
	(void)instance;
	ostr << "Intern\n";
	return ostr;
}

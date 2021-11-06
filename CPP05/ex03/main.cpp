/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:57:48 by kgale             #+#    #+#             */
/*   Updated: 2021/10/25 15:57:48 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{

Intern		usefulIdiot;
	Bureaucrat	paul("Paul", 3);
	Form		*form;

	form = usefulIdiot.makeForm("this one doesn't exist", "Marat");
	if (form)
		delete form;
	form = usefulIdiot.makeForm("presidential pardon", "Alex");
	if (form)
		delete form;
	form = usefulIdiot.makeForm("shrubbery creation", "Denis");
	if (form)
		delete form;
	form = usefulIdiot.makeForm("robotomy request", "Ann");
	form->beSigned(paul);
	form->execute(paul);
	if (form)
		delete form;
	return (0);
}

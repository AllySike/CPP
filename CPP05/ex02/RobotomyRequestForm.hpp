/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:03:36 by kgale             #+#    #+#             */
/*   Updated: 2021/11/06 21:03:36 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "RobotomyRequestForm.hpp"

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm &src);

		const std::string &getTarget() const;
		virtual void execute(const Bureaucrat &executor) const;
	private:
		const std::string target;
		RobotomyRequestForm();
};

#endif

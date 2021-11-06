/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:50:34 by kgale             #+#    #+#             */
/*   Updated: 2021/11/06 20:50:34 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(const std::string &src);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(const PresidentialPardonForm &src);

		const std::string &getTarget() const;
		virtual void execute(const Bureaucrat &executor) const;
	private:
		PresidentialPardonForm();
		const std::string target;
};

#endif

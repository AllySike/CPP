/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:40:47 by kgale             #+#    #+#             */
/*   Updated: 2021/10/25 19:40:47 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(const std::string &name, int sign_grade, int exec_grade);
		Form(const Form& src);
		virtual ~Form();
		Form& operator=(const Form& src);
		bool beSigned(const Bureaucrat& src);
		bool beExecuted(const Bureaucrat& src);

		bool getSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;
		const std::string &getName() const;
		void check() const;
		void checkExecutability(const Bureaucrat &executor) const;

		virtual void execute(const Bureaucrat& src) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("The grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("The grade is too low");
				}
		};

		class CantExecForm : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("The form cannot be executed");
				}
		};
	private:
		bool is_signed;
		const int sign_grade;
		const int exec_grade;
		const std::string name;
		static const int min = 150;
		static const int max = 1;
		Form();
};

std::ostream &operator<<(std::ostream &ostr, const Form& src);

#endif

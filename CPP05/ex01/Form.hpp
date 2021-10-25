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
		~Form();
		Form& operator=(const Form& src);
		bool beSigned(const Bureaucrat& src);
		bool beExecuted(const Bureaucrat& src);
		void exec();

		bool getSigned() const;
		int getSignReq() const;
		int getExecReq() const;
		const std::string &getName() const;

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
	private:
		bool is_signed;
		const int sign_req;
		const int exec_req;
		const std::string name;
		static const int min = 150;
		static const int max = 1;
		Form();
		void check() const;
};

std::ostream &operator<<(std::ostream &ostr, const Form& src);

#endif

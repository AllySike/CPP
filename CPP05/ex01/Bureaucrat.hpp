/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:57:43 by kgale             #+#    #+#             */
/*   Updated: 2021/10/25 15:57:43 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat& operator=(const Bureaucrat& src);

		std::string getName() const;
		int getGrade() const;
		void increment(int amount);
		void decrement(int amount);
		bool signForm(Form& form) const;
		bool executeForm(Form& form) const;

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
		Bureaucrat();
		static const int min = 150;
		static const int max = 1;
		const std::string name;
		int grade;
		void check() const;
};

std::ostream	&operator<<( std::ostream &ostr, const Bureaucrat &src );

#endif

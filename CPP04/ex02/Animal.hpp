/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:49:35 by kgale             #+#    #+#             */
/*   Updated: 2021/10/24 14:49:35 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {
	public:
		virtual ~Animal();
		virtual Animal& operator=(const Animal &src);

		virtual std::string getType() const;
		virtual Brain* getBrain() const = 0;
		virtual void makeSound() const = 0;
	protected:
		std::string type;
};

#endif

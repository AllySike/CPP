/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:12:09 by kgale             #+#    #+#             */
/*   Updated: 2021/10/24 17:12:09 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat& src);
		Cat& operator=(const Cat& src);

		virtual void makeSound() const;
		virtual Brain* getBrain() const;
	private:
		Brain* brain;
};

#endif

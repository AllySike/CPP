/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:09:26 by kgale             #+#    #+#             */
/*   Updated: 2021/10/25 14:09:26 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIALSOURCE_HPP
# define MATERIALSOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& src);
		~MateriaSource();
		MateriaSource& operator=(const MateriaSource &src);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
		void writeMaterias() const;
	private:
		AMateria *materias[4];
		int learned;
};

#endif

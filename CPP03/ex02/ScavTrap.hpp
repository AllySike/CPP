/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:21:38 by kgale             #+#    #+#             */
/*   Updated: 2021/10/22 18:21:38 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap& scavtrap);
		ScavTrap& operator = (const ScavTrap& scavTrap);
		void guardGate();
		void attack(const std::string& target);
};

#endif

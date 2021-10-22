/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondFlag.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 22:14:05 by kgale             #+#    #+#             */
/*   Updated: 2021/10/22 22:14:05 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDFLAG_HPP
# define DIAMONDFLAG_HPP

# include "FlagTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FlagTrap, public ScavTrap {
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &diamondTrap);
		DiamondTrap& operator=(const DiamondTrap& diamondTrap);
		void attack(const std::string& target);
		void whoAmI(void);
	private:
		std::string name;
};

#endif

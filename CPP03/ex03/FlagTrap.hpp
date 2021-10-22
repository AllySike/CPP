/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 21:31:44 by kgale             #+#    #+#             */
/*   Updated: 2021/10/22 21:31:44 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FlagTrap : virtual public ClapTrap {
	public:
		FlagTrap();
		FlagTrap(std::string name);
		~FlagTrap();
		FlagTrap(const FlagTrap &flagTrap);
		FlagTrap& operator=(const FlagTrap& flagTrap);
		void highFivesGuys(void);
};

#endif

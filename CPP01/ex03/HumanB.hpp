/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:21:53 by kgale             #+#    #+#             */
/*   Updated: 2021/10/19 14:21:53 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include "iostream"

class HumanB {
	public:
		HumanB(std::string name);
		void attack() const;
		void setWeapon(Weapon &wep);
	private:
		Weapon *wep;
		std::string name;
};

#endif

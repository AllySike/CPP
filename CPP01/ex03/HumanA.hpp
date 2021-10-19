/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:21:46 by kgale             #+#    #+#             */
/*   Updated: 2021/10/19 14:21:46 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include "iostream"

class HumanA {
	public:
		HumanA(std::string name, Weapon &wep);
		void attack() const;
	private:
		Weapon& wep;
		std::string name;
};

#endif

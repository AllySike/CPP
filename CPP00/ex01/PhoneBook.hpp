/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:02:35 by kgale             #+#    #+#             */
/*   Updated: 2021/10/18 23:02:35 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include "stdlib.h"
#include <iostream>

class PhoneBook
{
	private:
		Contact contacts[8];
		int cnt;

	public:
		PhoneBook();
		void add(void);
		void search(void);
};

#endif

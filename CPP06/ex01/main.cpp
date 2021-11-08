/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgale <kgale@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:53:32 by kgale             #+#    #+#             */
/*   Updated: 2021/11/08 16:53:32 by kgale            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <stdint.h>
#include <iostream>

struct Data
{
	std::string data;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data* data = new Data();
	uintptr_t ptr;
	data->data = "lol";

	ptr = serialize(data);
	std::cout << "Serialize(" << data->data << " stored at " << data << ")"
		<< " = " << ptr << std::endl;
	std::cout << "Deserialize(" << ptr << ")"
		<< " = " << deserialize(ptr)->data << " stored at " << data << std::endl;
	return (0);
}

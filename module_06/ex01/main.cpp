/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:25:12 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/06 13:50:04 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>
#include <cstdlib>

void *serialize(void)
{
	std::string arr = "abcdefghiklmnopqrstvxyzABCDEFGHIKLMNOPQRSTVXYZ1234567890";
	Data *data = new Data();
	//data->value = 0;
	data->str1 = "";
	data->str2 = "";
	srand(time(0));
	for(int i = 0; i < 8; i++)
	{
		int r = rand() % 56;
		data->str1 += arr[r];
		data->str2 += arr[r / 2];
		data->value += r;
	}
	return (data);
}

Data *deserialize(void * raw)
{
	Data *p;

	p = reinterpret_cast<Data*>(raw);
	return p;
}

int		main()
{
	void *p = serialize();
	for (int i = 0; i < (int)sizeof(Data); i++)
		std::cout << ((char*)p)[i];
	Data *a = deserialize(p);
	std::cout <<"\n\n"<< a->str1 << "\n" << a->value << "\n" << a->str2 << "\n";
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 01:28:33 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/07 02:15:24 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	iter(T *array, int length, void (*func)(T))
{
	for (int i = 0; i < length; i++)
	{
		func(array[i]);
		std::cout << " ";
	}
	std::cout << "\n";
}

template <typename T>
void	printfFunc(T var)
{
	try
	{
		std::cout << var;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int		main()
{
	int int_arr[] = {1, 2, 3, 4, 5, 6};
	iter(int_arr, 6, &printfFunc);

	std::string str_arr[] = {"Hello,", "this", "is", "array", "of", "strings."};
	iter(str_arr, 6, &printfFunc);

	float float_arr[] = {11.1f, 22.22f, 3.333f, 0.4444f, 555.5f, 6666.6f};
	iter(float_arr, 6, &printfFunc);
	return (0);
}

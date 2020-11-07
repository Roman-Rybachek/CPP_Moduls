/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:05:01 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/07 15:24:34 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include "Array.cpp"

int		main()
{
	std::cout << "\nInt\n";
	Array<int> arr = Array<int>(5);
	std::cout << "Empty: \n";
	for (int i = 0; i < 5; i++)
		std::cout << "[" << i << "] = " << arr[i] << " ";
	std::cout << "\nNew: \n";
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i;
		std::cout << "[" << i << "] = " << arr[i] << " ";
	}
	std::cout << "\n-------------------------------------\n";



	std::cout << "\nAnother\n";
	Array<int> arr2 = Array<int>(3);
	for (int i = 0; i < 3; i++)
	{
		arr2[i] = i;
		std::cout << "[" << i << "] = " << arr2[i] << " ";
	}
	arr = arr2;
	std::cout << "\n-------------------------------------\n";
	std::cout << "\nfirst = second\n";
	for (int i = 0; i < 3; i++)
	{
		arr[i] = i;
		std::cout << "[" << i << "] = " << arr[i] << " ";
	}
	std::cout << "\n-------------------------------------\n";



	std::cout << "\nString\n";
	Array<std::string> str_arr = Array<std::string>(5);
	str_arr[0] = "Hello ";
	str_arr[1] = "world! ";
	str_arr[2] = "This ";
	str_arr[3] = "text ";
	str_arr[4] = "in my own array-class!\n";
	for(int i = 0; i < 5; i++)
		std::cout << str_arr[i];


	try
	{
		std::cout << "Out of limits test: \n";
		str_arr[5] = "no";
	}
	catch(const std::exception& e)
	{
		std::cout << "It is exception!\n";
	}
	
	Array<int> emptyarry;

	return (0);
	
}

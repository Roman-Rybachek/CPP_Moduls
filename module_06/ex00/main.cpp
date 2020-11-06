/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:01:48 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/06 16:34:59 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stdint.h>

void	printChar(double value)
{
	char n= static_cast<char>(value);

	if (isnan(value) || isinf(value))
	{
		std::cout << "Char: impossible" << "\n";
		return ;
	}

	if (isprint(n))
		std::cout << "Char: " << n << "\n";
	else
		std::cout << "Char: Non displayble\n";
}

void	printInt(double value)
{
	long n = static_cast<long>(value);
	if (isnan(value) || isinf(value))
	{
		std::cout << "Char: impossible" << "\n";
		return ;
	}
	if (n > INT32_MAX || n < INT32_MIN)
		std::cout << "Int: value out of range\n";
	else
		std::cout << "Int: " << n << "\n";
}

void	printFloat(double value)
{
	if (isnan(value) || isinf(value))
	{
		std::cout << "Float: " << value << "f\n";
		return ;
	}
	if (floor(value) == value)
		std::cout << "Float: " << static_cast<float>(value) << ".0f\n";
	else
		std::cout << "Float: " << static_cast<float>(value) << "f\n";
}

void	printDouble(double value)
{
	if (isnan(value) || isinf(value))
	{
		std::cout << "Double: " << value << "\n";
		return ;
	}
	if (floor(value) == value)
		std::cout << "Double: " << static_cast<float>(value) << ".0f\n";
	else
		std::cout << "Double: " << value << "\n";
}

int		main(int argc, char** argv)
{
	std::string arg;
	double		value;

	if (argc != 2)
		return (0);
	arg = argv[1];
	(void)argc;
	
	value = atof(arg.c_str());
	printChar(value);
	printInt(value);
	printFloat(value);
	printDouble(value);

	return (0);
}
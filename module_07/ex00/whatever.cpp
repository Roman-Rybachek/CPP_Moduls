/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 00:46:52 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/07 15:33:32 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>

template < typename T >
void	swap(T *one, T *two)
{
	T tmp;
	try
	{
		tmp = *one;
		*one = *two;
		*two = tmp;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

template < typename T >
T Min(T one, T two)
{
	try
	{
		if (one >= two)
			return (two);
		else
			return (one);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (0);
	}
}

template < typename T >
T Max(T one, T two)
{
	try
	{
		if (one >= two)
			return (one);
		else
			return (two);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (0);
	}
}

int		main()
{
	int a = 5;
	int b = 6;
	std::cout << "Swap test:\n";
	std::cout << "--------------------\n";
	std::cout << "a = " << a <<"; b = " << b << "\n*swap*\n";
	swap(&a, &b);
	std::cout << "a = " << a <<"; b = " << b << "\n";
	std::cout << "--------------------\n";

	std::string str1 = "Hello";
	std::string str2 = "world!";
	std::cout << "a = " << str1 <<"; b = " << str2 << "\n*swap*\n";
	swap(&str1, &str2);
	std::cout << "a = " << str1 <<"; b = " << str2 << "\n";
	std::cout << "--------------------\n";

	float f1 = 42.42f;
	float f2 = 21.21f;
	std::cout << "a = " << f1 <<"; b = " << f2 << "\n*swap*\n";
	swap(&f1, &f2);
	std::cout << "a = " << f1 <<"; b = " << f2 << "\n";
	std::cout << "--------------------\n\n";

	std::cout << "Min test:\n";
	std::cout << a << " copmare with " << b << ". Min is " << Min(a, b) << "\n";
	std::cout << "\"" <<  str1 <<"\""<<  " copmare with " \
				<< "\"" << str2 <<"\""<< ". Min is " << "\"" \
				<< Min(str1, str2) <<"\"" << "\n";
	std::cout << f1 << " copmare with " << f2 << ". Min is " << Min(f1, f2) << "\n";
	std::cout << "--------------------\n\n";

	std::cout << "Max test:\n";
	std::cout << a << " copmare with " << b << ". Max is " << Max(a, b) << "\n";
	std::cout << "\"" <<  str1 <<"\""<<  " copmare with " \
				<< "\"" << str2 <<"\""<< ". Max is " << "\"" \
				<< Min(str1, str2) <<"\"" << "\n";
	std::cout << f1 << " copmare with " << f2 << ". Max is " << Max(f1, f2) << "\n";

	return (0);
}
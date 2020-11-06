/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:37:03 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/06 16:25:19 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"
#include <iostream>
#include <cstdlib>
#include <exception>
#include <ctime>

Base * generate(void)
{
	srand(time(0));
	int r = rand() % 3;
	Base *var = NULL;
	if (r == 2)
	{
		var = new A();
		std::cout << "A\n";
	}
	else if (r == 1)
	{
		var = new B();
		std::cout << "B\n";
	}
	else if (r == 0)
	{
		var = new C();
		std::cout << "C\n";
	}
	return var;
}

void identify_from_pointer(Base * p)
{
	A *var = dynamic_cast<A*>(p);
	if (var)
	{
		std::cout << "Is A class\n";
		return ;
	}
	B *var1 = dynamic_cast<B*>(p);
	if (var1)
	{
		std::cout << "Is B class\n";
		return ;
	}
	C *var2 = dynamic_cast<C*>(p);
	if (var2)
	{
		std::cout << "Is C class\n";
		return ;
	}
}

void identify_from_reference( Base & p)
{
	try
	{
		A& var = dynamic_cast<A&>(p);
		std::cout << "Is A class\n";
		static_cast<void>(var);
	}
	catch(const std::exception)
	{}
	try
	{
		B& var1 = dynamic_cast<B&>(p);
		std::cout << "Is B class\n";
		static_cast<void>(var1);
	}
	catch(const std::exception)
	{}
	try
	{
		C& var2 = dynamic_cast<C&>(p);
		std::cout << "Is C class\n";
		static_cast<void>(var2);
	}
	catch(const std::exception)
	{}
}

int		main(void)
{
	Base *var = generate();
	identify_from_pointer(var);
	identify_from_reference(*var);
	return (0);
}
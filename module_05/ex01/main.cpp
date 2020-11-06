/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:41:01 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/04 16:56:36 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int		main()
{
	
	Bureaucrat	a = Bureaucrat("Bob", 40);
	Form		b = Form("SimpleForm", 30, 25);
	Form		c = Form("SimpleForm", 50, 25);
	try
	{

		std::cout << c << a;
		c.beSigned(a);
		std::cout << c;
		std::cout << "----------------------------\n";
		std::cout << b;
		b.beSigned(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
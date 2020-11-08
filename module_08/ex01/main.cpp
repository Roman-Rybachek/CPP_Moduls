/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:02:02 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/08 20:33:53 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main()
{
	span a = span(5);
	try
	{
		a.addNumber(11);
		a.addNumber(22);
		a.addNumber(33);
		a.addNumber(44);
		a.addNumber(55);
		//a.addNumber(66);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	//std::cout << a.longestSpan() << " " << a.shortestSpan() << "\n";	
	
	return (0);
}
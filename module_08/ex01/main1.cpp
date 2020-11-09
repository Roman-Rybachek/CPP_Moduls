/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:02:02 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/08 23:05:27 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main()
{
	span a = span(5);
	span b = span(1);
	try
	{
		a.addNumber(1);
		a.addNumber(56);
		a.addNumber(33);
		a.addNumber(55);
		a.addNumber(100);
		a.addNumber(66);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	a.longestSpan();
	a.shortestSpan();	

	try
	{
		b.addNumber(33);
		b.shortestSpan();	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	try
	{
		b.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
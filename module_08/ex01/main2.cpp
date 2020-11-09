/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:02:02 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/08 23:05:17 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main()
{
	try
	{	
		srand(time(0));
		span c = span(11000);
		for(int i = 0; i < 11000; i++)
		{
			int r = rand() % 11000;
			c.addNumber(r);
		}
		c.longestSpan();
		c.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
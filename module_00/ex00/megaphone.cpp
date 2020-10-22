/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 17:09:06 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/22 20:04:47 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	argv += 1;
	while (argv && *argv)
	{
		while (**argv)
		{
			std::cout << (char)std::toupper(**argv);
			*argv += 1;
		}
		argv += 1;
	}
	std::cout << std::endl;
	return (0);
}

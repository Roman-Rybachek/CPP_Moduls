/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 22:10:43 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/23 02:38:53 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mainheader.hpp"

int		main()
{
	std::string command;
	Contact list[8];

	std::cout << "Hello. It is a phonebook.\n";
	while(true)
	{
		std::cout << "The available commands: ADD, SEARCH, EXIT\n";
		std::cin >> command;
		if (command == "ADD")
		{
			add(list);
		}
		/*else if (command == "SEARCH")
			search();
		else if (command == "EXIT")
			just_exit();
		else
			continue ;*/
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 22:10:43 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/22 23:47:44 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
			add(list);
		else if (command == "SEARCH")
			search();
		else if (command == "EXIT")
			just_exit();
		else
			continue ;
	}
	return (0);
}
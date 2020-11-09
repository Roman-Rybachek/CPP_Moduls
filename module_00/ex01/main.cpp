/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 22:10:43 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/09 18:33:27 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mainheader.hpp"

void			add(Contact *list)
{
	for (int i = 0; i < 8; i++)
	{
		if (list[i].is_init() == false)
		{
			list[i].filling();
			list[i].check_name();
			break ;
		}
		else if (i == 7)
		{
			std::cout << "There is not space :(\n";
			break ;
		}
	}
}

std::string		safe_write()
{
	std::string str;

	std::cin >> str;
	if (str.empty())
	{
		std::cout << "\nOh my God, it is a Ctrl+D ?!\n";
		exit(0);
	}
	return (str);
}

int				main()
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
		else if (command == "SEARCH")
			search(list);
		else if (command == "EXIT")
			return (0);
		else if (command.empty())
		{
			std::cout << "Oh my God, it is a Ctrl+D ?!\n";
			return (0);
		}
		else
			continue ;
	}
	return (0);
}
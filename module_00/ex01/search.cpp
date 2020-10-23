/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 02:58:27 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/23 04:02:50 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mainheader.hpp"
#include <cstdlib>

void	put_columns_names()
{
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "index";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "first name";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "last name";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "nickname";
	std::cout << "|" << std::endl;
}

void	put_10_chars(std::string str)
{
	std::cout << "|";
	if (str.length() > 10)
	{
		std::cout << std::setw(9);
		std::cout << str.substr(0, 9) << '.';
	}
	else
	{
		std::cout << std::setw(10);
		std::cout << str;
	}
}

void	put_contact_info(Contact elem, int i)
{
	std::string num;
	
	num = std::to_string(i);
	put_10_chars(num);
	put_10_chars(elem.first_name);
	put_10_chars(elem.last_name);
	put_10_chars(elem.nickname);
	std::cout << "|\n";
}

void	search(Contact *list)
{
	for (int i = 0; i < 8; i++)
	{
		if (list[i].init == false)
			break ;
		if (i == 0)
			put_columns_names();
		put_contact_info(list[i], i);
	}
}
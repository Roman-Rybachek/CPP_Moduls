/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 23:16:26 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/23 02:39:56 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mainheader.hpp"

Contact	filling()
{
	Contact element;

	std::cout << "First name: ";
	std::cin >> element.first_name;
	

	std::cout << "Last name: ";
	std::cin >> element.last_name;
	

	std::cout << "Nickname: ";
	std::cin >> element.nickname;
	

	std::cout << "Login: ";
	std::cin >> element.login;
	

	std::cout << "Postal address: ";
	std::cin >> element.postal_address;
	

	std::cout << "Email address: ";
	std::cin >> element.email_address;
	

	std::cout << "Phone number: ";
	std::cin >> element.phone_number;
	

	std::cout << "Birthday date: ";
	std::cin >> element.birthdat_date;
	

	std::cout << "Favorite meal: ";
	std::cin >> element.favorite_meal;
	

	std::cout << "Underwear color: ";
	std::cin >> element.underwear_color;
	

	std::cout << "Darkest secret: ";
	std::cin >> element.darkest_secret;
	element.init = true;	

	return (element);
}

void	add(Contact *list)
{
	for (int i = 0; i < 8; i++)
	{
		if (list[i].init == false)
		{
			list[i] = filling(); 
			break ;
		}
		else if (i == 0)
		{
			std::cout << "There is not space :(\n";
			break ;
		}
	}
}
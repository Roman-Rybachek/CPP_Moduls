/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_details.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 04:36:07 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/23 06:01:06 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mainheader.hpp"

void	search_details(Contact *list)
{
	int		index;

	std::cout << "Input index of contact to view full information.\n";
	std::cin >> index;
	if (index > 7 || index < 0)
	{
		std::cout << "Invalid index. Try to input index 0-7\n";
		return ;
	}

	std::cout << "First name: " << list[index].get_field("first_name") << std::endl;
	std::cout << "Last name: " << list[index].get_field("last_name") << std::endl;
	std::cout << "Nickname: " << list[index].get_field("nickname") << std::endl;
	std::cout << "Login: " << list[index].get_field("login") << std::endl;
	std::cout << "Postal address: " << list[index].get_field("postal_address") << std::endl;
	std::cout << "Email address: " << list[index].get_field("email_address") << std::endl;
	std::cout << "Phone number: " << list[index].get_field("phone_number") << std::endl;
	std::cout << "Birthday date: " << list[index].get_field("birthday_date") << std::endl;
	std::cout << "Favorite meal: " << list[index].get_field("favorite_meal") << std::endl;
	std::cout << "Underwear color: " << list[index].get_field("underwear_color") << std::endl;
	std::cout << "Darkest secret: " << list[index].get_field("darkest_secret") << std::endl;

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 23:16:26 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/22 23:49:02 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	add(Contact *list)
{
	int		i;

	i = 0;
	while (i < 8 || list[i].init != false)
		i++;
	std::cout << "First name: ";
	std::cin >> list[i].first_name;
	std::cout << '\n';

	std::cout << "Last name: ";
	std::cin >> list[i].last_name;
	std::cout << '\n';

	std::cout << "Nickname: ";
	std::cin >> list[i].nickname;
	std::cout << '\n';

	std::cout << "Login: ";
	std::cin >> list[i].login;
	std::cout << '\n';

	std::cout << "Postal address: ";
	std::cin >> list[i].postal_address;
	std::cout << '\n';

	std::cout << "Email address: ";
	std::cin >> list[i].email_address;
	std::cout << '\n';

	std::cout << "Phone number: ";
	std::cin >> list[i].phone_number;
	std::cout << '\n';

	std::cout << "Birthday date: ";
	std::cin >> list[i].birthdat_date;
	std::cout << '\n';

	std::cout << "Favorite meal: ";
	std::cin >> list[i].favorite_meal;
	std::cout << '\n';

	std::cout << "Underwear color: ";
	std::cin >> list[i].underwear_color;
	std::cout << '\n';

	std::cout << "Darkest secret: ";
	std::cin >> list[i].darkest_secret;
	std::cout << '\n';
}
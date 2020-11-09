/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 05:00:58 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/09 18:19:38 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mainheader.hpp"

void	Contact::filling()
{
	std::cout << "First name: ";
	first_name = safe_write();
	std::cout << "Last name: ";
	last_name = safe_write();
	std::cout << "Nickname: ";
	nickname = safe_write();
	std::cout << "Login: ";
	login = safe_write();
	std::cout << "Postal address: ";
	postal_address = safe_write();
	std::cout << "Email address: ";
	email_address = safe_write();
	std::cout << "Phone number: ";
	phone_number = safe_write();
	std::cout << "Birthday date: ";
	birthday_date = safe_write();
	std::cout << "Favorite meal: ";
	favorite_meal = safe_write();
	std::cout << "Underwear color: ";
	underwear_color = safe_write();
	std::cout << "Darkest secret: ";
	darkest_secret = safe_write();
	init = true;
}

bool		Contact::is_init()
{
	if (init == true)
		return (true);
	else
		return (false);
}

void		Contact::check_name()
{
	if (first_name.empty() && last_name.empty() && \
		nickname.empty() && login.empty() && \
		email_address.empty() && phone_number.empty())
	{
		std::cout << "All fields for identity are empty. Contact is not created\n";
		init = false;
		postal_address.clear();
		birthday_date.clear();
		favorite_meal.clear();
		underwear_color.clear();
		darkest_secret.clear();
		return ;
	}
}

std::string Contact::get_field(std::string field)
{
	if (field == "first_name")
		return (first_name);
	else if (field == "last_name")
		return (last_name);
	else if (field == "nickname")
		return (nickname);
	else if (field == "login")
		return (login);
	else if (field == "postal_address")
		return (postal_address);
	else if (field == "email_address")
		return (email_address);
	else if (field == "phone_number")
		return (phone_number);
	else if (field == "birthday_date")
		return (birthday_date);
	else if (field == "favorite_meal")
		return (favorite_meal);
	else if (field == "underwear_color")
		return (underwear_color);
	else if (field == "darkest_secret")
		return (darkest_secret);
	else
		return ("empty");
}

Contact::Contact()
{
	init = false;
}

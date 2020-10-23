/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 20:57:15 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/23 23:30:58 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << '<' << name << '(' << type << ")> Braiiiiiinnnssss...\n";
}

Zombie::Zombie(std::string set_name, std::string set_type)
{
	name = set_name;
	type = set_type;
	std::cout << "Zombie " << name << " has been created\n";
}

Zombie::~Zombie()
{
	std::cout << "AAGHHH... (zombie " << name << " is died)\n";
}

void	Zombie::change_name(std::string set_name)
{
	if (!set_name.empty())
	{
		std::cout << name << " name has been changed on " << set_name << "\n";
		name = set_name;
	}
	else
		std::cout << "New name is empty. Name was not changed";
}
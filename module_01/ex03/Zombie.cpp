/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 20:57:15 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/24 01:24:11 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <ctime>

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

Zombie::Zombie()
{
	type = "weak";
	name = "not_set";
}

Zombie::~Zombie()
{
	std::cout << "AAGHHH... (zombie " << name << " is died)\n";
}

void	Zombie::change_name(std::string set_name)
{
	name = set_name;
}
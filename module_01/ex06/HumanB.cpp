/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 01:12:34 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/25 02:09:51 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string set_name)
{
	name = set_name;
	weapon = nullptr;
}

void	HumanB::attack()
{
	if (weapon != nullptr)
		std::cout << name << " attack with his " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &set_weapon)
{
	weapon = &set_weapon;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 00:25:49 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/25 02:19:51 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string set_name, Weapon &set_weapon) : weapon(set_weapon)
{
	name = set_name;
}

void	HumanA::attack()
{
	std::cout << name << " attack with his " << weapon.getType() << std::endl;
}

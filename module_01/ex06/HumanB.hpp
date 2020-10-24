/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 01:10:16 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/25 02:11:57 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon 		*weapon;
		std::string name;
	public:
		void		attack();
		HumanB(std::string set_name);
		void		setWeapon(Weapon &set_weapon);
};

#endif

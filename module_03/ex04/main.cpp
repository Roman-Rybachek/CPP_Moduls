/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 02:39:50 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/30 20:52:11 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main()
{
	NinjaTrap	ninja = NinjaTrap("Ninja");
	SuperTrap	super = SuperTrap("SuperTrap");
	ScavTrap	scav = ScavTrap("ScavTrap");
	FragTrap	frag = FragTrap("FragTrap");

	super.vaulthunter_dot_exe("target");
	super.ninjaShoebox(ninja);
	super.ninjaShoebox(scav);
	super.ninjaShoebox(frag);
	return (0);
}
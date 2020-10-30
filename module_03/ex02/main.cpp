/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 02:39:50 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/30 14:44:15 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int		main()
{
	FragTrap *a = new FragTrap("Frag_Trap");
	a->meleeAttack("target");
	a->takeDamage(50);
	a->vaulthunter_dot_exe("target");
	delete a;
	std::cout << std::endl;
	ScavTrap *b = new ScavTrap("Scav_Trap");
	b->meleeAttack("target");
	b->takeDamage(50);
	b->challengeNewcome("target");
	delete b;

	return (0);
}
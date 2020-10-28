/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 02:39:50 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/28 10:28:37 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	ScavTrap a = ScavTrap("Scav_trap");
	a.challengeNewcome("FragTrap");
	a.challengeNewcome("FragTrap");
	a.challengeNewcome("FragTrap");
	a.challengeNewcome("FragTrap");
	a.challengeNewcome("FragTrap");
	a.takeDamage(30);
	a.takeDamage(10);
	a.takeDamage(30);
	a.beReapired(100);
	a.takeDamage(200);
	std::cout << std::endl;	
	FragTrap b = FragTrap("Frag_trap");
	b.vaulthunter_dot_exe("ScavTrap");
	b.vaulthunter_dot_exe("ScavTrap");
	b.vaulthunter_dot_exe("ScavTrap");
	b.vaulthunter_dot_exe("ScavTrap");
	b.vaulthunter_dot_exe("ScavTrap");
	b.takeDamage(30);
	b.takeDamage(10);
	b.takeDamage(30);
	b.beReapired(100);
	b.takeDamage(200);

	return (0);
}
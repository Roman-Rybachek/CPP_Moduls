/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 02:39:50 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/28 09:32:03 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main()
{
	FragTrap a = FragTrap("Superbot");
	FragTrap b = FragTrap("Wonderbot");
	FragTrap c = FragTrap("Immortalbot");
	FragTrap d = FragTrap(c);

	b.meleeAttack("Superbot");
	a.takeDamage(50);
	b.rangedAttack("Superbot");
	a.takeDamage(40);
	a = b;

	c.meleeAttack("Wonderbot");
	a.takeDamage(50);
	c.meleeAttack("Wonderbot");
	a.takeDamage(20);
	c.meleeAttack("Wonderbot");
	a.takeDamage(50);
	a.beReapired(20);
	a.beReapired(100);
	d.vaulthunter_dot_exe("Wonderbot");
	d.vaulthunter_dot_exe("Wonderbot");
	d.vaulthunter_dot_exe("Wonderbot");
	d.vaulthunter_dot_exe("Wonderbot");
	d.vaulthunter_dot_exe("Wonderbot");
	return (0);
}
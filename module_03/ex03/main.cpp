/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 02:39:50 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/30 15:12:26 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int		main()
{
	NinjaTrap *ninja = new NinjaTrap("Ninja");
	NinjaTrap *other_ninja = new NinjaTrap("Other ninja");
	FragTrap *fragtrap = new FragTrap("Fragtrap");
	ScavTrap *scavtrap = new ScavTrap("Scavtrap");

	ninja->ninjaShoebox(*other_ninja);
	ninja->ninjaShoebox(*fragtrap);
	ninja->ninjaShoebox(*scavtrap);

	delete other_ninja;
	delete fragtrap;
	delete scavtrap;
	delete ninja;
	return (0);
}
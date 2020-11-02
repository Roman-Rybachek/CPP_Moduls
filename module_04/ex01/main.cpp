/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:17:31 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/02 18:39:00 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RedScorpion.hpp"
#include "Character.hpp"
#include <iostream>

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RedScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	std::cout << "-----------------------------\n";
	Enemy* a = new SuperMutant();
	std::cout << a->getType() << " have " << a->getHP() << "HP\n";
	std::cout << "Damage of " << pr->getName() << " is " << pr->getDamage() << "\n";
	std::cout << "Ap is " << me->getAP() << "\n";
	me->equip(pr);
	me->attack(a);
	std::cout << a->getType() << " have " << a->getHP() << "HP\n";
	std::cout << "Damage of " << pf->getName() << " is " << pf->getDamage() << "\n";
	std::cout << "Ap is " << me->getAP() << "\n";
	me->equip(pf);
	me->attack(a);
	std::cout << "Ap is " << me->getAP() << "\n";
	std::cout << a->getType() << " have " << a->getHP() << "HP\n";
	return 0;
}
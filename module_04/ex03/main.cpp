/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 22:50:06 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/04 00:12:29 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	std::cout << "-------------\n";
	
	IMateriaSource* src1 = new MateriaSource();
	src1->learnMateria(new Ice());
	src1->learnMateria(new Cure());
	ICharacter *chr = new Character("me");
	ICharacter *chr1 = new Character("me");
	chr->equip(src1->createMateria("ice"));
	chr->equip(src1->createMateria("ice"));
	chr->equip(src1->createMateria("ice"));
	chr->equip(src1->createMateria("cure"));
	chr->equip(src1->createMateria("cure"));
	chr->unequip(0);
	chr->unequip(1);
	chr->unequip(2);
	chr->unequip(3);
	chr->use(0, *chr1);
	delete chr;
	delete src1;
	delete chr1;
	return 0;
}
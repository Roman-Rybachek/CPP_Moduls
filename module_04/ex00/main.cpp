/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 00:51:31 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 19:49:29 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Other.hpp"

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

int		main()
{
	// std::cout <<YELLOW;
	// Sorcerer	a = Sorcerer();
	// std::cout <<RESET;
	// std::cout << a;
	// std::cout << std::endl;

	// std::cout <<YELLOW;
	// Victim		b = Victim();
	// std::cout <<RESET;
	// std::cout << b;
	// std::cout << std::endl;
	
	// std::cout <<RED;
	// b.getPolymorphed();
	// a.polymorph(b);
	// std::cout <<RESET;
	// std::cout << std::endl;

	Sorcerer *robert = new Sorcerer("Robert", "the Magnificent");
	Victim *jim = new Victim("Jimmy");
	Peon *joe = new Peon("Joe");
	std::cout << *robert << *jim << *joe;
	robert->polymorph(*jim);
	robert->polymorph(*joe);
	delete joe;
	delete jim;
	delete robert;
	std::cout << "---------------------------------------\n";
	Sorcerer b = Sorcerer();
	std::cout << b;
	std::cout << "---------------------------------------\n";
	Victim *a = new Peon();
	std::cout << *a;
	b.polymorph(*a);
	delete a;
	std::cout << "---------------------------------------\n";
	Victim *c = new Other();
	std::cout << *c;
	b.polymorph(*c);
	delete c;
	std::cout << "---------------------------------------\n";
	return (0);
}
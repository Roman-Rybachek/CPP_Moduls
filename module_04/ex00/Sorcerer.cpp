/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 23:57:10 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/09 18:44:14 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <cstdlib>

// Cuplien

Sorcerer::Sorcerer()
{
	name = random_sorcerer_name(); title = random_title();
	std::cout << name << ", " << title << " is born!\n";
}

Sorcerer::Sorcerer(std::string set_name, std::string set_title)
{
	name = set_name; title = set_title;
	std::cout << name << ", " << title << " is born!\n";
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	name = copy.name; title = copy.title;
	std::cout << name << ", " << title << " is born!\n";
}

Sorcerer::~Sorcerer()
{std::cout << name << ", " << title << ", is dead. Consequences will never be the same!\n";}

Sorcerer	&Sorcerer::operator= (Sorcerer const &any)
{name = any.name; title = any.title; return (*this);}

// Methods

std::string		Sorcerer::introduce() const
{return ("I am "+ name + ", " + title + ", and I like ponies!\n");}

std::ostream	&operator<<(std::ostream &os, Sorcerer const &any)
{os << any.introduce(); return (os);}

void 			Sorcerer::polymorph(Victim const &any) const 
{any.getPolymorphed();}
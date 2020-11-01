/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 10:15:54 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 19:08:39 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{name = random_victim_name(); std::cout << "Some random victim called " << name << " just appeared!\n"; }

Victim::Victim(std::string set_name)
{name = set_name; std::cout << "Some random victim called " << name << " just appeared!\n";}

Victim::Victim(const Victim &copy)
{name = copy.name; std::cout << "Some random victim called " << name << " just appeared!\n";}

Victim::~Victim()
{std::cout << "Victim " << name << " just died for no apparent reason!\n";}

Victim		&Victim::operator=(const Victim &any)
{name = any.name; return (*this);}

std::string		Victim::introduce() const
{
	std::string message = "I'm " + name + " and I like otters!\n";
	return (message);
}

std::ostream	&operator<<(std::ostream &os, Victim const &any)
{
	os << any.introduce();
	return (os);
}

void			Victim::getPolymorphed() const
{std::cout << name << " has been turned into a cute little sheep!\n";}
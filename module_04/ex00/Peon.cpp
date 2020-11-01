/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 11:55:06 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 19:02:22 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

// Cuplien
Peon::Peon() : Victim()
{std::cout << "Zog zog.\n";}

Peon::Peon(std::string set_name) : Victim(set_name)
{std::cout << "Zog zog.\n";}

Peon::Peon(Peon const &copy) : Victim(copy.name)
{std::cout << "Zog zog.\n";}

Peon::~Peon()
{std::cout << "Bleuark...\n";}

Peon	&Peon::operator=(Peon const &any)
{
	this->name = any.name;
	return (*this);
}

// Methods
void	Peon::getPolymorphed() const
{std::cout << name + " has been turned into a pink pony!\n";}

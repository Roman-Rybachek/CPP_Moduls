/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Other.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 11:55:06 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 19:02:22 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Other.hpp"

// Cuplien
Other::Other() : Victim()
{std::cout << "Other class is born.\n";}

Other::Other(std::string set_name) : Victim(set_name)
{std::cout << "Other class is born.\n";}

Other::Other(Other const &copy) : Victim(copy.name)
{std::cout << "Other class is born.\n";}

Other::~Other()
{std::cout << "Other class is died\n";}

Other	&Other::operator=(Other const &any)
{
	this->name = any.name;
	return (*this);
}

// Methods
void	Other::getPolymorphed() const
{std::cout << name + " has been turned into a MONSTER!\n";}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:41:57 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 22:54:50 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

// Cuplien

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
	m_output = "* pshhh... SBAM! *\n";
	std::cout << "PowerFist with name \"" << m_name << "\" has been spawned\n";
}

PowerFist::PowerFist(PowerFist const &copy) : AWeapon(copy.m_name, copy.m_damage, copy.m_apcost)
{
	m_output = copy.m_output;
	std::cout << "PowerFist with name \"" << m_name << "\" has been spawned\n";
}

PowerFist::~PowerFist()
{std::cout << "PowerFist with name \"" << m_name << "\" has been deleted\n";}

PowerFist		&PowerFist::operator=(PowerFist const &copy)
{
	m_output = copy.m_output; m_damage = copy.m_damage;
	m_name = copy.m_name; m_apcost = copy.m_apcost;
	return (*this);
}

// Methods

void			PowerFist::attack() const
{std::cout << m_output;}
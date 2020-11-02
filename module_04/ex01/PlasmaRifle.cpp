/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:41:57 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/02 18:22:36 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

// Cuplien

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	m_output = "* piouuu piouuu piouuu *\n";
	//std::cout << "PlasmaRifle with name \"" << m_name << "\" has been spawned\n";
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) : AWeapon(copy.m_name, copy.m_damage, copy.m_apcost)
{
	m_output = copy.m_output;
	//std::cout << "PlasmaRifle with name \"" << m_name << "\" has been spawned\n";
}

PlasmaRifle::~PlasmaRifle()
{
	//std::cout << "PlasmaRifle with name \"" << m_name << "\" has been deleted\n";
}

PlasmaRifle		&PlasmaRifle::operator=(PlasmaRifle const &copy)
{
	m_output = copy.m_output; m_damage = copy.m_damage;
	m_name = copy.m_name; m_apcost = copy.m_apcost;
	return (*this);
}

// Methods

void			PlasmaRifle::attack() const
{std::cout << m_output;}
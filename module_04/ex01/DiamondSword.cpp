/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondSword.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:41:57 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/02 18:24:00 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondSword.hpp"

// Cuplien

DiamondSword::DiamondSword() : AWeapon("DiamondSword", 5, 40)
{
	m_output = "* he draws his diamond sword from its scabbard... *\n";
	//std::cout << "DiamondSword with name \"" << m_name << "\" has been spawned\n";
}

DiamondSword::DiamondSword(DiamondSword const &copy) : AWeapon(copy.m_name, copy.m_damage, copy.m_apcost)
{
	m_output = copy.m_output;
	//std::cout << "DiamondSword with name \"" << m_name << "\" has been spawned\n";
}

DiamondSword::~DiamondSword()
{
	//std::cout << "DiamondSword with name \"" << m_name << "\" has been deleted\n";
}

DiamondSword		&DiamondSword::operator=(DiamondSword const &copy)
{
	m_output = copy.m_output; m_damage = copy.m_damage;
	m_name = copy.m_name; m_apcost = copy.m_apcost;
	return (*this);
}

// Methods

void			DiamondSword::attack() const
{std::cout << m_output;}
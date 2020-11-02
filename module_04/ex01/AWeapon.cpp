/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:00:16 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/02 18:22:12 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

// Cuplien

AWeapon::AWeapon()
{
	m_name = "Unnamed"; m_output = "*silence*";
	m_damage = 0; m_apcost = 0;
	//std::cout << "AWeapon object " << m_name << " has been created\n";
}

AWeapon::AWeapon(AWeapon const &copy)
{
	m_name = copy.m_name; m_output = copy.m_output;
	m_damage = copy.m_damage; m_apcost = copy.m_apcost;
	//std::cout << "AWeapon object " << m_name << " has been created\n";
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	m_name = name; m_apcost = apcost; m_damage = damage;
	//std::cout << "AWeapon object " << m_name << " has been created\n";
}

AWeapon			&AWeapon::operator=(AWeapon const &any)
{
	m_name = any.m_name; m_output = any.m_output;
	m_damage = any.m_damage; m_apcost = any.m_apcost;
	return (*this);
}

AWeapon::~AWeapon()
{
	//std::cout << "AWeapon object " << m_name << " has been deleted\n";
}

// methods

std::string	const	&AWeapon::getName() const
{return (m_name);}

int					AWeapon::getAPCost() const
{return (m_apcost);}

int					AWeapon::getDamage() const
{return (m_damage);}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:58:29 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/01 00:02:25 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

// Cuplien

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){}

SuperMutant::SuperMutant(SuperMutant const &copy) : Enemy(copy.m_hp, copy.m_type){}

SuperMutant::SuperMutant(int hp, std::string const &type)
{
	m_type = type; m_hp = hp;
	std::cout << "SuperMutant object " << m_name << " has been created\n";
}

SuperMutant::~SuperMutant()
{std::cout << "SuperMutant object " << m_name << " has been deleted\n";}

SuperMutant				&SuperMutant::operator=(SuperMutant const &any)
{m_hp = any.m_hp; m_type = any.m_type;}

// Methods

std::string const	&SuperMutant::getType() const
{return (m_type);}

int					SuperMutant::getHP() const
{return (m_hp);}

void				SuperMutant::takeDamage(int value)
{
	if (value == 0) return ;
	m_hp -= value;
	if (m_hp < 0) m_hp = 0;
	std::cout << "Object SuperMutant with type " << m_type \
				<< " take " << value << " damage\n"; 
}
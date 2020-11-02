/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Creeper.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:05:57 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/02 16:26:43 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Creeper.hpp"

// Cuplien

Creeper::Creeper() : Enemy(170, "Creeper")
{std::cout << "pssssshhhhhh...\n";}

Creeper::Creeper(Creeper const &copy) : Enemy(copy.m_hp, copy.m_type)
{std::cout << "pssssshhhhhh...\n";}

Creeper::~Creeper()
{std::cout << "BOOOOOooom!\n";}

Creeper				&Creeper::operator=(Creeper const &any)
{m_hp = any.m_hp; m_type = any.m_type; return (*this);}

// Methods


void				Creeper::takeDamage(int value)
{
	if (value <= 0) return ;
	m_hp -= value;
	if (m_hp < 0) m_hp = 0;
	std::cout << "Object Creeper with type " << m_type \
				<< " take " << value << " damage\n"; 
}
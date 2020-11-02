/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:58:29 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/02 15:23:49 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

// Cuplien

Enemy::Enemy()
{	
	m_type = "Untyped";
	std::cout << "Enemy object " << m_type << " has been created\n";
}

Enemy::Enemy(Enemy const &copy)
{
	m_type = copy.m_type;
	std::cout << "Enemy object " << m_type << " has been created\n";
}

Enemy::Enemy(int hp, std::string const &type)
{
	m_type = type; m_hp = hp;
	std::cout << "Enemy object " << m_type << " has been created\n";
}

Enemy::~Enemy()
{std::cout << "Enemy object " << m_type << " has been deleted\n";}

Enemy				&Enemy::operator=(Enemy const &any)
{m_hp = any.m_hp; m_type = any.m_type; return (*this);}

// Methods

std::string const	&Enemy::getType() const
{return (m_type);}

int					Enemy::getHP() const
{return (m_hp);}

void				Enemy::takeDamage(int value)
{
	if (value <= 0) return ;
	m_hp -= value;
	if (m_hp < 0) m_hp = 0;
	std::cout << "Object Enemy with type " << m_type \
				<< " take " << value << " damage\n"; 
}
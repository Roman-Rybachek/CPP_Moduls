/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:14:31 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/02 22:22:59 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
{
	m_name = name;
	m_ap = 40;
	m_weapon = NULL;
	//std::cout << m_name << " character has been created\n";
}

Character::Character()
{
	m_name = "Unnamed";
	m_ap = 40;
	m_weapon = NULL;
	//std::cout << "Unnamed character has been created\n";
}

Character::~Character()
{std::cout << m_name << " character has been deleted\n";}

Character::Character(const Character &copy)
{
	m_name = copy.m_name; m_ap = copy.m_ap; m_weapon = copy.m_weapon;
	//std::cout << m_name << " character has been created\n";
}

Character	&Character::operator=(const Character &copy)
{
	m_name = copy.m_name;
	m_ap = copy.m_ap;
	m_weapon = copy.m_weapon;
	return (*this);
}

void				Character::recoverAP()
{
	m_ap += 10;
	std::cout << "+ 10 AP\n";
	if (m_ap >= 40)
	{
		m_ap = 40;
		std::cout << "AP is full\n";
	}
}

void 				Character::equip(AWeapon* weapon)
{m_weapon = weapon;}

void 				Character::attack(Enemy* enemy)
{
	if (enemy == NULL)
	{
		std::cout << "Enemy already dead!\n";
		return ;
	}
	if (m_weapon == NULL)
	{
		std::cout << "No weapon!\n";
		return ;
	}	
	if (m_ap >= m_weapon->getAPCost())
		m_ap -= m_weapon->getAPCost();
	else
	{
		std::cout << "No ap!\n";
		return ;
	}
	std::cout << m_name << " attacks " << enemy->getType() << " with a " << m_weapon->getName() << "\n";
	m_weapon->attack();
	enemy->takeDamage(m_weapon->getDamage());
	if (enemy->getHP() <= 0)
	{
		delete enemy;
	}
}

std::string const	&Character::getName() const
{return (m_name);}

int					Character::getAP() const
{return (m_ap);}

std::string const	*Character::getWeaponName() const
{
	if (m_weapon != NULL)
		return (&m_weapon->getName());
	else
		return (NULL);
}

std::ostream	&operator<<(std::ostream &os, Character const &any)
{
	std::string str;
	if (any.getWeaponName())
		str = "wields a " +  *any.getWeaponName();
	else
		str = "is unarmed";
	os << any.getName() << " has " << any.getAP() << " AP and " << str << "\n";
	return (os);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:29:32 by theuser           #+#    #+#             */
/*   Updated: 2020/11/04 00:09:36 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	m_name = "Unnamed";
	for(int i = 0; i < 4; i++)
		m_inventory[i] = NULL;
}

Character::Character(std::string name)
{
	m_name = name;
	for(int i = 0; i < 4; i++)
		m_inventory[i] = NULL;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		if (m_inventory[i])
			delete m_inventory[i];
}

Character::Character(const Character &copy)
{
	m_name = copy.m_name;
	for(int i = 0; i < 4; i++)
		m_inventory[i] = copy.m_inventory[i];
}

Character	&Character::operator=(const Character &copy)
{
	m_name = copy.m_name;
	for(int i = 0; i < 4; i++)
		m_inventory[i] = copy.m_inventory[i];
	return (*this);
}

void				Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_inventory[i] == m)
		{
			std::cout << "Materia already exist in inventory\n";
			return ;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (m_inventory[i] == NULL)
		{
			m_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory is full\n";
}


void				Character::unequip(int idx)
{
	if (idx < 0 || idx > 3) 
	{
		std::cout << "Index is invalid\n";
		return ;
	}
	std::cout << "Slot " << idx <<" is empty\n";
	m_inventory[idx] = NULL;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Index is invalid\n";
		return ;
	}
	if (!m_inventory[idx])
	{
		std::cout << "Slot is empty\n";
		return ;
	}
	m_inventory[idx]->use(target);
}

std::string const	&Character::getName() const
{
	return (m_name);
}
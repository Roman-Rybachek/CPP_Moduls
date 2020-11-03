/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:50:25 by theuser           #+#    #+#             */
/*   Updated: 2020/11/03 18:36:45 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	m_units = NULL;
	m_count = 0;
}

Squad::~Squad()
{
	for(int i = 0; i < m_count; i++)
		delete m_units[i];
	 delete m_units;
}

Squad::Squad(const Squad &copy)
{
	m_count = 0;
	for (int i = 0; i < copy.getCount(); i++)
		this->push(copy.getUnit(i)->clone());
}

Squad	&Squad::operator=(const Squad &copy)
{
	if (m_units)
	{
		for (int i = 0; i < copy.getCount(); i++)
			delete m_units[i];
		delete m_units;
		m_units = NULL;
	}
	m_count = 0;
	for (int i = 0; i < copy.getCount(); i++)
		this->push(copy.getUnit(i)->clone());
	return (*this);
}

int		Squad::getCount() const
{
	int count = 0;

	for(int i = 0; m_units[i]; i++)
		count++;
	return (count);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	return (m_units[n]);
}

int		Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return (m_count);
	if (!m_units)
	{
		m_units = new ISpaceMarine*[1];
		m_units[0] = unit;
		m_count = 1;
		return (m_count);
	}
	for (int i = 0; i < m_count; i++)
		if (m_units[i] == unit)
			return (m_count);
	ISpaceMarine **new_units = new ISpaceMarine*[m_count + 1];
	for (int i = 0; i < m_count; i++)
		new_units[i] = m_units[i];
	new_units[m_count] = unit;
	delete[] m_units;
	m_units = new_units;
	m_count++;
	return (m_count);
}
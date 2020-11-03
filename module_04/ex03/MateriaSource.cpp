/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 23:36:34 by theuser           #+#    #+#             */
/*   Updated: 2020/11/03 23:58:24 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "string.h"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		m_learned[i] = NULL;
}

MateriaSource::~MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for(int i = 0; i < 4; i++)
		m_learned[i] = copy.m_learned[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	for(int i = 0; i < 4; i++)
		m_learned[i] = copy.m_learned[i];
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_learned[i] == NULL)
		{
			m_learned[i] = materia->clone();
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (m_learned[i] && type == m_learned[i]->getType())
			return (m_learned[i]->clone());
	}
	return NULL;
}
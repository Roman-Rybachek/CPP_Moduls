/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:53:37 by theuser           #+#    #+#             */
/*   Updated: 2020/11/03 20:20:42 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	str1 = "* heals ";
	str2 = "'s wounds *\n";
	m_type = "cure";
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &copy) : AMateria()
{
	(void)copy;
	str1 = "* heals ";
	str2 = "'s wounds *\n";
	m_type = "cure";
}

Cure	&Cure::operator=(const Cure &copy)
{
	(void)copy;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *materia = new Cure;
	return (materia);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:53:37 by theuser           #+#    #+#             */
/*   Updated: 2020/11/04 00:04:33 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	str1 = "*shoots an ice bolt at ";
	str2 = " *\n";
	m_type = "ice";
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &copy) : AMateria()
{
	(void)copy;
	str1 = "*shoots an ice bolt at ";
	str2 = " *\n";
	m_type = "ice";
}

Ice	&Ice::operator=(const Ice &copy)
{
	(void)copy;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *materia = new Ice;
	return (materia);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:25:18 by theuser           #+#    #+#             */
/*   Updated: 2020/11/03 23:09:40 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	_xp = 0;
	str1 = "";
	str2 = "";
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &copy)
{
	_xp = copy.getXP();
}

AMateria	&AMateria::operator=(const AMateria &copy)
{
	_xp = copy.getXP();
	m_type = copy.getType();
	return (*this);
}

std::string const 	&AMateria::getType() const
{return (m_type);}

unsigned int		AMateria::getXP() const
{return (_xp);}

void AMateria::use(ICharacter &target)
{
	_xp += 10;
	std::cout << str1 << target.getName() << str2;
}
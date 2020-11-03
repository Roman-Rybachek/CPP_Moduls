/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 00:15:42 by theuser           #+#    #+#             */
/*   Updated: 2020/11/03 16:41:10 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleport from space *\n";
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back...\n";
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy)
{
	std::cout << "* teleport from space *\n";
	*this = copy;
}

AssaultTerminator	&AssaultTerminator::operator=(const AssaultTerminator &copy)
{
	(void)copy;
	return (*this);
}


void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!\n";
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attack with chainfists *\n";
}

ISpaceMarine *AssaultTerminator::clone() const
{
	ISpaceMarine *marine = new AssaultTerminator(*this);
	return (marine);
}
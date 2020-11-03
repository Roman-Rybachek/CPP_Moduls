/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 00:15:42 by theuser           #+#    #+#             */
/*   Updated: 2020/11/03 16:41:10 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh...\n";
}

TacticalMarine::TacticalMarine(const TacticalMarine &copy)
{
	std::cout << "Tactical Marine ready for battle!\n";
	*this = copy;
}

TacticalMarine	&TacticalMarine::operator=(const TacticalMarine &copy)
{
	(void)copy;
	return (*this);
}


void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!\n";
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *\n";
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attack with a chainsword *\n";
}

ISpaceMarine *TacticalMarine::clone() const
{
	ISpaceMarine *marine = new TacticalMarine(*this);
	return (marine);
}
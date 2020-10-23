/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 08:08:17 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/23 20:30:13 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int legs, int heads, int tails, int eyes)
{
	if (!name.empty())
		p_name = name;
	else
		p_name = "unnamed";
	p_legs = legs;
	p_heads = heads;
	p_tails = tails;
	p_eyes = eyes;
	
	if (p_legs == 4 && p_heads == 1 && p_tails == 1 && p_eyes == 2)
		std::cout << p_name << " pony is absolutely healthy! :D\n";
	else if (p_legs > 4 || p_heads > 1 || p_tails > 1 || p_eyes > 2)
		std::cout << p_name << " pony is strange... 0_o\n";
	else
		std::cout << p_name << " pony it not healthy :(\n";
}

Pony::~Pony()
{
	std::cout << p_name << " pony is dead :(\n";
}

void	Pony::run()
{
	std::cout << p_name << " pony is running!\n";
}
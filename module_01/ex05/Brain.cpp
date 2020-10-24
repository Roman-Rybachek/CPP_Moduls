/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 02:23:49 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/24 23:36:43 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <cstdlib>
#include <string>

Brain::Brain()
{
	srand(static_cast<unsigned int>(time(0)));
	iq = rand() % 100;
	if (iq > 200)
		iq = 200;
	if (iq < 0)
		iq = 0;
	addr = (unsigned long)this;
}

std::string		Brain::identify() const
{
	std::string res = "0x";
	res += std::to_string(addr);
	return (res);
}
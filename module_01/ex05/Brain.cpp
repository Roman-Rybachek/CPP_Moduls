/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 02:23:49 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/24 02:50:19 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	srand(static_cast<unsigned int>(time(0)));
	iq = rand() % 100;
	if (iq > 200)
		iq = 200;
	if (iq < 0)
		iq = 0;
	std::cout << iq << std::endl;
}

std::string		Brain::identify()
{
	
}
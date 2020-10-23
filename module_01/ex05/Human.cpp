/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 02:23:44 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/24 02:54:50 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::~Human()
{
	delete little_brain;
}

Human::Human()
{
	little_brain = new Brain();
}

std::string		Human::identify()
{
	return (little_brain->identify());
}

Brain			Human::getBrain()
{
	return(*little_brain);
}
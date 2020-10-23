/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 21:42:04 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/23 23:40:37 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string new_type)
{
	type = new_type;
}

Zombie	*ZombieEvent::newZombie(std::string set_name)
{
	Zombie	*new_zombie = new Zombie(set_name, type);
	return (new_zombie);
}

char	*random_name()
{
	char	*name = new char[7];
	int		tmp;
	for (int i = 0; i < 6; i++)
	{
		tmp = rand() % 100;
		if (tmp < 65)
			tmp = 65;
		else if (tmp > 90 && tmp < 97)
			tmp = 90;
		else if (tmp > 122)
			tmp = 122;
		name[i] = tmp;
	}
	name[6] = '\0';
	return (name);
}

Zombie	ZombieEvent::randomChump()
{
	std::string set_name;
	char		*str;

	str = random_name();
	set_name = str;
	Zombie	new_zombie = Zombie(set_name, type);
	delete str;
	new_zombie.announce();
	return (new_zombie);
}

ZombieEvent::ZombieEvent()
{
	type = "weak";
	std::cout << "ZombieEvent object has been created. Default zombie type: weak\n";
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "ZombieEvent object has been destroyed\n";
}
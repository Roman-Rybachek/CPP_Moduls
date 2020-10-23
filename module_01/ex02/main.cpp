/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 22:21:53 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/24 00:05:48 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	survivalist_came(Zombie **zombie1, Zombie **zombie2)
{
	std::cout << "Survivalist came\n";
	delete *zombie1;
	delete *zombie2;
	*zombie1 = nullptr;
	*zombie2 = nullptr;
}

void	there_is_zombie(Zombie *zombie1, Zombie *zombie2)
{
	if (zombie2 == nullptr && zombie1 == nullptr)
		std::cout << "There is not zombies\n";
}

int		main()
{
	ZombieEvent zombie_event = ZombieEvent();
	Zombie *zombie_weak = zombie_event.newZombie("Weak zombie");
	zombie_weak->announce();

	zombie_event.setZombieType("strong");
	Zombie *zombie_strong = zombie_event.newZombie("Strong zombie");
	zombie_strong->announce();

	survivalist_came(&zombie_weak, &zombie_strong);
	there_is_zombie(zombie_weak, zombie_strong);

	zombie_event.setZombieType("medium");
	Zombie zombie_medium1 = zombie_event.randomChump();
	Zombie zombie_medium2 = zombie_event.randomChump();
	Zombie zombie_medium3 = zombie_event.randomChump();



	return (0);
}
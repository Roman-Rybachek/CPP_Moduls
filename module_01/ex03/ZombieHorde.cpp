/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 00:11:54 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/25 10:22:16 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

char	*random_name(int r)
{
	char	*name = new char[7];
	int		tmp;
	time_t	curr_time;

	srand((time(0)));
	curr_time = time(NULL);
	for (int i = 0; i < 6; i++)
	{
		tmp = (rand() + curr_time / 100000 + (r * r - r) + r) % 100;
		if (tmp < 65)
			tmp = 65 + i + r;
		else if (tmp > 90 && tmp < 97)
			tmp = 90;
		else if (tmp > 122)
			tmp = 122 - r - i;
		if (i != 0)
			tmp = std::tolower(tmp);
		name[i] = tmp;
	}
	name[6] = '\0';
	return (name);
}

ZombieHorde::ZombieHorde(int n)
{
	count = n;
	horde = Zombie[n];

	for(int i = 0; i < n; i++)
	{
		char *tmp = random_name(i);
		horde[i].change_name(tmp);
		delete tmp;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] horde;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < count; i++)
		horde[i].announce();
}


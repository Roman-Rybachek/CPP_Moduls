/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 21:03:03 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/23 23:40:31 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string type;
	public:
		void		setZombieType(std::string type);
		Zombie		*newZombie(std::string name);
		Zombie		randomChump();
					ZombieEvent();
					~ZombieEvent();
};

#endif
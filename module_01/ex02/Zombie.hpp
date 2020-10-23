/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 20:49:07 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/23 22:50:17 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string type;
		std::string name;
	public:
		void		announce();
		Zombie(std::string set_name, std::string set_type);
		~Zombie();
		void		change_name(std::string set_name);
};

#endif
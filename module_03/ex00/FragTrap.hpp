/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:34:21 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/28 00:51:00 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>

class FragTrap
{
	private:
		int				hit_points;
		int				max_hit_points;
		int				energy_points;
		int				max_energy_points;
		int				level;
		std::string		name;
		int				melee_attack_damage;
		int				range_attack_damage;
		int				armor_damage_reduction;
	public:
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beReapired(unsigned int amount);
		FragTrap();
		FragTrap(const FragTrap &copy);
		~FragTrap();
		FragTrap		&operator= (FragTrap const &any_value);

		int				setHitPoints();
};

#endif
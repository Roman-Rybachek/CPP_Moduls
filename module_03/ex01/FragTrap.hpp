/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:34:21 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/28 09:45:41 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

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
		int				random;
	public:
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beReapired(unsigned int amount);
		FragTrap();
		FragTrap(std::string set_name);
		FragTrap(const FragTrap &copy);
		~FragTrap();
		FragTrap		&operator= (FragTrap const &any_value);
		void			vaulthunter_dot_exe(std::string const & target);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:34:08 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/30 15:44:46 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <cstdlib>

ScavTrap::ScavTrap(std::string set_name) : ClapTrap(set_name)
{
	name = set_name;
	std::cout << YELLOW << set_name << " robot came to destroy you!\n" << RESET;
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 50;
	max_energy_points = 50;
	level = 1;
	melee_attack_damage = 20;
	range_attack_damage = 15;
	armor_damage_reduction = 3;

}

ScavTrap::ScavTrap() : ClapTrap()
{
	name = "Unnamed";
	std::cout << YELLOW << name << " robot came to destroy you!\n" << RESET;
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 50;
	max_energy_points = 50;
	level = 1;
	melee_attack_damage = 20;
	range_attack_damage = 15;
	armor_damage_reduction = 3;

}

ScavTrap::~ScavTrap() 
{
	std::cout << name << ": " << RED << "COME IN\n" << RESET;
} 

void			ScavTrap::challengeNewcome(std::string const & target)
{
	int	choice = 0;
	std::string pool[8];

	pool[0] = "original scavtrap text 1\n";
	pool[1] = "original scavtrap text 2\n";
	pool[2] = "original scavtrap text 3\n";
	pool[3] = "original scavtrap text 4\n";
	pool[4] = "original scavtrap text 5\n";
	pool[5] = "original scavtrap text 6\n";
	pool[6] = "original scavtrap text 7\n";
	if (energy_points >= 25)
		energy_points -= 25;
	else
	{
		std::cout << "Too few energy points\n";
		return ;
	}
	srand(time(0) + random++);
	choice = abs(rand() % 7);
	if (choice > 6)
		choice = 6;
	if (choice < 0)
		choice = 0;
	std::cout << pool[choice];
	std::cout << target << " too weak.\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	hit_points = copy.hit_points;
	max_hit_points = copy.max_hit_points;
	energy_points = copy.energy_points;
	max_hit_points = copy.max_hit_points;
	level = copy.level;
	name = copy.name;
	melee_attack_damage = copy.melee_attack_damage;
	range_attack_damage = copy.range_attack_damage;
	armor_damage_reduction = copy.armor_damage_reduction;
	random = 1;
}

ScavTrap		&ScavTrap::operator= (ScavTrap const &any_value)
{
	hit_points = any_value.hit_points;
	max_hit_points = any_value.max_hit_points;
	energy_points = any_value.energy_points;
	max_hit_points = any_value.max_hit_points;
	level = any_value.level;
	name = any_value.name;
	melee_attack_damage = any_value.melee_attack_damage;
	range_attack_damage = any_value.range_attack_damage;
	armor_damage_reduction = any_value.armor_damage_reduction;
	return (*this);
}
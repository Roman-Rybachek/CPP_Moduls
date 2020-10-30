/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:59:37 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/30 20:59:10 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string set_name) : ClapTrap(set_name), FragTrap(set_name), NinjaTrap(set_name)
{
	name = set_name;
	std::cout << YELLOW << set_name << " has been spawned\n" << RESET;
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 50;
	max_energy_points = 50;
	level = 1;
	melee_attack_damage = 20;
	range_attack_damage = 15;
	armor_damage_reduction = 3;
}

SuperTrap::~SuperTrap()
{
	std::cout << name << " has beed deleted\n";
}

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
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

SuperTrap::SuperTrap(const SuperTrap &copy)
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

SuperTrap		&SuperTrap::operator= (SuperTrap const &any_value)
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


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 14:54:34 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/30 20:32:00 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	hit_points = 60;
	max_hit_points = 60;
	energy_points = 120;
	max_energy_points = 120;
	level = 1;
	name = "Unnamed";
	melee_attack_damage = 60;
	range_attack_damage = 5;
	armor_damage_reduction = 0;
	random = 1;

	std::cout << YELLOW << name << " master of ninjutsu here!\n" << RESET;
}
NinjaTrap::NinjaTrap(std::string set_name) : ClapTrap(set_name)
{
	hit_points = 60;
	max_hit_points = 60;
	energy_points = 120;
	max_energy_points = 120;
	level = 1;
	name = set_name;
	melee_attack_damage = 60;
	range_attack_damage = 5;
	armor_damage_reduction = 0;
	random = 1;
	std::cout << YELLOW << set_name << " master of ninjutsu here!\n" << RESET;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << name << ": " << RED << "NOOOO, I AM TOO WEAK!\n" << RESET;
}

void		NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << name << ": Mega shuriken!\n";
	target.takeDamage(40);
}

void		NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << name << ": Rasengun!\n";
	target.takeDamage(50);
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << name << ": Chidori\n";
	target.takeDamage(60);
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy)
{
	hit_points = copy.hit_points;
	max_hit_points = copy.max_hit_points;
	energy_points = copy.energy_points;
	max_energy_points = copy.max_hit_points;
	level = copy.level;
	name = copy.name;
	melee_attack_damage = copy.melee_attack_damage;
	range_attack_damage = copy.range_attack_damage;
	armor_damage_reduction = copy.armor_damage_reduction;
	random = 1;
}

NinjaTrap	&NinjaTrap::operator= (NinjaTrap const &any_value)
{
	hit_points = any_value.hit_points;
	max_hit_points = any_value.max_hit_points;
	energy_points = any_value.energy_points;
	max_energy_points = any_value.max_hit_points;
	level = any_value.level;
	name = any_value.name;
	melee_attack_damage = any_value.melee_attack_damage;
	range_attack_damage = any_value.range_attack_damage;
	armor_damage_reduction = any_value.armor_damage_reduction;
	return (*this);
}
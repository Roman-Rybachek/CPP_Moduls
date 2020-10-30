/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:34:08 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/30 21:06:26 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cstdlib>

ClapTrap::ClapTrap(std::string set_name)
{
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_hit_points = 100;
	level = 1;
	name = set_name;
	melee_attack_damage = 50;
	range_attack_damage = 40;
	armor_damage_reduction = 20;
	std::cout << YELLOW << name << " object has been spawned.\n" << RESET;
	random = 1;
}

ClapTrap::ClapTrap()
{
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_hit_points = 100;
	level = 1;
	name = "Unnamed";
	melee_attack_damage = 30;
	range_attack_damage = 15;
	armor_damage_reduction = 20;
	std::cout << YELLOW << "Unnamed object has been spawned.\n" << RESET;
	random = 1;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
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

void		ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << name << " attacks " << target << \
			" at range, causing " << range_attack_damage << " points of damage!\n";
}

void		ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << name << " attacks " << target << \
			" at melee, causing " << melee_attack_damage << " points of damage!\n";
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << amount << RED << " DAMAGE for " << RESET << name << "\n";
	if ((unsigned int)armor_damage_reduction < amount)
	{
		std::cout << armor_damage_reduction << CYAN \
					<< " damage blocked.\n" << RESET;
		amount -= armor_damage_reduction;
		energy_points += armor_damage_reduction;
		std::cout << "Piece of damage transform to energy!\n";
		if (energy_points > max_energy_points)
			energy_points = max_energy_points;
	}
	else
	{
		std::cout << CYAN << "All damage blocked!\n" << RESET;
		return ;
	}
	hit_points -= amount;
	if (hit_points < 0)
	{
		hit_points = 0;
		std::cout << RED << name << "have no hit points\n" << RESET;
	}
}

void		ClapTrap::beReapired(unsigned int amount)
{
	if (hit_points != max_hit_points)
		std::cout << CYAN << "bzzz... *repair*\n" << RESET;
	else
		return ;
	if (hit_points + (int)amount >= max_hit_points)
	{
		std::cout << CYAN << "Health is full!\n" << RESET;
		hit_points = max_hit_points;
	}
	else
	{
		hit_points += amount;
		std::cout << CYAN << "Now, hit points value is " \
							<< hit_points << "\n" << RESET;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << name << ": " << RED << "object deleted\n" << RESET;
}

ClapTrap	&ClapTrap::operator= (ClapTrap const &any_value)
{
	std::cout << YELLOW << name << " is equal to " \
					<< YELLOW << any_value.name << "\n" << RESET;
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

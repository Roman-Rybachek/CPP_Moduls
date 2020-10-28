/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:34:08 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/28 10:24:08 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cstdlib>

FragTrap::FragTrap(std::string set_name)
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
	std::cout << YELLOW << set_name << " robot came to destroy you!\n" << RESET;
	random = 1;
}

FragTrap::FragTrap()
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
	std::cout << YELLOW << "Unnamed robot came to destroy you!\n" << RESET;
	random = 1;
}

FragTrap::FragTrap(const FragTrap &copy)
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

void		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << name << " attacks " << target << \
			" at range, causing " << range_attack_damage << " points of damage!\n";
}

void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << name << " attacks " << target << \
			" at melee, causing " << melee_attack_damage << " points of damage!\n";
}

void		FragTrap::takeDamage(unsigned int amount)
{
	std::cout << RED << "That is it?! IT IS " RESET << amount \
							<< RED << " DAMAGE for " << RESET << name << "\n";
	if ((unsigned int)armor_damage_reduction < amount)
	{
		std::cout << amount - armor_damage_reduction << CYAN \
					<< " damage blocked. Not bad.\n" << RESET;
		amount -= armor_damage_reduction;
		energy_points += armor_damage_reduction;
		std::cout << "Piece of damage transform to energy!\n";
		if (energy_points > max_energy_points)
			energy_points = max_energy_points;
	}
	else
	{
		std::cout << CYAN << "All damage blocked! OH YEAH!\n" << RESET;
		return ;
	}
	hit_points -= amount;
	if (hit_points < 0)
	{
		hit_points = 0;
		std::cout << RED << name << " is dead, he looser\n" << RESET;
	}
}

void		FragTrap::beReapired(unsigned int amount)
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

FragTrap::~FragTrap()
{
	std::cout << name << ": " << RED << "I'LL BE BACK\n" << RESET;
}

FragTrap		&FragTrap::operator= (FragTrap const &any_value)
{
	std::cout << YELLOW << name << " sell his soul to " \
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


void			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int	choice = 0;
	std::string pool[8];

	pool[0] = "Dattebayo :O\n";
	pool[1] = "You Shall Not Pass!\n";
	pool[2] = "Hasta la vista, baby.\n";
	pool[3] = "I need your clothes, your boots and your motorcycle.\n";
	pool[4] = "Does it hurt when you get shot?\n";
	pool[5] = "No pain - no game.\n";
	pool[6] = "I love the smell of napalm in the morning.\n";
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
	std::cout << target << " has known pain.\n";
}
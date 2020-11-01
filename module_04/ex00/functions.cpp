/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 10:49:11 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 10:58:33 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

static int				random_value()
{
	int	r;

	srand(time(0));
	r = rand() % 10;
	return (r);
}

std::string		random_victim_name()
{
	std::string pool[10];

	pool[0] = "Bob";
	pool[1] = "Jack";
	pool[2] = "Sam";
	pool[3] = "Stive";
	pool[4] = "Arnold";
	pool[5] = "James";
	pool[6] = "Eric";
	pool[6] = "Donald";
	pool[7] = "Henry";
	pool[8] = "Adolf";
	pool[9] = "Mike";

	return(pool[random_value()]);
}

std::string		random_sorcerer_name()
{
	std::string pool[10];

	pool[0] = "Gendalf";
	pool[1] = "Cornelious";
	pool[2] = "Glenmor";
	pool[3] = "Gerpo";
	pool[4] = "Andros";
	pool[5] = "Urik";
	pool[6] = "Adelbert";
	pool[6] = "Adelbert";
	pool[7] = "Merlin";
	pool[8] = "Garry";
	pool[9] = "Gaspar";

	return(pool[random_value()]);
}

std::string		random_title()
{
	std::string pool[10];

	pool[0] = "Lord";
	pool[1] = "Learner";
	pool[2] = "Dishonored";
	pool[3] = "Wise";
	pool[4] = "Master";
	pool[5] = "Archimag";
	pool[6] = "Magistr";
	pool[6] = "Neofit";
	pool[7] = "Great Archimag";
	pool[8] = "Beginner";
	pool[9] = "Dark";

	return(pool[random_value()]);
}
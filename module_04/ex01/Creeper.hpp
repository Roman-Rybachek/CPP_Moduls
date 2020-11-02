/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Creeper.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:05:37 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/02 16:05:38 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CREEPER_HPP
#define CREEPER_HPP
#include <iostream>
#include "Enemy.hpp"

class Creeper : public Enemy
{
	public:
		// Cuplien
		Creeper();
		Creeper(Creeper const &copy);
		virtual ~Creeper();
		Creeper		&operator=(Creeper const &any);
		// Methods
		void		takeDamage(int);
};

#endif
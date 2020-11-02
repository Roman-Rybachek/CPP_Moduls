/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:05:37 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/02 16:05:38 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		// Cuplien
		SuperMutant();
		SuperMutant(SuperMutant const &copy);
		virtual ~SuperMutant();
		SuperMutant		&operator=(SuperMutant const &any);
		// Methods
		void		takeDamage(int);
};

#endif
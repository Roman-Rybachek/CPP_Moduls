/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:58:32 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 23:57:26 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include <iostream>

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
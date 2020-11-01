/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:42:01 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 22:40:44 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		// Cuplien
		PowerFist();
		PowerFist(PowerFist const &copy);
		virtual ~PowerFist();
		PowerFist		&operator=(PowerFist const &copy);
		// Methods
		void			attack() const;

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:42:01 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 22:36:49 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		// Cuplien
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &copy);
		virtual ~PlasmaRifle();
		PlasmaRifle		&operator=(PlasmaRifle const &copy);
		// Methods
		void			attack() const;

};

#endif
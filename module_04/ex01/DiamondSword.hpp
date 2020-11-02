/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondSword.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:42:01 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 22:40:44 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDSWORD_HPP
#define DIAMONDSWORD_HPP

#include "AWeapon.hpp"

class DiamondSword : public AWeapon
{
	public:
		// Cuplien
		DiamondSword();
		DiamondSword(DiamondSword const &copy);
		virtual ~DiamondSword();
		DiamondSword		&operator=(DiamondSword const &copy);
		// Methods
		void			attack() const;

};

#endif
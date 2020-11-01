/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:58:32 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 23:57:26 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>

class Enemy
{
	protected:
		std::string		m_type;
		int				m_hp;
	public:
		// Cuplien
		Enemy();
		Enemy(Enemy const &copy);
		Enemy(int hp, std::string const &type);
		virtual ~Enemy();
		Enemy		&operator=(Enemy const &any);
		// Methods
		std::string	const	getType() const;
		int					getHP() const;
		virtual void		takeDamage(int);
};

#endif
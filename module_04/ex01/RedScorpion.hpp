/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RedScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:05:37 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/02 16:25:08 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef REDSCORPION_HPP
#define REDSCORPION_HPP
#include <iostream>
#include "Enemy.hpp"

class RedScorpion : public Enemy
{
	public:
		// Cuplien
		RedScorpion();
		RedScorpion(RedScorpion const &copy);
		virtual ~RedScorpion();
		RedScorpion		&operator=(RedScorpion const &any);
		// Methods
};

#endif
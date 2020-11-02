/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RedScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:05:57 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/02 16:28:32 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RedScorpion.hpp"

// Cuplien

RedScorpion::RedScorpion() : Enemy(80, "RedScorpion")
{std::cout << "* click click click *\n";}

RedScorpion::RedScorpion(RedScorpion const &copy) : Enemy(copy.m_hp, copy.m_type)
{std::cout << "* click click click *\n";}

RedScorpion::~RedScorpion()
{std::cout << "* SPROTCH *\n";}

RedScorpion				&RedScorpion::operator=(RedScorpion const &any)
{m_hp = any.m_hp; m_type = any.m_type; return (*this);}

// Methods


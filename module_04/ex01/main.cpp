/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 22:17:31 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/31 22:56:25 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int		main()
{
	AWeapon *a = new PlasmaRifle();
	AWeapon *b = new PowerFist();
	a->attack();
	b->attack();
	delete b;
	delete a;
	return (0);
}
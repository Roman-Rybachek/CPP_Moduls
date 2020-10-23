/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 02:23:37 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/24 02:50:40 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int		main()
{
	Human	bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}

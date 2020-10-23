/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 01:29:07 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/24 01:48:16 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *p = &str;
	std::string &ref = str;
	std::cout << "Base string: " << str << std::endl;
	std::cout << "Pointer: " << *p << std::endl;
	std::cout << "Reference: " << ref << std::endl;
	return (0);
}
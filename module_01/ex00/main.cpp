/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 08:08:13 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/23 20:29:45 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void		ponyOnTheHeap()
{
	Pony	*pony = new Pony("First", 4, 1, 1, 2);
	pony->run();
	std::cout << "Some times later...\n";
	delete pony;
}

void		ponyOnTheStack()
{
	Pony	pony = Pony("Second", 4, 1, 1, 2);
	pony.run();
	std::cout << "Some times later...\n";
}

int		main()
{
	ponyOnTheHeap();
	std::cout << "---\n";
	ponyOnTheStack();
	return (0);
}
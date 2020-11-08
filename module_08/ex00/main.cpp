/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:18:49 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/07 20:36:50 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <deque>
#include <set>
#include <iostream>
#include <algorithm>
#include "easyfind.hpp"


int		main()
{
	std::cout << "----Vector----\n";
	std::vector<int> v;
	for (int i = 0; i < 5; i++)
		v.push_back(i);
	easyfind(v, 3);
	easyfind(v, 10);

	std::cout << "----List----\n";
	std::list<int> l;
	for (int i = 0; i < 5; i++)
		l.push_back(i);
	easyfind(l, 3);
	easyfind(l, 10);

	std::cout << "----Deque----\n";
	std::deque<int> d;
	for (int i = 0; i < 5; i++)
		d.push_back(i);
	easyfind(d, 3);
	easyfind(d, 10);

	std::cout << "----Set----\n";
	std::set<int> s;
	for (int i = 0; i < 5; i++)
		s.insert(i);
	easyfind(s, 3);
	easyfind(s, 10);

	return (0);
}
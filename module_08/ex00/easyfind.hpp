/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:01:11 by jeldora           #+#    #+#             */
/*   Updated: 2020/11/07 20:15:29 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>

template <typename T>
bool	easyfind(T &data, int value)
{
	typename T::iterator it;
	it = std::find(data.begin(), data.end(), value);
	if (it == data.end())
	{
		std::cout << "Not found\n";
		return (false);
	}
	std::cout << "Found\n";
	return (true);
}
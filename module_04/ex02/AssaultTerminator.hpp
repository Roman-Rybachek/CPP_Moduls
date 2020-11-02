/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theuser <theuser@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 00:15:42 by theuser           #+#    #+#             */
/*   Updated: 2020/11/03 00:15:42 by theuser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include <iostream>

class AssaultTerminator
{
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &copy);
	~AssaultTerminator();
	AssaultTerminator &operator=(const AssaultTerminator &copy);

private:
};

#endif

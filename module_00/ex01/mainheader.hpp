/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainheader.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 21:41:16 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/23 05:16:00 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>
#include <cstdlib>

Contact	filling();
void	add(Contact *list);
void	search(Contact *list);
void	search_details(Contact *list);
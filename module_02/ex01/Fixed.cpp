/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 00:59:59 by jeldora           #+#    #+#             */
/*   Updated: 2020/10/27 06:19:20 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <tgmath.h>

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &any_value)
{
	std::cout << "Copy constructor called" << std::endl;
	value = any_value.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator= (Fixed const &any_value)
{
	std::cout << "Assignation operator called" << std::endl;
	value = any_value.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

Fixed::Fixed(int const set_value)
{
	value = set_value * 256;
	//std::cout << set_value << " " << value << "\n";
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const set_value)
{
	value = int(roundf(set_value * 256));
	//std::cout << set_value << " " << this->toFloat() << "\n";
	std::cout << "Float constructor called" << std::endl;
}

float	Fixed::toFloat() const
{
	return (float(value) / 256);
}

int		Fixed::toInt() const
{
	return (value >> fractional);
}

std::ostream 	&operator<< (std::ostream &os, Fixed const &print_value)
{
	os << print_value.toFloat();
	return (os);
}
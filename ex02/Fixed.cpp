/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:02:16 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/18 13:57:40 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
}

Fixed::Fixed(Fixed const &toCopy)
{
	*this = toCopy;
}

Fixed::Fixed(const int value)
{
	_value = value << bits;
}

Fixed::Fixed(const float value)
{
	_value = roundf((double)value * (double)(1 << bits));
}

Fixed::~Fixed(void)
{
}

void Fixed::setRawBits(const int raw)
{
	_value = raw;
}

int Fixed::getRawBits(void) const
{
	return (_value);	
}

int	Fixed::toInt(void) const
{
	return (_value >> bits);
}

float Fixed::toFloat(void) const
{
	return ((float)(_value / (float)(1 << bits)));
}

Fixed&	Fixed::min(Fixed &fixedA, Fixed &fixedB)
{
	if (fixedA <= fixedB)
		return(fixedA);
	return (fixedB);
}

const Fixed&	Fixed::min(Fixed const &fixedA, const Fixed &fixedB)
{
	if (fixedA.getRawBits() <= fixedB.getRawBits())
		return(fixedA);
	return (fixedB);
}

Fixed&	Fixed::max(Fixed &fixedA, Fixed &fixedB)
{
	if (fixedA >= fixedB)
		return(fixedA);
	return (fixedB);
}

const Fixed&	Fixed::max(Fixed const &fixedA, const Fixed &fixedB)
{
	if (fixedA.getRawBits() >= fixedB.getRawBits())
		return(fixedA);
	return (fixedB);
}

Fixed& Fixed::operator = (Fixed const &toCopy)
{
	_value = toCopy.getRawBits();
	return (*this);
}

Fixed Fixed::operator + (Fixed const &toCopy)
{
	return (this->toFloat() + toCopy.toFloat());
}

Fixed Fixed::operator - (Fixed const &toCopy)
{
	return (this->toFloat() - toCopy.toFloat());
}

Fixed Fixed::operator / (Fixed const &toCopy)
{
	return (this->toFloat() / toCopy.toFloat());
}

Fixed Fixed::operator * (Fixed const &toCopy)
{
	return (this->toFloat() * toCopy.toFloat());
}

bool	Fixed::operator > (Fixed const &toCompare)
{
	return (getRawBits() > toCompare.getRawBits());
}

bool	Fixed::operator < (Fixed const &toCompare)
{
	return (getRawBits() < toCompare.getRawBits());
}

bool	Fixed::operator >= (Fixed const &toCompare)
{
	return (getRawBits() >= toCompare.getRawBits());
}

bool	Fixed::operator <= (Fixed const &toCompare)
{
	return (getRawBits() <= toCompare.getRawBits());
}

bool	Fixed::operator == (Fixed const &toCompare)
{
	return (getRawBits() == toCompare.getRawBits());
}

bool	Fixed::operator != (Fixed const &toCompare)
{
	return (getRawBits() != toCompare.getRawBits());
}

std::ostream &operator << (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
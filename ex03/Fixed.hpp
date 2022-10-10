/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:02:07 by aparolar          #+#    #+#             */
/*   Updated: 2022/10/09 12:07:40 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	_value;
		int static const bits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &tocpy);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed(void);

		Fixed&	operator = (Fixed const &toCopy);
		Fixed	operator + (Fixed const &toCopy);
		Fixed	operator - (Fixed const &toCopy);
		Fixed	operator / (Fixed const &toCopy);
		Fixed	operator * (Fixed const &toCopy);
		bool	operator > (Fixed const &toCompare);
		bool	operator < (Fixed const &toCompare);
		bool	operator >= (Fixed const &toCompare);
		bool	operator <= (Fixed const &toCompare);
		bool	operator == (Fixed const &toCompare);
		bool	operator != (Fixed const &toCompare);
		Fixed&	operator ++ ();
		Fixed&	operator -- ();
		Fixed	operator ++ (int);
		Fixed	operator -- (int);

		void	setRawBits(const int raw);
		int		getRawBits(void) const;
		int		toInt(void) const;
		float	toFloat(void) const;

		static Fixed&	min(Fixed &fixedA, Fixed &fixedB);
		static const Fixed&	min(Fixed const &fixedA, Fixed const &fixedB);
		static Fixed&	max(Fixed &fixedA, Fixed &fixedB);
		static const Fixed&	max(Fixed const &fixedA, Fixed const &fixedB);
};

std::ostream	&operator << (std::ostream &out, const Fixed &fixed);

#endif

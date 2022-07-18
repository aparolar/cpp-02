/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:02:07 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/18 12:03:24 by aparolar         ###   ########.fr       */
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

		void	setRawBits(const int raw);
		int		getRawBits(void) const;
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream	&operator << (std::ostream &out, const Fixed &fixed);

#endif

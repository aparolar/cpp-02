/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparolar <aparolar@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:02:07 by aparolar          #+#    #+#             */
/*   Updated: 2022/07/18 10:35:25 by aparolar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int	value;
		int static const bits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &tocpy);
		~Fixed(void);

		Fixed&	operator = (Fixed const &toCopy);

		void	setRawBits(int const raw);
		int		getRawBits(void) const;
};

#endif

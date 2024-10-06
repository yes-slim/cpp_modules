/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 23:58:19 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/07 00:12:29 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int	fixed_num;
		static const int	frac_num = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed &obj);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed(const int num);
		Fixed(const float num);
		float	toFloat(void) const;
		int	toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif
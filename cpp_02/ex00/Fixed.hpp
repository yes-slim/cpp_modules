/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 23:56:01 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/07 00:34:50 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {
	private:
		int	fixed_num;
		static const int	frac_num = 8;
		
	public:
		Fixed();
		Fixed(Fixed& obj);
		Fixed	&operator=(Fixed& obj);
		~Fixed();
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
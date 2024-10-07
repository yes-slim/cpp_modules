/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 00:27:18 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/08 00:31:40 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <istream>

class	Animal {
	protected:
		std::string	type;
	
	public:
		Animal();
		Animal(Animal &obj);
		Animal &operator=(Animal &obj);
		~Animal();

		const std::string()
		void	setType(std::string type);
};

#endif
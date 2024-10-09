/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 00:27:18 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/09 20:28:04 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class	AAnimal {
	protected:
		std::string	type;
	
	public:
		AAnimal();
		AAnimal(const AAnimal &obj);
		AAnimal &operator=(const AAnimal &obj);
		virtual ~AAnimal();

		AAnimal(std::string _type);
		
		virtual void	makeSound() const = 0;
		virtual std::string getType() const;
};

#endif
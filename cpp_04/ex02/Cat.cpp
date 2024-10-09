/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:43:25 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/09 20:27:06 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : AAnimal("Cat"){
	std::cout << "Constructor for " << this->type << " is called" << std::endl;
	this->brain = new Brain();
};

Cat::Cat(const Cat &obj) {
	std::cout << "Copy constructor for " << this->type << " is called" << std::endl;
	*this = obj;
};

Cat &Cat::operator=(const Cat &obj) {
	std::cout << "Copy assignement operator for " << this->type << " is called" << std::endl;		
	if (this != &obj)
	{
		this->type = obj.type;
		this->brain = new Brain(*obj.brain);
	}
	return *this;
};

Cat::~Cat() {
	std::cout << "Destructor for " << this->type << " is called" << std::endl;
	delete this->brain;
};

void	Cat::makeSound() const {
	std::cout << "meow meow" << std::endl;
};

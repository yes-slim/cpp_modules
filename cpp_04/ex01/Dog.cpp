/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:46:16 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/09 22:12:41 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "~dog~ Constructor for " << this->type << " is called" << std::endl;
	this->brain = new Brain();
};

Dog::Dog(const Dog &obj) {
	std::cout << "~dog~ Copy constructor for " << this->type << " is called" << std::endl;
	*this = obj;
};

Dog &Dog::operator=(const Dog &obj) {
	std::cout << "~dog~ Copy assignement operator for " << this->type << " is called" << std::endl;		
	if (this != &obj) {
		this->type = obj.type;
		this->brain = new Brain(*obj.brain);
	}
	return *this;
};

Dog::~Dog() {
	std::cout << "~dog~ Destructor for " << this->type << " is called" << std::endl;
	delete this->brain;
};

void	Dog::makeSound() const {
	std::cout << "woof woof" << std::endl;
};

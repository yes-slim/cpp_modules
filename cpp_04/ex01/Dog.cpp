/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:46:16 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/09 20:59:49 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Constructor for " << this->type << " is called" << std::endl;
	this->brain = new Brain();
};

Dog::Dog(const Dog &obj) {
	std::cout << "Copy constructor for " << this->type << " is called" << std::endl;
	*this = obj;
};

Dog &Dog::operator=(const Dog &obj) {
	std::cout << "Copy assignement operator for " << this->type << " is called" << std::endl;		
	if (this != &obj) {
		this->type = obj.type;
		this->brain = new Brain(*obj.brain);
	}
	return *this;
};

Dog::~Dog() {
	std::cout << "Destructor for " << this->type << " is called" << std::endl;
	delete this->brain;
};

void	Dog::makeSound() const {
	std::cout << "woof woof" << std::endl;
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:46:16 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/09 21:51:28 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() , type("Dog") {
	std::cout << "Constructor for " << this->type << " is called" << std::endl;
};

Dog::Dog(const Dog &obj) {
	std::cout << "Copy constructor for " << this->type << " is called" << std::endl;
	*this = obj;
};

Dog &Dog::operator=(const Dog &obj) {
	std::cout << "Copy assignement operator for " << this->type << " is called" << std::endl;		
	if (this != &obj)
		this->type = obj.type;
	return *this;
};

Dog::~Dog() {
	std::cout << "Destructor for " << this->type << " is called" << std::endl;
};

Dog::Dog(std::string _type) : Animal(_type) {
	std::cout << "Parametric consturcor for " << this->type << " is called" << std::endl;
};

void	Dog::makeSound() const {
	std::cout << "woof woof" << std::endl;
};

std::string	Dog::getType() const {
	return this->type;
};
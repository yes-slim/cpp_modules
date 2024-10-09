/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:25:41 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/09 21:46:51 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Constructor for " << this->type << " is called" << std::endl;
};

Animal::Animal(const Animal &obj) {
	std::cout << "Copy constructor for " << this->type << " is called" << std::endl;
	*this = obj;
};

Animal &Animal::operator=(const Animal &obj) {
	std::cout << "Copy assignement operator for " << this->type << " is called" << std::endl;		
	if (this != &obj)
		this->type = obj.type;
	return *this;
};

Animal::~Animal() {
	std::cout << "Destructor for " << this->type << " is called" << std::endl;
};


Animal::Animal(std::string _type) : type(_type) {
	std::cout << "Parametric consturcor for " << this->type << " is called" << std::endl;
};

void	Animal::makeSound() const {
	std::cout << "Random animal sound" << std::endl;
};

std::string	Animal::getType() const {
	return this->type;
};
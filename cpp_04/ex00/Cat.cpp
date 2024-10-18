/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:43:25 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/09 21:51:12 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() , type("Cat") {
	std::cout << "Constructor for " << this->type << " is called" << std::endl;
};

Cat::Cat(const Cat &obj) {
	std::cout << "Copy constructor for " << this->type << " is called" << std::endl;
	*this = obj;
};

Cat &Cat::operator=(const Cat &obj) {
	std::cout << "Copy assignement operator for " << this->type << " is called" << std::endl;		
	if (this != &obj)
		this->type = obj.type;
	return *this;
};

Cat::~Cat() {
	std::cout << "Destructor for " << this->type << " is called" << std::endl;
};

Cat::Cat(std::string _type) : Animal(_type) {
	std::cout << "Parametric consturcor for " << this->type << " is called" << std::endl;
};

void	Cat::makeSound() const {
	std::cout << "meow meow" << std::endl;
};

std::string	Cat::getType() const {
	return this->type;
};
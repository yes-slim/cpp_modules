/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:45:37 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/09 12:48:32 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal"){
	std::cout << "Constructor for " << this->type << " is called" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal &obj) {
	std::cout << "Copy constructor for " << this->type << " is called" << std::endl;
	*this = obj;
};

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj) {
	std::cout << "Copy assignement operator for " << this->type << " is called" << std::endl;		
	if (this != &obj)
		this->type = obj.type;
	return *this;
};

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor for " << this->type << " is called" << std::endl;
};


WrongAnimal::WrongAnimal(std::string _type) : type(_type) {
	std::cout << "Parametric consturcor for " << this->type << " is called" << std::endl;
};

void	WrongAnimal::makeSound() const {
	std::cout << "Random WrongAnimal sound" << std::endl;
};

std::string	WrongAnimal::getType() const {
	return this->type;
};
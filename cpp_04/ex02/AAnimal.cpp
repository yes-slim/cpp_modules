/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:25:41 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/09 20:23:44 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal"){
	std::cout << "Constructor for " << this->type << " is called" << std::endl;
};

AAnimal::AAnimal(const AAnimal &obj) {
	std::cout << "Copy constructor for " << this->type << " is called" << std::endl;
	*this = obj;
};

AAnimal &AAnimal::operator=(const AAnimal &obj) {
	std::cout << "Copy assignement operator for " << this->type << " is called" << std::endl;		
	if (this != &obj)
		this->type = obj.type;
	return *this;
};

AAnimal::~AAnimal() {
	std::cout << "Destructor for " << this->type << " is called" << std::endl;
};


AAnimal::AAnimal(std::string _type) : type(_type) {
	std::cout << "Parametric consturcor for " << this->type << " is called" << std::endl;
};

void	AAnimal::makeSound() const {
	std::cout << "Random Aanimal sound" << std::endl;
};

std::string	AAnimal::getType() const {
	return this->type;
};
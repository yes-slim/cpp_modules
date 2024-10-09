/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:25:41 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/09 22:12:58 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal"){
	std::cout << "~aanimal~ Constructor for " << this->type << " is called" << std::endl;
};

AAnimal::AAnimal(const AAnimal &obj) {
	std::cout << "~aanimal~ Copy constructor for " << this->type << " is called" << std::endl;
	*this = obj;
};

AAnimal &AAnimal::operator=(const AAnimal &obj) {
	std::cout << "~aanimal~ Copy assignement operator for " << this->type << " is called" << std::endl;		
	if (this != &obj)
		this->type = obj.type;
	return *this;
};

AAnimal::~AAnimal() {
	std::cout << "~aanimal~ Destructor for " << this->type << " is called" << std::endl;
};


AAnimal::AAnimal(std::string _type) : type(_type) {
	std::cout << "~aanimal~ Parametric consturcor for " << this->type << " is called" << std::endl;
};

void	AAnimal::makeSound() const {
	std::cout << "Random Aanimal sound" << std::endl;
};

std::string	AAnimal::getType() const {
	return this->type;
};
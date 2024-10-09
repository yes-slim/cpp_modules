/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:45:58 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/09 12:48:46 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "Constructor for " << this->type << " is called" << std::endl;
};

WrongCat::WrongCat(const WrongCat &obj) {
	std::cout << "Copy constructor for " << this->type << " is called" << std::endl;
	*this = obj;
};

WrongCat &WrongCat::operator=(const WrongCat &obj) {
	std::cout << "Copy assignement operator for " << this->type << " is called" << std::endl;		
	if (this != &obj)
		this->type = obj.type;
	return *this;
};

WrongCat::~WrongCat() {
	std::cout << "Destructor for " << this->type << " is called" << std::endl;
};

WrongCat::WrongCat(std::string _type) : WrongAnimal(_type) {
	std::cout << "Parametric consturcor for " << this->type << " is called" << std::endl;
};

void	WrongCat::makeSound() const {
	std::cout << "Wrong meow meow" << std::endl;
};

std::string	WrongCat::getType() const {
	return this->type;
};
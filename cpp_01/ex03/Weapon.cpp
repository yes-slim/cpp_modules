/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:07:47 by yes-slim          #+#    #+#             */
/*   Updated: 2024/09/30 19:08:36 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	this->type = type;
}

Weapon::~Weapon(){}

const std::string &Weapon::getType() const{
	return this->type;
}

void Weapon::setType(std::string type){
	this->type = type;
}
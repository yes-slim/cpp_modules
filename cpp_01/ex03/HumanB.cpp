/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:10:16 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/08 23:27:31 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name){}
HumanB::~HumanB(){}

void	HumanB::attack(){
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " doesn't have a weapon" << std::endl;
}

void	HumanB::Weapon(Weapon &weapon){
	this->weapon = &weapon;
}
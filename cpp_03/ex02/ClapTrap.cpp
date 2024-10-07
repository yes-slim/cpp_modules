/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 03:57:49 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/07 09:21:27 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hitpoints(10), energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitpoints(10), energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " is destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &obj) {
	std::cout << "Copy Assignement operator called" << std::endl;
	this->name = obj.name;
	this->hitpoints = obj.hitpoints;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (this->hitpoints) {
		if (this->energy_points) {
			this->energy_points--;
			std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->name << " is out of energy" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitpoints) {
		if (amount > this->hitpoints)
			this->hitpoints = 0;
		else
			this->hitpoints -= amount;
		std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->hitpoints) {
		if (this->energy_points)
			this->energy_points--;
		else
			std::cout << "ClapTrap " << this->name << " is out of energy" << std::endl;
		this->hitpoints += amount;
		std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
}

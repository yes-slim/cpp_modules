/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:03:50 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/07 20:26:00 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap is created" << std::endl;
	hitpoints = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(std::string nm) : ClapTrap() {
	std::cout << "ScavTrap " << nm << " is created" << std::endl;
	name = nm;
	hitpoints = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " is destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &obj) {
	std::cout << "Copy Assignement operator called" << std::endl;
	this->name = obj.name;
	this->hitpoints = obj.hitpoints;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;
	return (*this);
}

void	ScavTrap::attack(const std::string &target){
	if (this->hitpoints) {
	if (this->energy_points) {
		this->energy_points--;
		std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " is out of energy" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " is dead" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " have enterred in Gate keeper mode" << std::endl;
}
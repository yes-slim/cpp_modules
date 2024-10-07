/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:03:50 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/07 10:26:26 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap  is created" << std::endl;
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

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " have enterred in Gate keeper mode" << std::endl;
}
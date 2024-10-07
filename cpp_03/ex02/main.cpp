/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 04:16:38 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/07 10:49:30 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {

	FragTrap y("younes");
	
	y.attack("ffffff");
	y.highFivesGuys();
	y.takeDamage(99);
	y.beRepaired(10);
	y.takeDamage(12);
	y.takeDamage(1);
	return 0;
}
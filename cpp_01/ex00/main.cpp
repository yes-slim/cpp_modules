/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 08:30:09 by yes-slim          #+#    #+#             */
/*   Updated: 2024/09/30 12:10:49 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie st_zmobie("tim");
	st_zmobie.announce();
	std::cout << "------------------------------"  << std::endl;
	Zombie *zombie = newZombie("jim");
	zombie->announce();
	delete zombie;
	std::cout << "------------------------------"  << std::endl;
	randomChump("steeeeeve");
	std::cout << "------------------------------"  << std::endl;
	return 0;
}
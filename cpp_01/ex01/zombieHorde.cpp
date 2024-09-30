/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:18:33 by yes-slim          #+#    #+#             */
/*   Updated: 2024/09/30 13:18:34 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name){
	if (N <= 0){
		std::cout << "N must be bigger than 0 !!" << std::endl;
		return NULL;
	}
	Zombie *zombie = new Zombie[N];
	for (int i=0; i < N ; i++){
		zombie[i].names(name);	
	};
	return zombie;
};
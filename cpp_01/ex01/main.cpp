/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:15:19 by yes-slim          #+#    #+#             */
/*   Updated: 2024/09/30 13:29:26 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n=5;
	std::string name = "jeeff";
	Zombie *zombie = zombieHorde(n, name);
	for (int i=0; i<n; i++){
		zombie[i].announce();
	};
	delete[] zombie;
	return 0;
}
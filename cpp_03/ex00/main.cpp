/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 04:16:38 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/07 09:01:27 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap one("one");
	ClapTrap two("two");
	
	one.attack("two");
	two.takeDamage(7);
	one.attack("two");
	two.takeDamage(7);
	// two died
	two.attack("one");
	two.beRepaired(7);
	two.takeDamage(7);

	one.beRepaired(7);
	return 0;
}
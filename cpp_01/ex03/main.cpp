/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:01:34 by yes-slim          #+#    #+#             */
/*   Updated: 2024/09/30 19:47:34 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("ak47");
		
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("mo9la3");
		bob.attack();
	}
	{
		Weapon club = Weapon("granada");
		
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("3sayya");
		jim.attack();
	}
	return 0;
}
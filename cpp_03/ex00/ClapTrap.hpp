/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 03:51:11 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/07 20:15:36 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	private:
		std::string		name;
		unsigned int	hitpoints;
		unsigned int	energy_points;
		unsigned int	attack_damage;
	
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &obj);
		ClapTrap & operator=(const ClapTrap &obj);
		~ClapTrap();

		ClapTrap(std::string name);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
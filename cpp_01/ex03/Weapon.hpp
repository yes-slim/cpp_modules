/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:03:04 by yes-slim          #+#    #+#             */
/*   Updated: 2024/09/30 19:13:58 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>


class	Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string &getType() const;
		void setType(std::string type);
};

#endif
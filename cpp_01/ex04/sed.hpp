/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:19:31 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/01 10:53:14 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

class	sed{
	private:
	std::string	in;
	std::string	out;
	public:
		sed(std::string file);
		~sed();
		void	replace(std::string s1, std::string s2);
};

void	show_err(std::string err);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:19:25 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/01 11:02:06 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char **av){
	if (ac != 4){
		std::cout << "usage: ./sed filename s1 s2" << std::endl;
		return 1;
	}
	else{
		sed sed(av[1]);
		sed.replace(av[2], av[3]);
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:07:24 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/09 14:10:31 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>


class	Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(const Brain &obj);
		Brain & operator=(const Brain &obj);
		~Brain();
};

#endif
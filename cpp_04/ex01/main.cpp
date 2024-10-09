/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 00:25:25 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/09 14:46:07 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	// Animal* Animal_arr[] = {new Dog(), new Dog(), new Cat(), new Cat()};
	// for (int i = 0; i < 4; i++)
	// {
	// 	Animal_arr[i]->makeSound();
	// 	delete Animal_arr[i];
	// }
	
	// return 0;
}

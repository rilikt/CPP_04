/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:40:08 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/03 13:25:18 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Animal.hpp"

class Cat : public Animal
{
	private:

	public:
		Cat() : Animal() {Animal::type = "Cat"; };
		Cat(const Cat &other) : Animal(other) {};
		Cat& operator=(const Cat &other) {Animal::operator=(other); return *this;};

		void makeSound() const { std::cout << B << "Meow" << R << std::endl; };
};

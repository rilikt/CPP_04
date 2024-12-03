/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:50:17 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/03 15:52:18 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << G << "Dog constructor called" << R << std::endl;
	Animal::type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other) 
{
	std::cout << G << "Dog copy constructor called" << R << std::endl;

}

Dog::~Dog()
{
	std::cout << Ro << "Dog destructor called" << R << std::endl;
}

Dog& Dog::operator=(const Dog &other) 
{
	std::cout << G << "Dog assignment operator called" << R << std::endl;

	if (this == &other)
		return *this;

	Animal::operator=(other); 
	return *this;
}

void Dog::makeSound() const 
{ 
	std::cout << M << "Wuff" << R << std::endl; 
}
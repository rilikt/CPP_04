/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:41:31 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/03 13:44:07 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal(): type("<default>") 
{
	std::cout << G << "Animal constructor called" << R << std::endl;
}

Animal::~Animal()
{
	std::cout << Ro << "Animal destructor called" << R << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << G << "Animal copy constructor called" << R << std::endl;

	this->type = other.type;
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << G << "Animal assignment operator called" << R << std::endl;

	if (this == &other)
		return *this;
		
	this->type = other.type;

	return *this;
}

void Animal::makeSound() const
{
	std::cout << Y << "Default Animal noises" << R << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}
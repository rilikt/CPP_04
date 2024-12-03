/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:08:20 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/03 15:31:55 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("<default>") 
{
	std::cout << G << "WrongAnimal constructor called" << R << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << Ro << "WrongAnimal destructor called" << R << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << G << "WrongAnimal copy constructor called" << R << std::endl;

	this->type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << G << "WrongAnimal assignment operator called" << R << std::endl;

	if (this == &other)
		return *this;
		
	this->type = other.type;

	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << Y << "Default WrongAnimal noises" << R << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

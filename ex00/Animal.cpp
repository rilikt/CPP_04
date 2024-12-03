/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:41:31 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/03 13:22:37 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::~Animal()
{
	std::cout << Ro << "Destructor for Animal called" << R << std::endl;
}

Animal::Animal(const Animal &other)
{
	this->type = other.type;
}

Animal& Animal::operator=(const Animal &other)
{
	if (this == &other)
		return *this;
		
	this->type = other.type;

	return *this;
}

void Animal::makeSound() const
{
	std::cout << Y << "Default Animal noises" << R << std::endl;
}
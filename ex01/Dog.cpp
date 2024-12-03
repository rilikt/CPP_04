/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:50:17 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/03 17:27:53 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog() : Animal(), dog_brain(new Brain())
{
	std::cout << G << "Dog constructor called" << R << std::endl;
	Animal::type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other), dog_brain(new Brain())
{
	std::cout << G << "Dog copy constructor called" << R << std::endl;
	*this->dog_brain = *other.dog_brain;
}

Dog::~Dog()
{
	delete this->dog_brain;
	std::cout << Ro << "Dog destructor called" << R << std::endl;
}

Dog& Dog::operator=(const Dog &other) 
{
	std::cout << G << "Dog assignment operator called" << R << std::endl;

	if (this == &other)
		return *this;

	Animal::operator=(other); 
	*this->dog_brain = *other.dog_brain;
	return *this;
}

void Dog::makeSound() const 
{ 
	std::cout << B << "Wuff" << R << std::endl; 
}

void Dog::setIdea(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (this->dog_brain->getIdeas(i) != "")
			continue;
		else
		{
			this->dog_brain->setIdeas(idea, i);
			break;
		} 
	}
	return;
}

void Dog::think() const
{
	for (int i = 0; this->dog_brain->getIdeas(i) != ""; i++)
		std::cout << Y << this->type + " idea " << i + 1 << ": " << this->dog_brain->getIdeas(i) << R << std::endl;
}

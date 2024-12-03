/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:13:42 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/03 17:23:07 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat() : Animal(), cat_brain(new Brain())
{
	std::cout << G << "Cat constructor called" << R << std::endl;
	Animal::type = "Cat";
}

Cat::Cat(const Cat &other) : Animal(other), cat_brain(new Brain())
{
	std::cout << G << "Cat copy constructor called" << R << std::endl;
	*this->cat_brain = *other.cat_brain;
}

Cat::~Cat()
{
	delete this->cat_brain;
	std::cout << Ro << "Cat destructor called" << R << std::endl;
}

Cat& Cat::operator=(const Cat &other) 
{
	std::cout << G << "Cat assignment operator called" << R << std::endl;

	if (this == &other)
		return *this;

	Animal::operator=(other); 
	*this->cat_brain = *other.cat_brain;
	return *this;
}

void Cat::makeSound() const 
{ 
	std::cout << B << "Meow" << R << std::endl; 
}

void Cat::setIdea(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (this->cat_brain->getIdeas(i) != "")
			continue;
		else
		{
			this->cat_brain->setIdeas(idea, i);
			break;
		} 
	}
	return;
}

void Cat::think() const
{
	for (int i = 0; this->cat_brain->getIdeas(i) != ""; i++)
		std::cout << B << this->type + " idea " << i + 1 << ": " << this->cat_brain->getIdeas(i) << R << std::endl;
}

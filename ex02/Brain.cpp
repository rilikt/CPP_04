/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:04:26 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/03 16:23:20 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain.hpp"

Brain::Brain()
{
	std::cout << G << "Brain constructor called" << R << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << G << "Brain copy constructor called" << R << std::endl;

	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain &other)
{
	std::cout << G << "Brain assignment operator called" << R << std::endl;

	if (this == &other)
		return *this;
	
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];

	return *this;
}

Brain::~Brain()
{
	std::cout << Ro << "Brain destructor called" << R << std::endl;
}

std::string Brain::getIdeas(int index) const
{
	if (index < 0 || index >= 100)
	{
		std::cout << Ro << "Invalid index for Brain::getIdeas (the array is of size 100)" << std::endl;
		return (nullptr);
	}
	else
		return (this->ideas[index]);
}

void Brain::setIdeas(std::string idea, int index)
{
	if (index < 0 || index >= 100)
	{
		std::cout << Ro << "Invalid index for Brain::setIdeas (the array is of size 100)" << std::endl;
		return;
	}
	else
	{
		this->ideas[index] = idea;
		return;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:08:23 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/03 15:39:56 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << G << "WrongCat constructor called" << R << std::endl;
	WrongAnimal::type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) 
{
	std::cout << G << "WrongCat copy constructor called" << R << std::endl;

}

WrongCat::~WrongCat()
{
	std::cout << Ro << "WrongCat destructor called" << R << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other) 
{
	std::cout << G << "WrongCat assignment operator called" << R << std::endl;

	if (this == &other)
		return *this;

	WrongAnimal::operator=(other); 
	return *this;
}

void WrongCat::makeSound() const 
{ 
	std::cout << B << "Meow" << R << std::endl; 
}

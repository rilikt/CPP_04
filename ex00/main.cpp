/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:20:03 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/03 15:54:35 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./WrongCat.hpp"


int main(void)
{
	std::cout << Bg_G << Bl << "     Constructor     " << R << std::endl;
	
	const Animal *a = new Animal();
	const Animal *c = new Cat();
	const Animal *d = new Dog();


	const WrongAnimal *w = new WrongCat();

	std::cout << Bg_B << Bl << "     Tests     " << R << std::endl;
	
	a->makeSound();
	std::cout << a->getType() << std::endl;

	c->makeSound();
	std::cout << c->getType() << std::endl;

	d->makeSound();
	std::cout << d->getType() << std::endl;

	w->makeSound();
	std::cout << w->getType() << std::endl;

	std::cout << Bg_Ro << Bl << "     Destructor     " << R << std::endl;

	delete a;
	delete d;
	delete c;
	delete w;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:20:03 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/03 18:30:50 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./WrongCat.hpp"

int main(void)
{
	std::cout << Bg_G << Bl << "     Constructor     " << R << std::endl;
	
	Cat *c = new Cat();
	Cat *m = new Cat();

	Dog *d = new Dog();
	Dog *w = new Dog();

	std::cout << Bg_B << Bl << "     Tests     " << R << std::endl;
	
	for (int i = 0; i < 10; i++)
		c->setIdea("Fiish");
	c->think();
	*m = *c;
	m->setIdea("Yumm");
	m->think();
	Cat meow(*m);
	meow.think();
	c->think();

	for (int i = 0; i < 10; i++)
		d->setIdea("Boone");
	d->think();
	*w = *d;
	w->setIdea("Yumm");
	w->think();
	Dog dawg(*w);
	dawg.think();

	std::cout << Bg_Ro << Bl << "     Destructor     " << R << std::endl;

	std::cout << B << "Allocated Cats" << R << std::endl;
	delete c;
	delete m;

	std::cout << Y << "Allocated Dogs" << R << std::endl;
	delete d;
	delete w;

	std::cout << Bl << "Stack Animals" << R << std::endl;

}

// int main(void)
// {
// 	std::cout << Bg_G << Bl << "     Constructor     " << R << std::endl;
// 	int size = 10;
// 	Animal **a = new Animal*[size];

// 	for (int i = 0; i < size; i++)
// 	{
// 		if (i < size / 2)
// 			a[i] = new Cat();
// 		else
// 			a[i] = new Dog();
// 	}
// 	std::cout << Bg_Ro << Bl << "     Destructor     " << R << std::endl;

// 	for (int i = 0; i < size; i++)
// 		delete a[i];
// 	delete [] a;
// }
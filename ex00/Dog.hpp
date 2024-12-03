/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:50:21 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/03 15:50:44 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Animal.hpp"

class Dog : public Animal
{
	private:

	public:
		Dog();
		Dog(const Dog &other);
		Dog& operator=(const Dog &other);
		~Dog();

		void makeSound() const;
};

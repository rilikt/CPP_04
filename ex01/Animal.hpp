/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:28:43 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/03 16:05:50 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

// text color values
#define R "\033[0m"
#define Bl "\033[30m"
#define Ro "\033[31m"
#define G "\033[32m"
#define Y "\033[33m"
#define B "\033[34m"
#define M "\033[35m"

// text background color
#define Bg_Ro "\033[41m"
#define Bg_G "\033[42m"
#define Bg_Y "\033[43m"
#define Bg_B "\033[44m"

class Animal
{
	protected:
		std::string type;
	
	public:
		Animal();
		Animal(const Animal &other);
		Animal& operator=(const Animal &other);
		virtual ~Animal();

		virtual void makeSound(void) const;

		std::string getType(void) const;
};

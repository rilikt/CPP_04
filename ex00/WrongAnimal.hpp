/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:08:45 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/03 15:14:17 by timschmi         ###   ########.fr       */
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

// text background color
#define Bg_Ro "\033[41m"
#define Bg_G "\033[42m"
#define Bg_Y "\033[43m"
#define Bg_B "\033[44m"

class WrongAnimal
{
	protected:
		std::string type;
	
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal& operator=(const WrongAnimal &other);
		virtual ~WrongAnimal();

		void makeSound(void) const; //no virtual keyword for wrong animal

		std::string getType(void) const;
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-03 13:27:25 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-03 13:27:25 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//Default constructor
FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30){
	std::cout << YELLOW + name + " FragTrap unit is created" << RESET << std::endl;
}

//Copy constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	std::cout << YELLOW + getName() + " Fragtrap copy constructor called" << RESET << std::endl;
}

//Assignation operator
FragTrap&	FragTrap::operator=(const FragTrap& other){
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return *this;
}

//Destructor
FragTrap::~FragTrap(void){
	std::cout << RED + getName() + " ScavTrap unit is destroyed" << RESET << std::endl;
}
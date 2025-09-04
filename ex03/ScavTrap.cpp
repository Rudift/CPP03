/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-28 16:48:28 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-28 16:48:28 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//Default constructor
ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20){
	std::cout << YELLOW + name + " ScavTrap unit is created" << RESET << std::endl;
}

//Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
	std::cout << YELLOW + getName() + " ScavTrap copy constructor called" << RESET << std::endl;
}

//Assignation operator
ScavTrap&	ScavTrap::operator=(const ScavTrap& other){
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return *this;
}

//Destructor
ScavTrap::~ScavTrap(void){
	std::cout << RED + getName() + " ScavTrap unit is destroyed" << RESET << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << GREEN + getName() + " ScavTrap is now in Gate keeper mode" << RESET << std::endl;
}
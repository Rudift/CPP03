/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-04 10:10:29 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-04 10:10:29 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Default constructor
DiamondTrap::DiamondTrap(std::string name): ClapTrap( + "_clap_name"), {
	std::cout << YELLOW + name + " DiamondTrap unit is created" << RESET << std::endl;
}

//Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other){
	std::cout << YELLOW + getName() + " Fragtrap copy constructor called" << RESET << std::endl;
}

//Assignation operator
DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other){
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return *this;
}

//Destructor
DiamondTrap::~DiamondTrap(void){
	std::cout << RED + getName() + " DiamondTrap unit is destroyed" << RESET << std::endl;
}
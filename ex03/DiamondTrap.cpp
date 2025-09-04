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
DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"){
	std::cout << YELLOW + name + " DiamondTrap unit is created" << RESET << std::endl;
	this->_name = name;
	this->_hp = FragTrap::_initHP;
	this->_ep = ScavTrap::_initEP;
	this->_attack = ScavTrap::_initAtk;

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

void	whoAmI(){

}
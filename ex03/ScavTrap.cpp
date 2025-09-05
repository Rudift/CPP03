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
ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	this->_hp = _initHP;
	this->_ep = _initEP;
	this->_attack = _initAtk;
	std::cout << YELLOW + name + " ScavTrap unit is created" << RESET << std::endl;
}

//Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
	std::cout << YELLOW + _name + " ScavTrap copy constructor called" << RESET << std::endl;
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
	std::cout << RED + _name + " ScavTrap unit is destroyed" << RESET << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << GREEN + _name + " ScavTrap is now in Gate keeper mode" << RESET << std::endl;
}

void	ScavTrap::attack(const std::string& target){
	if (_ep > 0 && _hp > 0){
		std::cout << RED + _name + " made a thunder attack against " + target + " causing " + YELLOW <<_attack << RED + " points of damage !"<< RESET << std::endl;
		_ep--;
	}else if(_hp < 1)
		std::cout << _name + " has no HP left" << std::endl;
	else
		std::cout << BRIGHT_BLUE + _name + " has not enough energy points to attack !" + RESET << std::endl;
}
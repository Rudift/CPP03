/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-28 12:49:58 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-28 12:49:58 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Default Constructor
ClapTrap::ClapTrap(std::string name):_name(name), _hp(10), _ep(10), _attack(0){
	std::cout << YELLOW + _name + " is created by the Puppet Master" << RESET << std::endl;
}

//Copy Constructor
ClapTrap::ClapTrap(const ClapTrap& other){
	_name = other._name;
	_hp = other._hp;
	_ep = other._ep;
	_attack = other._attack;
}

//Affectation operator
ClapTrap&	ClapTrap::operator=(const ClapTrap& other){
	if (this != &other) {
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_attack = other._attack;
	}
	return *this;
}
//Destructor
ClapTrap::~ClapTrap(void){
	std::cout << RED + _name + " is destroyed" << RESET << std::endl;
	return ;
}

//Member fonctions
void	ClapTrap::attack(const std::string& target){
	if (_ep > 0 && _hp > 0){
		std::cout << MAGENTA + _name + " attacks " + target + " causing " + YELLOW <<_attack << MAGENTA + " points of damage !"<< RESET << std::endl;
		_ep--;
	}else if(_hp < 1)
		std::cout << _name + " has no HP left" << std::endl;
	else
		std::cout << BRIGHT_BLUE + _name + " has not enough energy points to attack !" + RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << RED + _name + " take " + YELLOW << amount << RED + " damages" + RESET << std::endl;
	_hp -= amount;
	if (_hp <= 0)
		delete this;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_ep > 0 && _hp > 0){
		std::cout << GREEN + _name + " repair itself of " + YELLOW << amount << GREEN + " hit points !" + RESET << std::endl;
		_hp += amount;
		_ep--;
	}else if(_hp < 1)
		std::cout << _name + " has no HP left" << std::endl;
	else
		std::cout << BRIGHT_BLUE + _name + " has not enough energy points to repare itself !" + RESET << std::endl;
}
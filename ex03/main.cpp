/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-28 12:49:24 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-28 12:49:24 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void){
	std::cout << BLUE + "/------Robots Creation------/" +RESET << std::endl;
	DiamondTrap*	franky = new DiamondTrap("Frankenstein");
	std::cout << BLUE + "/------Robots Actions------/" + RESET << std::endl;
	franky->displayStats();
	franky->guardGate();
	franky->whoAmI();
	franky->attack(" itself");
	franky->takeDamage(franky->getAttack());
	franky->beRepaired(10);
	franky->highFivesGuys();
	franky->displayStats();
	std::cout << BLUE + "/------Robots Destruction------/" + RESET << std::endl;
	delete	franky;
}
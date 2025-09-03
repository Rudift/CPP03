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

int main(void){
	std::cout << BLUE + "/------Robots Creation------/" + RESET << std::endl;
	ScavTrap*	goldo = new ScavTrap("Goldorak");
	ClapTrap* bob = new ScavTrap("BOB");
	std::cout << BLUE + "/------Robots Actions------/" + RESET << std::endl;
	goldo->guardGate();
	goldo->attack(bob->getName());
	bob->takeDamage(20);
	bob->beRepaired(10);
	std::cout << BLUE + "/------Robots Destruction------/" + RESET << std::endl;
	delete bob;
	delete goldo;
}
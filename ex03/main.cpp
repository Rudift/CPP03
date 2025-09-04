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
	std::cout << BLUE + "/------Robots Creation------/" + RESET << std::endl;
	DiamondTrap*	duke = new DiamondTrap("Duke Nukem");
	std::cout << BLUE + "/------Robots Actions------/" + RESET << std::endl;
	duke->highFivesGuys();
	std::cout << BLUE + "/------Robots Destruction------/" + RESET << std::endl;
	delete duke;
}
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

int main(void){
	ClapTrap *optimus = new ClapTrap("Optimus Prime");
	ClapTrap *megatron = new ClapTrap ("Megatron");
	std::cout << RED + "WELCOME TO ROBOT TURBO OVERKILL !!!" + RESET << std::endl;
	std::cout << YELLOW + "3...2...1..." + RED + "GOooooooooo!"+ RESET << std::endl;
	optimus->attack("Megatron");
	megatron->takeDamage(0);
	if (optimus)
		delete optimus;
	if (megatron)
		delete megatron;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-28 12:49:39 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-28 12:49:39 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Colors.hpp"

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

	class ClapTrap
	{
		private:
			std::string	_name;
			int			_hp;
			int			_ep;
			int			_attack;
		public:
			//Canonical
			ClapTrap(std::string name, int hp, int ep, int attack);
			ClapTrap(const ClapTrap& other);
			ClapTrap&	operator=(const ClapTrap& other);
			virtual ~ClapTrap();

			//Member fonctions
			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);

			//Accesseurs
			std::string getName() const;
	};
	
#endif
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
		private :
			static unsigned int const	_initHP = 10;
			static unsigned int const	_initEP = 10;
			static unsigned int const	_initAtk = 0;

		
		public:
			//Canonical
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap& other);
			ClapTrap&	operator=(const ClapTrap& other);
			virtual ~ClapTrap();

			//Member fonctions
			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);

			//Accesseurs
			std::string getName() const;
		
		protected :
			std::string	_name;
			unsigned int			_hp;
			unsigned int			_ep;
			unsigned int			_attack;
	};
	
#endif
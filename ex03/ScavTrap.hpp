/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-28 16:48:24 by vdeliere          #+#    #+#             */
/*   Updated: 2025-08-28 16:48:24 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#  include "ClapTrap.hpp"

	class ScavTrap : virtual public ClapTrap{
		private :

		public:
			//Cononical
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap& other);
			ScavTrap&	operator=(const ScavTrap& other);
			~ScavTrap();

			//Member fonction
			void			guardGate();
			virtual void	attack(const std::string& target);

		protected :
			static unsigned int const	_initHP = 100;
			static unsigned int const	_initEP = 50;
			static unsigned int const	_initAtk = 20;
	};
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-04 09:53:44 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-04 09:53:44 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#  include "ScavTrap.hpp"
#  include "FragTrap.hpp"
	class DiamondTrap : public ScavTrap, public FragTrap{
		private :
			std::string	_name;
		public :
			//Cononical
			DiamondTrap(std::string name);
			DiamondTrap(const DiamondTrap& other);
			DiamondTrap&	operator=(const DiamondTrap& other);
			~DiamondTrap();

			//Member fonction
			void			whoAmI() const;
			unsigned int	getAttack()const;
			void			displayStats()const;
	};

#endif
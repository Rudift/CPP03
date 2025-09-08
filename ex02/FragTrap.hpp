/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-03 13:27:56 by vdeliere          #+#    #+#             */
/*   Updated: 2025-09-03 13:27:56 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#  include "ClapTrap.hpp"

	class	FragTrap : public ClapTrap{
		private:

		public :
			//Cononical
			FragTrap(std::string name);
			FragTrap(const FragTrap& other);
			FragTrap&	operator=(const FragTrap& other);
			~FragTrap();

			//Member fonction
			void	highFivesGuys(void)const;
	};
#endif
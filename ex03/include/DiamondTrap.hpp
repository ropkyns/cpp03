/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:06:35 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/25 10:00:58 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>
# include <fstream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private :
		std::string _name;

	public :
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &Diamond);
		~DiamondTrap();

		DiamondTrap &operator= (const DiamondTrap &Diamond);

		void	attack(const std::string &target);
		void	whoAmI();

};

#endif
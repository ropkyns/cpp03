/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:45:28 by palu              #+#    #+#             */
/*   Updated: 2025/03/23 15:27:26 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>
# include <fstream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private :
		std::string _name;
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &Scav);
		~ScavTrap();

		ScavTrap &operator= (const ScavTrap &Scav);

		void	attack(const std::string &target);
		void	guardGate();

};

#endif
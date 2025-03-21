/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:42:11 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/21 15:41:01 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>
# include <fstream>

class ClapTrap
{
	private :
		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;

	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &Clap);
		~ClapTrap();

		ClapTrap &operator=	(const ClapTrap &Clap);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
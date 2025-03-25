/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:43:48 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/25 10:40:20 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int main()
{
	ScavTrap x("Louise");
	DiamondTrap y("George");
	DiamondTrap z(y);

	std::cout << std::endl;
	x.attack("George");
	y.takeDamage(0);
	z.beRepaired(1);
	z.whoAmI();
	x.guardGate();

	std::cout << std::endl << "Oh no someone fell down in the stairs, guess who !" << std::endl;
	z.takeDamage(90);
	std::cout << "Careful a coconut !!!!" << std::endl;
	z.takeDamage(11);
	z.beRepaired(10);
	std::cout << "Oh no... Rest In Peace 😔	" << std::endl << std::endl;
	for(int i = 0; i < 50; i++)
	{
		x.attack("this poor George already dead");
	}
	std::cout << std::endl;

	return (0);
}
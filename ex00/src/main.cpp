/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:43:48 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/21 16:55:11 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main()
{
	ClapTrap x("Louise");
	ClapTrap y("George");
	ClapTrap z(y);

	std::cout << std::endl;
	x.attack("George");
	y.takeDamage(0);
	z.beRepaired(1);

	std::cout << std::endl << "Oh no someone fell down in the stairs, guess who !" << std::endl;
	z.takeDamage(10);
	std::cout << "Careful a coconut !!!!" << std::endl;
	z.takeDamage(5);
	z.beRepaired(10);
	std::cout << "Oh no... Rest In Peace 😔	" << std::endl << std::endl;
	for(int i = 0; i < 10; i++)
	{
		x.attack("this poor George already dead");
	}
	std::cout << std::endl;

	return (0);
}
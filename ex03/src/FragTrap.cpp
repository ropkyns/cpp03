/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:09:07 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/24 12:47:15 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "Defautlt";
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap : " << this->_name << " has been created"<< std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap : " << name << " has been created"<< std::endl;
}

FragTrap::FragTrap(const FragTrap &Frag)
{
	this->_name = Frag._name;
	this->_hitPoint = Frag._hitPoint;
	this->_energyPoint = Frag._energyPoint;
	this->_attackDamage = Frag._attackDamage;
	std::cout << "FragTrap : " << this->_name << " has been copied" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : " << this->_name << " has been destroyed" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap &Frag)
{
	this->_name = Frag._name;
	this->_hitPoint = Frag._hitPoint;
	this->_energyPoint = Frag._energyPoint;
	this->_attackDamage = Frag._attackDamage;
	return (*this);
}

void FragTrap::attack(const std::string &target)
{
	if (this->_hitPoint > 0)
	{
		if(this->_energyPoint < 1)
			std::cout << "FragTrap : " << this->_name << " doesn't have enough energy point to attack " << target << std::endl;
		else
		{
			this->_energyPoint--;
			std::cout << "FragTrap : " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
		}
	}
	else
		std::cout << "FragTrap : " << this->_name << " has 0 hit point so he can't attack anymore " << target << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::string	highFives;
	
	if (this->_hitPoint > 0)
	{
		std::cout << "FragTrap : " << this->_name << " is asking for a high five ! (press enter to accept)" << std::endl;
		std::getline(std::cin, highFives);
	}
	else
		std::cout << "FragTrap : " << this->_name << " has 0 hit point so he can't high fives anymore" << std::endl;
}
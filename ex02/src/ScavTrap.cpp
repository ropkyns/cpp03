/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:46:50 by palu              #+#    #+#             */
/*   Updated: 2025/03/24 11:49:27 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "Defautlt";
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap : " << "Default" << " has been created"<< std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap : " << name << " has been created"<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &Scav)
{
	this->_name = Scav._name;
	this->_hitPoint = Scav._hitPoint;
	this->_energyPoint = Scav._energyPoint;
	this->_attackDamage = Scav._attackDamage;
	std::cout << "ScavTrap : " << this->_name << " has been copied" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : " << this->_name << " has been destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &Scav)
{
	this->_name = Scav._name;
	this->_hitPoint = Scav._hitPoint;
	this->_energyPoint = Scav._energyPoint;
	this->_attackDamage = Scav._attackDamage;
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoint > 0)
	{
		if(this->_energyPoint < 1)
			std::cout << "ScavTrap : " << this->_name << " doesn't have enough energy point to attack " << target << std::endl;
		else
		{
			this->_energyPoint--;
			std::cout << "ScavTrap : " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
		}
	}
	else
		std::cout << "ScavTrap : " << this->_name << " has 0 hit point so he can't attack anymore " << target << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap : " << this->_name << " is now in Gate keeper mode." << std::endl;
}
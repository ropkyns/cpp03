/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:59:58 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/25 10:10:49 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = "Defautlt";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoint = this->FragTrap::_hitPoint;
	this->_energyPoint = this->ScavTrap::_energyPoint;
	this->_attackDamage = this->FragTrap::_attackDamage;
	std::cout << "DiamondTrap : " << this->_name << " has been created"<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "DiamondTrap : " << name << " has been created"<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &Diamond)
{
	this->_name = Diamond._name;
	this->ClapTrap::_name = Diamond.ClapTrap::_name;
	this->_hitPoint = Diamond._hitPoint;
	this->_energyPoint = Diamond._energyPoint;
	this->_attackDamage = Diamond._attackDamage;
	std::cout << "DiamondTrap : " << this->_name << " has been copied" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap : " << this->_name << " has been destroyed" << std::endl;
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap &Diamond)
{
	this->_name = Diamond._name;
	this->ClapTrap::_name = Diamond.ClapTrap::_name;
	this->_hitPoint = Diamond._hitPoint;
	this->_energyPoint = Diamond._energyPoint;
	this->_attackDamage = Diamond._attackDamage;
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	if (this->_hitPoint > 0)
	{
		if(this->_energyPoint < 1)
			std::cout << "DiamondTrap : " << this->_name << " doesn't have enough energy point to attack " << target << std::endl;
		else
		{
			this->_energyPoint--;
			std::cout << "DiamondTrap : " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
		}
	}
	else
		std::cout << "DiamondTrap : " << this->_name << " has 0 hit point so he can't attack anymore " << target << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	if (this->_hitPoint > 0)
		std::cout << "DiamondTrap : Hi my name is " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl;
	else
		std::cout << "DiamondTrap : " << this->_name << " has 0 hit point so he can't tell who he is anymore " << std::endl;
}
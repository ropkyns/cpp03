/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:44:16 by paulmart          #+#    #+#             */
/*   Updated: 2025/03/23 15:45:01 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	this->_name = "Defautlt";
	std::cout << "ClapTrap : " << "Default" << " has been created"<< std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap : " << name << " has been created"<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &Clap)
{
	this->_name = Clap._name;
	this->_hitPoint = Clap._hitPoint;
	this->_energyPoint = Clap._energyPoint;
	this->_attackDamage = Clap._attackDamage;
	std::cout << "ClapTrap : " << this->_name << " has been copied" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : " << this->_name << " has been destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &Clap)
{
	this->_name = Clap._name;
	this->_hitPoint = Clap._hitPoint;
	this->_energyPoint = Clap._energyPoint;
	this->_attackDamage = Clap._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoint > 0)
	{
		if(this->_energyPoint < 1)
			std::cout << "ClapTrap : " << this->_name << " doesn't have enough energy point to attack " << target << std::endl;
		else
		{
			this->_energyPoint--;
			std::cout << "ClapTrap : " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
		}
	}
	else
		std::cout << "ClapTrap : " << this->_name << " has 0 hit point so he can't attack anymore " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint > 0)
	{
		if (amount > this->_hitPoint)
			this->_hitPoint = 0;
		else
			this->_hitPoint -= amount;
		std::cout << this->_name << " has taken " << amount << " damage(s) and has " << this->_hitPoint << " hit point(s) left" << std::endl;
	}
	else
		std::cout << "ClapTrap : " << this->_name << " has 0 hit point so he can't take damage anymore" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoint > 0)
	{
		if(this->_energyPoint < 1)
			std::cout << this->_name << " doesn't have enough energy point to be repaired" << std::endl;
		else
		{
			this->_energyPoint--;
			this->_hitPoint += amount;
			std::cout << this->_name << " has been repaired of" << amount << " hit point(s), he has now " << this->_hitPoint << " hit points" << std::endl;
		}
	}
	else
		std::cout << this->_name << " has 0 hit point so he can't be repaired anymore" << std::endl;
}
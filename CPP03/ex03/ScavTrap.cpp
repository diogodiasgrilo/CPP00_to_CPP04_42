/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:36:18 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/27 16:01:28 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << "ScavTrap created" << std::endl;
	this->_clap_hitPoints = 100;
    this->_clap_energyPoints = 50;
	this->_clap_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name)
:ClapTrap(name)
{
    std::cout << "ScavTrap " << this->_clap_name << " is created!" << std::endl;
    this->_clap_hitPoints = 100;
    this->_clap_energyPoints = 50;
    this->_clap_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
    {
        this->_clap_name = src._clap_name;
        this->_clap_hitPoints = src._clap_hitPoints;
        this->_clap_energyPoints = src._clap_energyPoints;
        this->_clap_attackDamage = src._clap_attackDamage;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_clap_name << " is destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_clap_energyPoints - 1 < 0)
    {
        this->_clap_energyPoints = 0;
        std::cout << "ScavTrap " << this->_clap_name << " has no energy points!" << std::endl;
    }  
    else if (this->_clap_hitPoints > 0)
    {
        std::cout << "ScavTrap " << this->_clap_name << " attack " << target << ", causing " << this->_clap_attackDamage << " points of damage!" << std::endl;
        this->_clap_energyPoints -= 1;
    }
    else
        std::cout << "ScavTrap " << this->_clap_name << " is dead!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_clap_name << " has enterred in Gate keeper mode" << std::endl;
}
        
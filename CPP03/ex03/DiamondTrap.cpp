/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:47:42 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/27 16:13:43 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): FragTrap(), ScavTrap() {
    std::cout << "DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &n)
: ClapTrap(n + "_clap_name"),
FragTrap(n), 
ScavTrap(n),
 _diamond_name(n)
 {
    std::cout << "Diamond constructor called" << std::endl;
    FragTrap::_clap_hitPoints = 100;
    FragTrap::_clap_attackDamage = 30;
    _clap_energyPoints = ScavTrap::_clap_energyPoints;
}

DiamondTrap::DiamondTrap(DiamondTrap &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src)
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

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->_clap_name << " is destroyed!" << std::endl;
}

void DiamondTrap::attack(const std::string &n) {
    ScavTrap::attack(n);
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is: " << _diamond_name << " and my ClapTrap name is: " << ClapTrap::_clap_name << std::endl;
}
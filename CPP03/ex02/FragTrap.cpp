/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:36:18 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/27 16:02:34 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap created" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
:ClapTrap(name)
{
    std::cout << "FragTrap " << this->_clap_name << " is created!" << std::endl;
    this->_clap_hitPoints = 100;
    this->_clap_energyPoints = 100;
    this->_clap_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

FragTrap &FragTrap::operator=(FragTrap const &src)
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

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_clap_name << " is destroyed!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->_clap_energyPoints - 1 < 0)
    {
        this->_clap_energyPoints = 0;
        std::cout << "FragTrap " << this->_clap_name << " has no energy points!" << std::endl;
    }  
    else if (this->_clap_hitPoints > 0)
    {
        std::cout << "FragTrap " << this->_clap_name << " attack " << target << ", causing " << this->_clap_attackDamage << " points of damage!" << std::endl;
        this->_clap_energyPoints -= 1;
    }
    else
        std::cout << "FragTrap " << this->_clap_name << " is dead!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High five!" << std::endl;
}
        
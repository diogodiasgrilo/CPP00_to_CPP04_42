/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:19:44 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/27 16:15:12 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: _clap_hitPoints(10),
_clap_energyPoints(10),
_clap_attackDamage(0)
{
    std::cout << "Default ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _clap_name(name),
_clap_hitPoints(10),
_clap_energyPoints(10),
_clap_attackDamage(0)
{
    std::cout << "ClapTrap " << this->_clap_name << " is created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
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

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_clap_name << " is destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_clap_energyPoints - 1 < 0)
    {
        this->_clap_energyPoints = 0;
        std::cout << "ScavTrap " << this->_clap_name << " has no energy points!" << std::endl;
    }
    else if (this->_clap_hitPoints > 0)
    {
        this->_clap_energyPoints--;
        std::cout << "ClapTrap " << this->_clap_name << " attacks " << target << ", causing " << this->_clap_attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_clap_name << " is dead and can't attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_clap_hitPoints - 1 <= 0)
        this->_clap_hitPoints = 0;
    else
        this->_clap_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_clap_name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_clap_energyPoints - 1 < 0)
    {
        this->_clap_energyPoints = 0;
        std::cout << "ScavTrap " << this->_clap_name << " has no energy points!" << std::endl;
    }
    else if (this->_clap_hitPoints > 0)
    {
        this->_clap_energyPoints--;
        this->_clap_hitPoints += amount;
        std::cout << "ClapTrap " << this->_clap_name << " is repaired with " << amount << " points of health!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_clap_name << " is dead and can't repair itself!" << std::endl;
}

const std::string &ClapTrap::getName() const 
{
    return _clap_name;
}

void ClapTrap::setName(const std::string &name) 
{
    ClapTrap::_clap_name = name;
}

int ClapTrap::getHitPoints() const 
{
    return _clap_hitPoints;
}

void ClapTrap::setHitPoints(int points) 
{
    ClapTrap::_clap_hitPoints = points;
}

int ClapTrap::getEnergyPoints() const 
{
    return _clap_energyPoints;
}

void ClapTrap::setEnergyPoints(int points) 
{
    ClapTrap::_clap_energyPoints = points;
}

int ClapTrap::getAttackDamage() const 
{
    return _clap_attackDamage;
}

void ClapTrap::setAttackDamage(int points) 
{
    ClapTrap::_clap_attackDamage = points;
}

std::ostream &operator<<(std::ostream &os, const ClapTrap &trap) 
{
    os << "name: " << trap.getName() << ", _clap_hitPoints: " << trap.getHitPoints() << ", _clap_energyPoints: " << trap.getEnergyPoints()
       << ", _clap_attackDamage: " << trap.getAttackDamage();
    return os;
}
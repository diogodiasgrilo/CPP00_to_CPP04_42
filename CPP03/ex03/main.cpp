/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:19:11 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/28 15:30:10 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    std::string	One = "One";
    std::string	Two = "Two";

    DiamondTrap	D1(One);
    DiamondTrap	D2(Two);

    std::cout << std::endl;
    D1.whoAmI();
    D2.whoAmI();
    std::cout << std::endl;

    // std::cout << "\nI can also show my ClapTrap name and it's: " << D1.getName() << " and my hit points as a ClapTrap are " << D1.getHitPoints() << std::endl;
    // std::cout << "I can also show my ClapTrap name and it's: " << D2.getName() << " and my hit points as a ClapTrap are " << D2.getHitPoints() << std::endl << std::endl;

    std::cout << "I am " << D1.getName() << " and my hit points as a DiamondTrap are " << D1.getHitPoints() << std::endl;
    std::cout << "I am " << D1.getName() << " and my energy points as a DiamondTrap are " << D1.getEnergyPoints() << std::endl;
    std::cout << "I am " << D1.getName() << " and my damage points as a DiamondTrap are " << D1.getAttackDamage() << std::endl << std::endl;

    std::cout << "Now for the interesting part:" << std::endl;
    D1.attack(Two);
    D2.takeDamage(D1.getAttackDamage());
    D2.attack(One);
    D1.takeDamage(D2.getAttackDamage());
    D2.beRepaired(15);
    D1.attack(Two);
    D2.takeDamage(D1.getAttackDamage());

    std::cout << std::endl;

    D1.guardGate();
    D1.highFivesGuys();

    std::cout << std::endl;

    D1.attack(Two);
    D2.takeDamage(D1.getAttackDamage());
    D1.attack(Two);
    D2.takeDamage(D1.getAttackDamage());
    D2.beRepaired(15);
}
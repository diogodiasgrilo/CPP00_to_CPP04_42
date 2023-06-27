/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:19:11 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/27 14:22:02 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Joffrey("Joffrey");
    ClapTrap Tyrion("Tyrion");

    std::cout << Joffrey << std::endl;
    std::cout << Tyrion << std::endl;

    std::cout << std::endl;

    Tyrion.attack("Jeoffrey");
    Joffrey.takeDamage(Tyrion.getAttackDamage());
    std::cout << Joffrey << std::endl;
    std::cout << Tyrion << std::endl;

    std::cout << std::endl;

    Joffrey.setAttackDamage(2);
    Joffrey.attack("Tyrion");
    Tyrion.takeDamage(Joffrey.getAttackDamage());
    std::cout << Joffrey << std::endl;
    std::cout << Tyrion << std::endl;

    std::cout << std::endl;

    Tyrion.beRepaired(100);
    Tyrion.setAttackDamage(1000000);
    Tyrion.attack("Joffrey");
    Joffrey.takeDamage(Tyrion.getAttackDamage());
    return 0;
}
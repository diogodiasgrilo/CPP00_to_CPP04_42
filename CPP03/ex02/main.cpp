/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:19:11 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/27 15:45:32 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap John("John");
    FragTrap Cersei("Cersei");
    FragTrap Daenerys("Daenerys");

    Daenerys.setName("Red Woman");

    std::cout << std::endl;

    Cersei.attack("John");
    John.takeDamage(Cersei.getAttackDamage());

    std::cout << std::endl;

    John.setAttackDamage(2);
    John.attack("Cersei");
    Cersei.takeDamage(John.getAttackDamage());

    std::cout << std::endl;

    Cersei.beRepaired(100);
    Cersei.setAttackDamage(1000000);
    Cersei.attack("John");
    John.takeDamage(Cersei.getAttackDamage());

    std::cout << std::endl;

    Daenerys.highFivesGuys();

    std::cout << std::endl;

    return 0;
}
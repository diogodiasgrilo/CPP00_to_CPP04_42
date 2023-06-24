/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 22:14:29 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/23 22:48:29 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
: weapon(weapon)
{
    this->name = name;
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA " << this->name << " is dead" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 22:14:09 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/23 22:54:14 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon " << this->type << " is destroyed" << std::endl;
}

std::string const &Weapon::getType(void)
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
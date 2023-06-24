/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:40:21 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/23 20:33:20 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "A zombie was created\n";
}

Zombie::~Zombie() {
    std::cout << this->name << " was deleted\n";
}

void Zombie::announce() {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::insertName(std::string newName)
{
    this->name = newName;
}
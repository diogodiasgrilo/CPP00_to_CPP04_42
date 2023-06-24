/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:40:21 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/23 19:05:37 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name << " was deleted\n";
}

void Zombie::announce() {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
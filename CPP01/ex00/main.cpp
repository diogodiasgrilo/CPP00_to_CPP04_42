/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:40:12 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/23 19:31:09 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main() {
    randomChump("Diogo");
    Zombie *b = newZombie("Martim");
    b->announce();
    delete b;
    return 0;
}
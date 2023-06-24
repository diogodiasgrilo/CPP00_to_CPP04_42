/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:40:12 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/23 20:47:23 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* setOffHorde( int N, std::string name );

int main() 
{
    int N = 15;
    Zombie *zomb = setOffHorde(N, "Diogo");
    for (int i = 0; i < N; i++)
        zomb[i].announce();
    delete[] zomb;
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:15:58 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/23 20:38:08 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIEHORDE_HPP
#  define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

Zombie* setOffHorde( int N, std::string name )
{
    Zombie *zomb = new Zombie[N];
    for (int i = 0; i < N; i++)
        zomb[i].insertName(name);
    return zomb;
}

# endif
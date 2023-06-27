/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:40:10 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/26 14:37:09 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
# include <string>

class Zombie
{
    private:
        std::string	name;
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void	announce(void);
};
#endif
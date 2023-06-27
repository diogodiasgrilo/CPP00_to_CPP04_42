/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:35:55 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/27 15:44:08 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const std::string &name);
        FragTrap(FragTrap &src);
        FragTrap &operator=(FragTrap const &src);
        ~FragTrap();
        void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:47:44 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/27 16:13:34 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: virtual public FragTrap, \
virtual public ScavTrap
{
    private:
        std::string _diamond_name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string &name);
        DiamondTrap(DiamondTrap &src);
        DiamondTrap &operator=(DiamondTrap const &src);
        ~DiamondTrap();
        void attack(const std::string& target);
        void whoAmI();
};

#endif
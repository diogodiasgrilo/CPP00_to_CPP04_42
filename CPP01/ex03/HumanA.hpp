/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    HumanA.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 22:14:19 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/23 22:30:40 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void attack(void);
};

#endif
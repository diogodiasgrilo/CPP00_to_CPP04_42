/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 22:14:00 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/23 22:54:22 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon(void);
        std::string const &getType(void);
        void setType(std::string type);
};

#endif
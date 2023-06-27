/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:19:35 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/27 15:58:17 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string _clap_name;
    int _clap_hitPoints;
    int _clap_energyPoints;
    int _clap_attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &src);
    ClapTrap &operator=(ClapTrap const &src);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    int  getAttackDamage() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
    void setHitPoints(int hitPoints);
    const std::string &getName() const;
    void setName(const std::string &name);
    void setEnergyPoints(int energyPoints);
    void setAttackDamage(int attackDamage);
};

std::ostream &operator<<(std::ostream &os, const ClapTrap &trap);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:03:56 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/30 18:50:23 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "Dropped.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *inventory[4];
		LinkedList *dropped;
        int used;
    public:
        Character();
        Character(std::string name);
        Character(const Character &src);
        Character &operator=(Character const &src);
        ~Character();
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
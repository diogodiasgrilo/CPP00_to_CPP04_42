/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:04:15 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/30 19:28:13 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() 
: name("Default"),
used(0)
{
	dropped = new LinkedList();
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(std::string name) 
: name(name),
used(0)
{
	dropped = new LinkedList();
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(const Character &src)
{
    *this = src;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] && this->inventory[i]->getEquipped())
			delete this->inventory[i];
	}    
	dropped->clear();
	delete dropped;
}

Character &Character::operator=(Character const &src)
{
	if (this != &src)
	{
		name = src.getName();
		for (int i = 0; i < 4; ++i) {
			delete inventory[i];
			inventory[i] = src.inventory[i]->clone();
		}
		this->used = src.used;
	}
    return *this;
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++) 
    {
        if (!inventory[i] || !inventory[i]->getEquipped())
        {
            inventory[i] = m;
            m->setEquipped(1);
            this->used++;
            // std::cout << "Equipped " << m->getType() << std::endl;
            break;
        }
        else if (i == 3)
            std::cout << "Inventory full" << std::endl;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 4 && idx < this->used && inventory[idx]->getEquipped())
    {
        std::cout << "Unequipped " << inventory[idx]->getType() << std::endl;
		dropped->addFront(inventory[idx]);
        inventory[idx]->setEquipped(0);
        this->used--;
    }
    else if (idx < 0 || idx > 4)
        std::cout << "Index out of range" << std::endl;
    else
        std::cout << "No materia to unequip" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 4 && idx < this->used && inventory[idx]->getEquipped())
    {
        inventory[idx]->use(target);
    }
    else
        std::cout << "No materia in this slot" << std::endl;
}

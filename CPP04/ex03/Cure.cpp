/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:50:38 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/30 18:04:41 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure &src) {*this = src;}

Cure::~Cure(void) {}

Cure &Cure::operator=(Cure const &src)
{
	if (this != &src)
	{
		this->_type = src._type;
    	this->_equiped = src._equiped;
	}
    return (*this);
}

AMateria* Cure::clone() const {return (new Cure());}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


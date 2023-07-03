/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:54:35 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/30 18:06:11 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
: _equiped(0)
{
    this->_type = "AMateria";
    this->_equiped = 0;
    return ;
}

AMateria::AMateria(std::string const &type)
: _equiped(0)
{
    this->_type = type;
    this->_equiped = 0;
    return ;
}

AMateria::AMateria(const AMateria &src)
{
    *this = src;
    return ;
}

AMateria::~AMateria(void)
{
    return ;
}

AMateria &AMateria::operator=(AMateria const &src)
{
	if (this != &src)
	{
		this->_type = src._type;
    	this->_equiped = src._equiped;
	}
    return (*this);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

unsigned int const & AMateria::getEquipped() const
{
    return (this->_equiped);
}

void AMateria::setEquipped(unsigned int const &equiped)
{
    this->_equiped = equiped;
}


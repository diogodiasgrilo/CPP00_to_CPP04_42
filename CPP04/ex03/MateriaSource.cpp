/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:17:30 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/30 18:06:48 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
: _count(0)
{
    this->_count = 0;
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource &src)
{
    *this = src;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (this->_materia[i])
            delete this->_materia[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
	if (this != &src)
	{
		this->_count = src._count;
		for (int i = 0; i < 4; i++)
			this->_materia[i] = src._materia[i];
	}
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (this->_count < 4)
    {
        this->_materia[this->_count] = m;
        this->_count++;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
        if (this->_materia[i] && this->_materia[i]->getType() == type)
            return (this->_materia[i]->clone());
    return (NULL);
}

int MateriaSource::getCount() const
{
    return (this->_count);
}

AMateria *MateriaSource::getMateria(int i) const
{
    return (this->_materia[i]);
}

void MateriaSource::setMateria(int i, AMateria *m)
{
    this->_materia[i] = m;
}

void MateriaSource::setCount(int count)
{
    this->_count = count;
}


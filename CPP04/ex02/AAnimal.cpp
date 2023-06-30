/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:26:17 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/29 23:30:02 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

AAnimal::AAnimal()
{
    std::cout << "Animal created" << std::endl;
    this->_type = "Animal";
    _brain = new Brain();
}

AAnimal::AAnimal(const AAnimal &src)
{
    std::cout << "Copy constructor called" << std::endl;
    _brain = new Brain();
    *this = src;
}

AAnimal &AAnimal::operator=(AAnimal const &src)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
        this->_type = src._type;
    return (*this);
}

AAnimal::~AAnimal()
{
    delete _brain;
    std::cout << "Animal destroyed" << std::endl;
}


std::string AAnimal::getType() const
{
    return (this->_type);
}

void AAnimal::setType(const std::string &type) 
{
    AAnimal::_type = type;
}


void AAnimal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

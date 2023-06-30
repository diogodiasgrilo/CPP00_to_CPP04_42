/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:26:17 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/29 23:26:49 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

Animal::Animal()
{
    std::cout << "Animal created" << std::endl;
    this->_type = "Animal";
    _brain = new Brain();
}

Animal::Animal(const Animal &src)
{
    std::cout << "Copy constructor called" << std::endl;
    _brain = new Brain();
    *this = src;
}

Animal &Animal::operator=(Animal const &src)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
    {
        _type = src._type;
        *_brain = *src._brain;
    }
    return (*this);
}

Animal::~Animal()
{
    delete _brain;
    std::cout << "Animal destroyed" << std::endl;
}


std::string Animal::getType() const
{
    return (this->_type);
}

void Animal::setType(const std::string &type) 
{
    _type = type;
}


void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

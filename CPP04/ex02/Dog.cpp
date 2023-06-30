/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:27:59 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/28 23:08:56 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog created" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog &src)
: AAnimal(src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Dog &Dog::operator=(Dog const &src)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
        this->_type = src._type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Bark bark bark" << std::endl;
}

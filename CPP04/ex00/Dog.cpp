/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:27:59 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/30 17:15:10 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog created" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog &src)
: Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog &Dog::operator=(Dog const &src)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
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

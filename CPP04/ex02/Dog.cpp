/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:27:59 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/30 17:51:33 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog created" << std::endl;
    this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &src)
: AAnimal(src)
{
	*this = src;
	std::cout << "Dog constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &src)
	{
		this->_type = src._type;
		this->_brain = new Brain(*src._brain);
	}
    return (*this);
}

Dog::~Dog()
{
	
    std::cout << "Dog destroyed" << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const
{
    std::cout << "Bark bark bark" << std::endl;
}

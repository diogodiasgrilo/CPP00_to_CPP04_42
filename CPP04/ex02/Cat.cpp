/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:27:41 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/30 17:51:35 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat created" << std::endl;
    this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat &src)
: AAnimal(src)
{
    *this = src;
	std::cout << "Cat constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &src)
	{
		this->_type = src._type;
		this->_brain = new Brain(*src._brain);
	}
    return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow meow" << std::endl;
}
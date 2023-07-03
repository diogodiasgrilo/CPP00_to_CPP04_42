/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:27:41 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/30 17:14:46 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat created" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat &src)
: Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat &Cat::operator=(Cat const &src)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow meow" << std::endl;
}
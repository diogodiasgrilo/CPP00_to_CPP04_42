/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:38:59 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/29 23:21:15 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal created" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destroyed" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong animal sound" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:26:17 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/29 23:24:59 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal created" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal &src)
{
    std::cout << "Animal copied" << std::endl;
    *this = src;
}

Animal &Animal::operator=(Animal const &src)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}


std::string Animal::getType() const
{
    return (this->type);
}


void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

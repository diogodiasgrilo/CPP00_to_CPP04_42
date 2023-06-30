/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:37:31 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/29 23:21:32 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat created" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
        this->type = src.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong meow meow" << std::endl;
}


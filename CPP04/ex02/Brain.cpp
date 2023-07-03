/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 21:52:49 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/30 17:46:03 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &src)
{
    std::cout << "Brain constructor called" << std::endl;
    *this = src;
}

Brain &Brain::operator=(const Brain &src)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &src)
        for (int i = 0; i < 100; i++)
            this->ideas[i] = src.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}


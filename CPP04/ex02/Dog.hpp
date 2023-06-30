/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:28:05 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/28 23:07:05 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"

class Dog : public AAnimal
{
    public:
        Dog();
        Dog(const Dog &src);
        Dog &operator=(Dog const &src);
        ~Dog();
        void makeSound() const;
};

#endif
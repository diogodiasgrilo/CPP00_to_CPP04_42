/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:28:05 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/30 12:33:24 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;
    public:
        Dog();
        Dog(const Dog &src);
        Dog &operator=(Dog const &src);
        ~Dog();
        void makeSound() const;
};

#endif
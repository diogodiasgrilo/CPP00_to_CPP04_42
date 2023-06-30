/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:25:55 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/29 23:30:12 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;
        Brain       *_brain;
    public:
        Animal();
        Animal(const Animal &src);
        Animal &operator=(Animal const &src);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
        void setType(const std::string &type);
};

#endif
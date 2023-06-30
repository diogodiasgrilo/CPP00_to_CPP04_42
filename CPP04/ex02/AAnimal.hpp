/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:25:55 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/29 23:30:06 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
    protected:
        std::string _type;
        Brain       *_brain;
    public:
        AAnimal();
        AAnimal(const AAnimal &src);
        AAnimal &operator=(AAnimal const &src);
        virtual ~AAnimal();
        std::string getType() const;
        void setType(const std::string &type);
        virtual void makeSound() const = 0;
};

#endif
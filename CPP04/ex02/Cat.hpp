/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:27:13 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/28 23:07:16 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"

class Cat : public AAnimal
{
    public:
        Cat();
        Cat(Cat &src);
        Cat &operator=(Cat const &src);
        ~Cat();
        void makeSound() const;
};

#endif
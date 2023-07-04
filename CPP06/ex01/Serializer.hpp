/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:04:40 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/04 16:43:00 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <ctime>
# include "Data.hpp"

typedef unsigned int * uintptr_t;

class Serializer
{
    public:
        Serializer();
        Serializer(Serializer &src);
        Serializer &operator=(Serializer const &src);
        ~Serializer();
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};

#endif
        
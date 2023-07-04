/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:04:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/04 16:43:20 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(Serializer &src) 
{
    *this = src;
}

Serializer &Serializer::operator=(Serializer const &src)
{
    if (this == &src)
        return *this;
    return *this;
}

Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t raw;

    raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data* ptr;

    ptr = reinterpret_cast<Data*>(raw);
    return (ptr);
}
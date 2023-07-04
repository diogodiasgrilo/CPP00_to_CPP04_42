/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:09:40 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/04 13:16:35 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Serializer serializer;
    Data* data;
    Data* returned;
    // uintptr_t raw;

    data = new Data;
    data->s1 = "Hello";
    data->n = 42;
    data->s2 = "World";
    returned = serializer.deserialize(serializer.serialize(data));
    std::cout << "returned was: " << returned->s1 << " " << returned->n << " " << returned->s2 << std::endl;
	delete (returned);
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:35:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/02 20:52:41 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int int_array[5] = {1, 2, 3, 4, 5};
    std::string string_array[5] = {"one", "two", "three", "four", "five"};
    float float_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << std::endl;
    std::cout << "int_array: ";
    ::iter(int_array, 5, print);
    std::cout << std::endl << std::endl;

    std::cout << "string_array: ";
    ::iter(string_array, 5, print);
    std::cout << std::endl << std::endl;

    std::cout << "float_array: ";
    ::iter(float_array, 5, print);
    std::cout << std::endl << std::endl;

    std::cout << "int_array: ";
    ::iter(int_array, 5, add);
    std::cout << std::endl << std::endl;

    std::cout << "string_array: ";
    ::iter(string_array, 5, add);
    std::cout << std::endl << std::endl;

    std::cout << "float_array: ";
    ::iter(float_array, 5, add);
    std::cout << std::endl << std::endl;

    return (0);
}
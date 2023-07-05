/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:35:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/05 13:02:43 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int int_array[5] = {1, 2, 3, 4, 5};
    std::string string_array[5] = {"one", "two", "three", "four", "five"};
    float float_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << std::endl;
    std::cout << "int_array iterated with the print function: ";
    ::iter(int_array, 5, print);
    std::cout << std::endl << std::endl;

    std::cout << "string_array iterated with the print function: ";
    ::iter(string_array, 5, print);
    std::cout << std::endl << std::endl;

    std::cout << "float_array iterated with the print function: ";
    ::iter(float_array, 5, print);
    std::cout << std::endl << std::endl;

    std::cout << "int_array iterated with the add function: ";
    ::iter(int_array, 5, add);
    std::cout << std::endl << std::endl;

    std::cout << "string_array iterated with the add function: ";
    ::iter(string_array, 5, add);
    std::cout << std::endl << std::endl;

    std::cout << "float_array iterated with the add function: ";
    ::iter(float_array, 5, add);
    std::cout << std::endl << std::endl;

    return (0);
}
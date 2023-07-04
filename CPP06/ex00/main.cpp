/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:35:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/04 13:56:18 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
    ScalarConverter sc;
    int i = 1;

    if (argc != 2)
    {
        std::cout << "Error: No arguments/Too Many Arguments" << std::endl;
        return (1);
    }
    sc.convert(argv[i]);
    return (0);
}
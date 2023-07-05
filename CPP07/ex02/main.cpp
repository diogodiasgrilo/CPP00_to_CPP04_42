/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:46:41 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/04 14:57:33 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> a(5);
    Array<int> b(5);
    Array<int> c(5);

    for (int i = 0; i < 5; i++)
    {
        a[i] = i;
        b[i] = i + 1;
        c[i] = i + 2;
    }
    
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    
}

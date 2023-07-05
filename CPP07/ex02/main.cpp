/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:46:41 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/05 13:44:30 by diogpere         ###   ########.fr       */
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

	std::cout << "\ntrying to acess out of bounds with -1 index: " << std::endl << a[-1] << std::endl << std::endl;
	std::cout << "a has size: " << a.size() << std::endl;
	a[2] = 342;
	a[4] = 42;
    std::cout << "a: " << a << std::endl;
	std::cout << "b has size: " << b.size() << std::endl;
    std::cout << "b: " << b << std::endl;
	std::cout << "c has size: " << c.size() << std::endl;
    std::cout << "c: " << c << std::endl;
    
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 22:57:52 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/25 22:36:31 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include "Point.hpp"
#include <iostream>

int main( void ) 
{
    Point a(0, 0);
    Point b(0, 4);
    Point c(4, 0);
    Point point1(1, 1);
    std::cout << "a = " << a.getX() << ", " << a.getY() << std::endl;
    std::cout << "b = " << b.getX() << ", " << b.getY() << std::endl;
    std::cout << "c = " << c.getX() << ", " << c.getY() << std::endl;
    std::cout << "point1 = " << point1.getX() << ", " << point1.getY() << std::endl;
    std::cout << "bsp(a, b, c, point1) = " << bsp(a, b, c, point1) << std::endl << std::endl; 
    Point point2(4, 4);
    std::cout << "point2 = " << point2.getX() << ", " << point2.getY() << std::endl;
    std::cout << "bsp(a, b, c, point2) = " << bsp(a, b, c, point2) << std::endl << std::endl;
    Point point3(2, 2);
    std::cout << "point3 = " << point3.getX() << ", " << point3.getY() << std::endl;
    std::cout << "bsp(a, b, c, point3) = " << bsp(a, b, c, point3) << std::endl << std::endl;
    Point point4(3, 1);
    std::cout << "point4 = " << point4.getX() << ", " << point4.getY() << std::endl;
    std::cout << "bsp(a, b, c, point4) = " << bsp(a, b, c, point4) << std::endl << std::endl;
    Point point5(10, 3);
    std::cout << "point5 = " << point5.getX() << ", " << point5.getY() << std::endl;
    std::cout << "bsp(a, b, c, point5) = " << bsp(a, b, c, point5) << std::endl << std::endl;
    return 0;
}
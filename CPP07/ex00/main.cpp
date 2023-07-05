/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:35:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/05 12:56:54 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{

    int a = 2;
    int b = 3;
	
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
    std::string c = "chaine1";
    std::string d = "chaine2";
	
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	// std::cout << "\nnow with strings\n\n";

	// std::string e = "fa";
	// std::string f = "fd";
	// std::cout << "e = " << e << std::endl;
	// std::cout << "f = " << f << std::endl;
	// std::cout << "min(e, f) = " << min(e, f) << std::endl;
	// std::cout << "max(e, f) = " << max(e, f) << std::endl;
	// std::cout << "swap(e, f)" << std::endl;
	// swap(e, f);
	// std::cout << "e = " << e << std::endl;
	// std::cout << "f = " << f << std::endl;

	// std::cout << "\nnow with doubles\n\n";

	// double g = 42.42;
	// double h = 21.21;
	// std::cout << "g = " << g << std::endl;
	// std::cout << "h = " << h << std::endl;
	// std::cout << "min(g, h) = " << min(g, h) << std::endl;
	// std::cout << "max(g, h) = " << max(g, h) << std::endl;
	// std::cout << "swap(g, h)" << std::endl;
	// swap(g, h);
	// std::cout << "g = " << g << std::endl;
	// std::cout << "h = " << h << std::endl;

    return (0);
}
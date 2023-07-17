/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:35:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/13 23:03:58 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
	try 
	{
		checkErrors(ac, av);
		sort(ac - 1, av);
	}
	catch(const std::invalid_argument &e) 
	{
		std::cerr << REDCOLOR << e.what() << ENDCOLOR << '\n';
	}
	return 0;
}
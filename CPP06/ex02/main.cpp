/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:02:04 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/04 13:53:57 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main(void)
{
    Base	*p;
	srand(time(NULL));

	p = generate();
	identify(p);
	identify(*p);
	delete p;
	return (0);
}

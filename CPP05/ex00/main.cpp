/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:35:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/01 13:55:27 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat *bureaucrat = new Bureaucrat("Diogo", 1);
    std::cout << *bureaucrat << std::endl;
    delete bureaucrat;
    bureaucrat = new Bureaucrat("Diogo", 150);
    std::cout << *bureaucrat << std::endl;
    delete bureaucrat;
    bureaucrat = new Bureaucrat("Diogo", 0);
    std::cout << *bureaucrat << std::endl;
    delete bureaucrat;
    bureaucrat = new Bureaucrat("Diogo", 151);
    std::cout << *bureaucrat << std::endl;
    delete bureaucrat;
    bureaucrat = new Bureaucrat("Diogo", 2);
    std::cout << *bureaucrat << std::endl;
    delete bureaucrat;
    bureaucrat = new Bureaucrat("Diogo", 149);
    std::cout << *bureaucrat << std::endl;
    delete bureaucrat;
    bureaucrat = new Bureaucrat("Diogo", 3);
    std::cout << *bureaucrat << std::endl;
    delete bureaucrat;
    bureaucrat = new Bureaucrat("Diogo", 148);
    std::cout << *bureaucrat << std::endl;
    delete bureaucrat;
    bureaucrat = new Bureaucrat("Diogo", 4);
    std::cout << *bureaucrat << std::endl;
    delete bureaucrat;
    bureaucrat = new Bureaucrat("Diogo", 147);
    std::cout << *bureaucrat << std::endl;
    delete bureaucrat;
    bureaucrat = new Bureaucrat("Diogo", 5);
    std::cout << *bureaucrat << std::endl;
    delete bureaucrat;
    return (0);
}